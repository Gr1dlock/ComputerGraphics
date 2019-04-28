#include "drawing.h"

int sign(int x)
{
    if (x > 0)
        return 1;
    else if (x == 0)
        return 0;
    return -1;
}

void drawBresenham(QPainter &painter, const QPoint &first, const QPoint &second)
{

    int xn = first.x();
    int yn = first.y();
    int xk = second.x();
    int yk = second.y();
    if (xn == xk && yn == yk)
    {
        painter.drawPoint(xk, yk);
    }
    else
    {
        int dx = xk - xn;
        int dy = yk - yn;
        int sx = sign(dx);
        int sy = sign(dy);
        dx = abs(dx);
        dy = abs(dy);
        bool exchange;
        if (dy > dx)
        {
            qSwap(dx, dy);
            exchange = true;
        }
        else
            exchange = false;
        int e = 2 * dy - dx;
        int x = xn, y = yn;
        for (int i = 0; i < dx + 1; i++)
        {
            painter.drawPoint(x, y);
            if (e >= 0)
            {
                if (exchange)
                    x += sx;
                else
                    y += sy;
                e -= 2 * dx;
            }
            if (exchange)
                y += sy;
            else
                x += sx;
            e += 2 * dy;
        }
    }
}

void drawBresenhamRect(QPainter &painter, const QRect &rect)
{
    drawBresenham(painter, rect.topLeft(), rect.topRight());
    drawBresenham(painter, rect.topRight(), rect.bottomRight());
    drawBresenham(painter, rect.bottomRight(), rect.bottomLeft());
    drawBresenham(painter, rect.bottomLeft(), rect.topLeft());
}

