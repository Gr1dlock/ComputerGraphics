#ifndef CLIPPING_H
#define CLIPPING_H

#include "drawing.h"

class ClippedPart
{
public:
    ClippedPart(const QPoint &first, const QPoint &second, const QRect &rect);
    void SimpleAlgorithm(QPainter &painter);
private:
    QPoint P1;
    QPoint P2;
    QRect clip;
    bool flag;
    QVector<int> getVisibility(const QPoint &point);
    int getSum(const QVector<int> &T);
    int getMult(const QVector<int> &T1, const QVector<int> &T2);
    QPoint findR(const QPoint &Q);

};


#endif // CLIPPING_H
