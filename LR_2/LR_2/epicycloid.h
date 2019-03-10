#ifndef EPICYCLOID_H
#define EPICYCLOID_H
#include <QPainter>
#include <QGraphicsItem>
#include <QDebug>
#include <cmath>

class Epicycloid : public QGraphicsItem
{
public:
    Epicycloid();
    Epicycloid(double a, double b);
    void transfer(double dx, double dy);
    void scale(double xm, double ym, double kx, double ky);
    void turn(double xc, double yc, double angle);
    void stepback();
    void countPoints();
    void drawEpicycloid();
    void setParam(double a, double b);

protected:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
private:
    QPoint leftboarder;
    QPoint rightboarder;
    double a_;
    double b_;
    QVector<QPoint> cur;
    QVector<QPoint> prev;
    void setBoarders();

};

#endif // EPICYCLOID_H
