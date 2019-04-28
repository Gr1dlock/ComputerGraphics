#include "clipping.h"
#include <QtDebug>

ClippedPart::ClippedPart(const QPoint &first, const QPoint &second, const QRect &rect):
    P1(first), P2(second), clip(rect)
{
}

QVector<int> ClippedPart::getVisibility(const QPoint &point)
{
    QVector<int> T(4);
    T[0] = point.x() < clip.left() ? 1 : 0;
    T[1] = point.x() > clip.right() ? 1 : 0;
    T[2] = point.y() < clip.bottom() ? 1 : 0;
    T[3] = point.y() > clip.top() ? 1 : 0;
    return T;
}

int ClippedPart::getSum(const QVector<int> &T)
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += T[i];
    }
    return sum;
}

int ClippedPart::getMult(const QVector<int> &T1, const QVector<int> &T2)
{
    int mult = 0;
    for (int i = 0; i < 4; i++)
    {
        mult += T1[i] * T2[i];
    }
    return mult;
}

QPoint ClippedPart::findR(const QPoint &Q)
{
    double m = pow(10, 30);
    if (P1.x() != P2.x())
    {
        m = static_cast<double>(P2.y() - P1.y()) / (P2.x() - P1.x());
        if (Q.x() <= clip.left())
        {
            int y = static_cast<int>(round(m * (clip.left() - Q.x()))) + Q.y();
            if (y >= clip.bottom() && y <= clip.top())
            {
                return QPoint(clip.left(), y);
            }
        }
        if (Q.x() >= clip.right())
        {
            int y = static_cast<int>(round(m * (clip.right() - Q.x()))) + Q.y();
            if (y >= clip.bottom() && y <= clip.top())
            {
                return QPoint(clip.right(), y);
            }
        }
    }
    if (qFuzzyCompare(m, 0))
    {
        flag = false;
        return Q;
    }
    if (Q.y() >= clip.top())
    {
        int x = static_cast<int>(round((clip.top() - Q.y()) / m)) + Q.x();
        if (x >= clip.left() && x <= clip.right())
        {
            return QPoint(x, clip.top());
        }
    }
    if (Q.y() <= clip.bottom())
    {
        int x = static_cast<int>(round((clip.bottom() - Q.y()) / m)) + Q.x();
        if (x >= clip.left() && x <= clip.right())
        {
            return QPoint(x, clip.bottom());
        }
    }
    flag = false;
    return Q;
}


void ClippedPart::SimpleAlgorithm(QPainter &painter)
{
    QVector<int> T1 = getVisibility(P1);
    QVector<int> T2 = getVisibility(P2);
    int S1, S2;
    QPoint R1, R2;
    flag = true;
    S1 = getSum(T1);
    S2 = getSum(T2);
    if ((S1 == 0) && (S2 == 0))
    {
        R1 = P1;
        R2 = P2;
    }
    else
    {
        int p = getMult(T1, T2);
        if (p != 0)
        {
            flag = false;
        }
        else
        {
            int i = 0;
            QPoint Q;
            if (S1 == 0)
            {
                R1 = P1;
                Q = P2;
                i = 1;
            }
            else if (S2 == 0)
            {
                R1 = P2;
                Q = P1;
                i = 1;
            }
            while (i < 2)
            {
                i++;
                if (i == 1)
                {
                    Q = P1;
                    R1 = findR(Q);
                    Q = P2;
                }
                else
                {
                    R2 = findR(Q);
                }
            }

        }
    }
    if (flag)
    {
        drawBresenham(painter, R1, R2);
    }
}
