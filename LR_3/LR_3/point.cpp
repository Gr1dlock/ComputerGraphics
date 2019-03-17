#include "point.h"

Point::Point()
{}

Point::Point(int x, int y, QColor col)
    : x_(x),
      y_(y),
      color(col)
{}

QRectF Point::boundingRect() const
{
    return QRectF(QPoint(x_,y_), QPoint(x_+1,y_+1));
}

void Point::paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *option,
                       QWidget *widget)
{
    painter->setPen(color);
    QPoint point(x_, y_);
    painter->drawPoint(point);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
