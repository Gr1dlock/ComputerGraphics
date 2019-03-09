#include "epicycloid.h"


Epicycloid::Epicycloid()
{

}

Epicycloid::Epicycloid(double a_, double b_)
    : a (a_),
      b(b_)
{
    double angle = 0;
    int x, y;
    while (angle < M_PI * 2)
    {
        x = static_cast<int>((a + b) * cos(angle) - a * cos(angle * (a + b) / a));
        y = static_cast<int>((a + b) * sin(angle) - a * sin(angle * (a + b) / a));
        cur << QPoint(x, y);
        angle += 0.02;
    }
    leftboarder = QPoint(static_cast<int>(-a-b), static_cast<int>(-a-b));
    rightboarder = QPoint(static_cast<int>(a+b), static_cast<int>(a+b));
}

QRectF Epicycloid::boundingRect() const
{
    return QRectF(leftboarder, rightboarder);
}

void Epicycloid::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon polygon(cur);
    painter->setBrush(Qt::white);
    painter->drawPolygon(polygon);
}
