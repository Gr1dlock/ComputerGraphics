#ifndef FLOATINGHORIZON_H
#define FLOATINGHORIZON_H

#include <QPainter>
#include "surfacedata.h"
#include "transformdata.h"
class FloatingHorizon
{
public:
    FloatingHorizon(const int &width, const int &height):
        widget_width(width), widget_height(height)
    {}
    void algorithm(QPainter *painter, const SurfaceData &s_data, const TransformData &t_data);
private:
    int widget_width;
    int widget_height;
    QHash<int, int> top;
    QHash<int, int> bottom;
    int sign(int num);
    void horizon(QPainter *painter, int x1, int y1, int x2, int y2);
    int isVisible(const int &x, const int &y);
    void findIntersection(int &xi, int &yi, int x1, int y1, int x2, int y2, const QHash<int, int> &horizon);
    void processEdge(QPainter *painter, bool &flag, int &edge_x, int &edge_y, const int &x, const int &y);
    void drawBresenham(QPainter *painter, const int &xn, const int &yn, const int &xk, const int &yk);

};
#endif // FLOATINGHORIZON_H
