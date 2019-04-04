#include "circle.h"
#include <QtDebug>

Circle::Circle(int xc, int yc, int r):
    xc_(xc),
    yc_(yc),
    r_(r)
{}


double Circle::drawCanon(QGraphicsScene *scene, const QColor &color, const bool &draw)
{
    clock_t res_time = 0;
    clock_t t1 = clock();
    int y, x;
    int half = static_cast<int>(round(r_ / sqrt(2)));
    double r2 = r_ * r_;
    Point *point;
    for (x = 0; x <= half; x++)
    {
        y = static_cast<int>(round(sqrt(r2 - x * x)));
        res_time += clock() - t1;
        if (draw)
        {
            point = new Point(xc_ + x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ + x, yc_ - y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ - y, color);
            scene->addItem(point);
        }
        t1 = clock();
    }
    for (y = half; y >= 0; y--)
    {
        x = static_cast<int>(round(sqrt(r2 - y * y)));
        res_time += clock() - t1;
        if (draw)
        {
            point = new Point(xc_ + x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ + x, yc_ - y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ - y, color);
            scene->addItem(point);
        }
        t1 = clock();
    }
    res_time += clock() - t1;
    return static_cast<double>(res_time) / CLOCKS_PER_SEC;
}

double Circle::drawParam(QGraphicsScene *scene, const QColor &color, const bool &draw)
{
    clock_t res_time = 0;
    clock_t t1 = clock();
    int x, y;
    double step = 1.0 / r_;
    double t = 0;
    Point *point;
    while (t <= M_PI_2 + step)
    {
        x = static_cast<int>(round(r_ * cos(t)));
        y = static_cast<int>(round(r_ * sin(t)));
        res_time += clock() - t1;
        if (draw)
        {
            point = new Point(xc_ + x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ + x, yc_ - y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ - y, color);
            scene->addItem(point);
        }
        t1 = clock();
        t += step;
    }
    res_time += clock() - t1;
    return static_cast<double>(res_time) / CLOCKS_PER_SEC;
}

double Circle::drawBresenham(QGraphicsScene *scene, const QColor &color, const bool &draw)
{
    clock_t res_time = 0;
    clock_t t1 = clock();
    int x = 0;
    int y = r_;
    int d = 2 * (1 - r_);
    int d1, d2;
    Point *point;
    while (y >= 0)
    {
        res_time += clock() - t1;
        if (draw)
        {
            point = new Point(xc_ + x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ + x, yc_ - y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ - y, color);
            scene->addItem(point);
        }
        t1 = clock();
        if (d < 0)
        {
            d1 = 2 * (d +  y) - 1;
            x++;
            if (d1 < 0)
            {
                d += 2 * x + 1;
            }
            else
            {
                y--;
                d += 2 * (x - y + 1);
            }
        }
        else if (d > 0)
        {
            d2 = 2 *d - 2 * x - 1;
            y--;
            if (d2 < 0)
            {
                x++;
                d += 2 * (x - y + 1);
            }
            else
            {
                d += -2 * y + 1;
            }
        }
        else
        {
            x++;
            y--;
            d += 2 * (x - y + 1);
        }
    }
    res_time += clock() - t1;
    return static_cast<double>(res_time) / CLOCKS_PER_SEC;
}

double Circle::drawMiddlePoint(QGraphicsScene *scene, const QColor &color, const bool &draw)
{
    clock_t res_time = 0;
    clock_t t1 = clock();
    int r2 = r_ * r_;
    int rd = 2 * r2;
    int half = static_cast<int>(round(r_ / sqrt(2)));
    int x = 0;
    int y = r_;
    int f = static_cast<int>(1.25 * r2 - r2 * r_);
    int df = 0;
    int delta = -rd * y;
    Point *point;
    for (x = 0; x <= half; x++)
    {
        res_time += clock() - t1;
        if (draw)
        {
            point = new Point(xc_ + x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ + x, yc_ - y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ - y, color);
            scene->addItem(point);
        }
        t1 = clock();
        if (f >= 0)
        {
            y--;
            delta += rd;
            f += delta;
        }
        df += rd;
        f  += df + r2;
    }
    delta = rd * x;
    f += - r2 * (x + y);
    df = -rd * y;
    while (y >= 0)
    {
        res_time += clock() - t1;
        if (draw)
        {
            point = new Point(xc_ + x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ + y, color);
            scene->addItem(point);
            point = new Point(xc_ + x, yc_ - y, color);
            scene->addItem(point);
            point = new Point(xc_ - x, yc_ - y, color);
            scene->addItem(point);
        }
        t1 = clock();
        y--;
        if(f < 0)
        {
            x++;
            delta += rd;
            f += delta;
        }
        df += rd;
        f  += df + r2;
    }
    res_time += clock() - t1;
    return static_cast<double>(res_time) / CLOCKS_PER_SEC;
}

double Circle::drawLibrary(QGraphicsScene *scene, const QColor &color)
{
    clock_t res_time = 0;
    clock_t t1 = clock();
    scene->addEllipse(xc_ - r_, yc_ - r_, r_ * 2, r_ * 2, color);
    res_time += clock() - t1;
    return static_cast<double>(res_time) / CLOCKS_PER_SEC;
}

void Circle::increaseSize(int step)
{
    r_ += step;
}

