#ifndef DRAWING_H
#define DRAWING_H
#include <QtCore>
#include <QPainter>

void drawBresenham(QPainter &painter, const QPoint &first, const QPoint &second);
void drawBresenhamRect(QPainter &painter, const QRect &rect);

#endif // DRAWING_H
