#ifndef POINT_H
#define POINT_H
#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>

class Point: public QGraphicsItem
{
public:
    Point();
    Point(int x, int y, QColor col);

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
private:
    int x_;
    int y_;
    QColor color;
};
#endif // POINT_H
