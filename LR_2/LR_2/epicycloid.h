#ifndef EPICYCLOID_H
#define EPICYCLOID_H
#include <QPainter>
#include <QGraphicsItem>
#include <cmath>

class Epicycloid : public QGraphicsItem
{
public:
    Epicycloid();
    Epicycloid(double a_, double b_);

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
private:
    QPoint leftboarder;
    QPoint rightboarder;
    double a;
    double b;
    QVector<QPoint> cur;
    QVector<QPoint> prev;

};

#endif // EPICYCLOID_H
