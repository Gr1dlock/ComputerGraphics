#include "floatinghorizon.h"

void FloatingHorizon::horizon(QPainter *painter, int x1,  int y1, int x2, int y2)
{
    if (x2 < x1)
    {
        qSwap(x1, x2);
        qSwap(y1, y2);
    }
    if (x2 == x1)
    {
        top[x2] = qMax(top[x2], y2);
        bottom[x2] = qMin(bottom[x2], y2);
        painter->drawLine(x1, y1, x2, y2);
    }
    else
    {
        int x_prev = x1;
        int y_prev = y1;
        double m = (y2 - y1) / static_cast<double>(x2 - x1);
        for (int x = x1; x2 >= x; x++)
        {
            int y = static_cast<int>(round(m * (x - x1) + y1));
            top[x] = qMax(top[x], y);
            bottom[x] = qMin(bottom[x], y);
            if (x >= 0 && x <= widget_width)
            {
                painter->drawLine(x_prev, y_prev, x, y);
            }
            x_prev = x;
            y_prev = y;
        }
    }
}

int FloatingHorizon::isVisible(const int &y, const int &x)
{
    if (y < top[x] && y > bottom[x])
        return 0;
    if (y >= top[x])
        return 1;
    return -1;
}

void FloatingHorizon::findIntersection(int &xi, int &yi, int x1, int y1, int x2, int y2, const QVector<int> &horizon)
{
    int delta_x = x2 - x1;
    int delta_y_c = y2 - y1;
    int delta_y_p = horizon[x2] - horizon[x1];
    if (delta_x == 0)
    {
        xi = x2;
        yi = horizon[x2];
    }
    else if (y1 == horizon[x1] && y2 == horizon[x2])
    {
        xi = x1;
        yi = y1;
    }
    else
    {
        double m = delta_y_c / static_cast<double>(delta_x);
        xi = x1 - static_cast<int>(round(delta_x * (horizon[x1] - y1) / static_cast<double>(delta_y_p - delta_y_c)));
        yi =  static_cast<int>(round((xi - x1) * m + y1));
    }
}

void FloatingHorizon::processEdge(QPainter *painter, int &edge_x, int &edge_y, const int &x, const int &y)
{
    if (edge_x != -1)
        horizon(painter, edge_x, edge_y, x, y);
    edge_x = x;
    edge_y = y;
}

void FloatingHorizon::algorithm(QPainter *painter, const SurfaceData &s_data, const TransformData &t_data)
{
    int x_left = -1;
    int y_left = -1;
    int x_right = -1;
    int y_right = -1;
    double x_beg = s_data.getBegX();
    double x_end = s_data.getEndX();
    double x_step = s_data.getStepX();
    double z_beg = s_data.getBegZ();
    double z_end = s_data.getEndZ();
    double z_step = s_data.getStepZ();
    int x_prev, y_prev;
    func cur_func = s_data.getFunc();
    for (int i = 0; i <= widget_width; i++)
    {
        top.push_back(0);
        bottom.push_back(widget_height);
    }
    for (double z = z_end; z >= z_beg; z -= z_step)
    {
        t_data.transform(x_beg, (*cur_func)(x_beg, z), z, x_prev, y_prev);
        processEdge(painter, x_left, y_left, x_prev, y_prev);
        int prev_flag = isVisible(y_prev, x_prev);
        for (double x = x_beg; x < x_end; x += x_step)
        {
            int x_cur = 0, y_cur = 0;
            int xi, yi;
            t_data.transform(x, cur_func(x, z), z, x_cur, y_cur);
            int cur_flag = isVisible(y_cur, x_cur);
            if (prev_flag == cur_flag)
            {
                if (prev_flag)
                {
                    horizon(painter, x_prev, y_prev, x_cur, y_cur);
                }
            }
            else if (cur_flag == 0)
            {
                if (prev_flag == 1)
                {
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, top);
                }
                else
                {
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, bottom);
                }
                horizon(painter, x_prev, y_prev, xi, yi);
            }
            else if (cur_flag == 1)
            {
                if (prev_flag == 0)
                {
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, top);
                    horizon(painter, x_prev, y_prev, xi, yi);
                }
                else
                {
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, bottom);
                    horizon(painter, x_prev, y_prev, xi, yi);
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, top);
                    horizon(painter, xi, yi, x_cur, y_cur);
                }
            }
            else
            {
                if (prev_flag == 0)
                {
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, bottom);
                    horizon(painter, x_prev, y_prev, xi, yi);
                }
                else
                {
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, top);
                    horizon(painter, x_prev, y_prev, xi, yi);
                    findIntersection(xi, yi, x_prev, y_prev, x_cur, y_cur, bottom);
                    horizon(painter, xi, yi, x_cur, y_cur);
                }
            }
            prev_flag = cur_flag;
            x_prev = x_cur;
            y_prev = y_cur;
        }
        processEdge(painter, x_right, y_right, x_prev, y_prev);
    }
}

int FloatingHorizon::sign(int num)
{
    if (num < 0)
        return -1;
    if (num > 0)
        return 1;
    return 0;
}

