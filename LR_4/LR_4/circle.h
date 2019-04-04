#ifndef CIRCLE_H
#define CIRCLE_H
#include <QGraphicsScene>
#include <cmath>
#include "point.h"

class Circle
{
public:
    Circle();
    Circle(int xc, int yc, int r);
    double drawCanon(QGraphicsScene *scene, const QColor &color, const bool &draw);
    double drawParam(QGraphicsScene *scene, const QColor &color, const bool &draw);
    double drawBresenham(QGraphicsScene *scene, const QColor &color, const bool &draw);
    double drawMiddlePoint(QGraphicsScene *scene, const QColor &color, const bool &draw);
    double drawLibrary(QGraphicsScene *scene, const QColor &color);
    void increaseSize(int step);
private:
    int xc_;
    int yc_;
    int r_;
};


#endif // CIRCLE_H
