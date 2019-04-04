#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <QGraphicsScene>
#include <cmath>
#include "point.h"

class Ellipse
{

public:
    Ellipse();
    Ellipse(int xc, int yc, int a, int b);
    void drawCanon(QGraphicsScene *scene, const QColor &color);
    void drawParam(QGraphicsScene *scene, const QColor &color);
    void drawBresenham(QGraphicsScene *scene, const QColor &color);
    void drawMiddlePoint(QGraphicsScene *scene, const QColor &color);
    void drawLibrary(QGraphicsScene *scene, const QColor &color);
    void increaseSize(const int &step, const double &size);
private:
    int xc_;
    int yc_;
    int a_;
    int b_;
};


#endif // ELLIPSE_H
