#include "ellipse.h"

Ellipse::Ellipse(int xc, int yc, int a, int b):
    xc_(xc),
    yc_(yc),
    a_(a),
    b_(b)
{}

void Ellipse::drawCanon(QGraphicsScene *scene, const QColor &color)
{
    int x, y;
    double a2 = a_ * a_;
    double b2 = b_ * b_;
    Point *point;
    int half_x = static_cast<int>(round(a2 / sqrt(a2 + b2)));
    int half_y = static_cast<int>(round(b2 / sqrt(a2 + b2)));
    for (int x = 0; x <= half_x; x++)
    {
        y = static_cast<int>(round(b_ * sqrt(1.0 - x * x / a2)));
        point = new Point(x + xc_, y + yc_, color);
        scene->addItem(point);
        point = new Point(xc_ - x, y + yc_, color);
        scene->addItem(point);
        point = new Point(x + xc_, yc_ - y, color);
        scene->addItem(point);
        point = new Point(xc_ - x, yc_ - y, color);
        scene->addItem(point);
    }


    for (int y = half_y; y >= 0; y--)
    {
        x = static_cast<int>(round(a_ * sqrt(1.0 - y * y / b2)));
        point = new Point(x + xc_, y + yc_, color);
        scene->addItem(point);
        point = new Point(xc_ - x, y + yc_, color);
        scene->addItem(point);
        point = new Point(x + xc_, yc_ - y, color);
        scene->addItem(point);
        point = new Point(xc_ - x, yc_ - y, color);
        scene->addItem(point);
    }

}

void Ellipse::drawParam(QGraphicsScene *scene, const QColor &color)
{
    double t = 0;
    double step = 1.0 / qMax(a_, b_);
    int x, y;
    Point *point;
    while (t < M_PI_2 + step)
    {
        x = static_cast<int>(round(a_ * cos(t)));
        y = static_cast<int>(round(b_ * sin(t)));
        point = new Point(x + xc_, y + yc_, color);
        scene->addItem(point);
        point = new Point(xc_ - x, y + yc_, color);
        scene->addItem(point);
        point = new Point(x + xc_, yc_ - y, color);
        scene->addItem(point);
        point = new Point(xc_ - x, yc_ - y, color);
        scene->addItem(point);
        t += step;
    }
}

void Ellipse::drawBresenham(QGraphicsScene *scene, const QColor &color)
{
    int a2 = a_ * a_;
    int b2 = b_ * b_;
    int ad = 2 * a2;
    int bd = 2 * b2;
    Point *point;
    int x = 0, y = b_;
    int d = a2 + b2 - ad * b_;
    int d1, d2;

    while (y >= 0)
    {
        point = new Point(x + xc_, y + yc_, color);
        scene->addItem(point);
        point = new Point(xc_ - x, y + yc_, color);
        scene->addItem(point);
        point = new Point(x + xc_, yc_ - y, color);
        scene->addItem(point);
        point = new Point(xc_ - x, yc_ - y, color);
        scene->addItem(point);

        if (d < 0)
        {
            d1 = 2 * d + ad * y - a2;
            x++;
            if (d1 > 0)
            {
                y--;
                d += bd * x + b2 + a2 - ad * y;
            }
            else
            {
                d += bd * x + b2;
            }
        }
        else if (d == 0)
        {
            x++;
            y--;
            d += bd * x + b2 + a2 - ad * y;
        }
        else
        {
            d2 = 2 * d - bd * x - b2;
            y--;
            if (d2 < 0)
            {
                x++;
                d += bd * x + b2 + a2 - ad * y;
            }
            else
            {
                d += a2 - ad * y;
            }
        }
    }
}


void Ellipse::drawMiddlePoint(QGraphicsScene *scene, const QColor &color)
{
    int a2 = a_ * a_;
    int b2 = b_ * b_;
    int ad = 2 * a2;
    int bd = 2 * b2;
    int rdel2 = static_cast<int>(a2 / sqrt(a2 + b2));
    int x = 0;
    int y = b_;
    Point *point;
    int df = 0;
    int f = static_cast<int>(b2 - a2 * b_ + 0.25 * a2);
    int delta = -ad * y;
    for (x = 0; x <= rdel2; x++)
    {
        point = new Point(x + xc_, y + yc_, color);
        scene->addItem(point);
        point = new Point(xc_ - x, y + yc_, color);
        scene->addItem(point);
        point = new Point(x + xc_, yc_ - y, color);
        scene->addItem(point);
        point = new Point(xc_ - x, yc_ - y, color);
        scene->addItem(point);
        if (f >= 0)
        {
            y--;
            delta += ad;
            f += delta;
        }
        df += bd;
        f  += df + b2;
    }
    delta = bd * x;
    f += -b2 * (x + 0.75) - a2 * (y - 0.75);
    df = -ad * y;
    for(; y >= 0; y--)
    {
        point = new Point(x + xc_, y + yc_, color);
        scene->addItem(point);
        point = new Point(xc_ - x, y + yc_, color);
        scene->addItem(point);
        point = new Point(x + xc_, yc_ - y, color);
        scene->addItem(point);
        point = new Point(xc_ - x, yc_ - y, color);
        scene->addItem(point);
        if (f < 0)
        {
            x++;
            delta += bd;
            f += delta;
        }
        df += ad;
        f  += df + a2;
    }

}

void Ellipse::drawLibrary(QGraphicsScene *scene, const QColor &color)
{
    scene->addEllipse(xc_ - a_, yc_ - b_, a_ * 2, b_ * 2, color);
}

void Ellipse::increaseSize(const int &step, const double &size)
{
    a_ += step;
    b_ = static_cast<int>(a_ * size);
}
