#include "clipping.h"

MathVector::MathVector(const int &x, const int &y, const int &z)
    : x_(x),
      y_(y),
      z_(z)
{
}

MathVector::MathVector(const QPoint &first, const QPoint &second)
{
    x_ = second.x() - first.x();
    y_ = second.y() - first.y();
    z_ = 0;
}

MathVector::MathVector(const QLine &line)
{
    QPoint first = line.p1();
    QPoint second = line.p2();
    x_ = second.x() - first.x();
    y_ = second.y() - first.y();
    z_ = 0;
}

int scalarMult(const MathVector &first, const MathVector &second)
{
    int res = first.x() * second.x() + first.y() * second.y() + first.z() * first.z();
    return res;
}

MathVector vectorMult(const MathVector &first, const MathVector &second)
{
    MathVector res;
    res.setX(first.y() * second.z() - first.z() * second.y());
    res.setY(first.z() * second.x() - first.x() * second.z());
    res.setZ(first.x() * second.y() - first.y() * second.x());
    return res;
}

int sign(const MathVector &cur_vector)
{
    if (cur_vector.z() > 0)
        return 1;
    else if (cur_vector.z() < 0)
        return -1;
    return 0;
}

int isConvex(const QVector<QLine> &clip)
{
    int length = clip.size();
    QLine first = clip.back();
    QLine second = clip[0];
    int cur, res;
    MathVector res_vector = vectorMult(first, second);
    res = sign(res_vector);
    for (int i = 1; i < length; i++)
    {
        first = second;
        second = clip[i];
        res_vector = vectorMult(first, second);
        cur = sign(res_vector);
        if (cur && cur != res)
        {
            return 0;
        }
    }
    return res;
}

QVector<MathVector> findNorms(const QVector<QLine> &clip, const int &orientation)
{
    QVector<MathVector> norms;
    for (const QLine &line: clip)
    {
        if (orientation == -1)
        {
            norms.push_back(MathVector(line.dy(), -(line.dx())));
        }
        else
        {
            norms.push_back(MathVector(-(line.dy()), line.dx()));
        }
    }
    return norms;
}

QPoint countPoint(const QLine &line, const double &t)
{
    QPoint res;
    QPoint p1 = line.p1();
    QPoint p2 = line.p2();
    res.setX(static_cast<int>(round((p1.x() + (p2.x() - p1.x()) * t))));
    res.setY(static_cast<int>(round(p1.y() + (p2.y() - p1.y()) * t)));
    return res;
}

bool findClippingPart(QLine &line, const QVector<QLine> &clip, const QVector<MathVector> &norms)
{
    double t_beg = 0;
    double t_end = 1;
    double t;
    int w_sc, d_sc;
    MathVector d = line;
    MathVector w;
    QLine res;
    int i = 0;
    for (const QLine &clip_line: clip)
    {
        w = MathVector(clip_line.p1(), line.p1());
        w_sc = scalarMult(norms[i], w);
        d_sc = scalarMult(d, norms[i]);
        if (d_sc)
        {
            t = -w_sc / static_cast<double>(d_sc);
            if (d_sc > 0)
            {
                if (t > 1)
                {
                    return false;
                }
                else
                {
                    t_beg = qMax(t_beg, t);
                }
            }
            else
            {
                if (t < 0)
                {
                    return false;
                }
                else
                {
                    t_end = qMin(t_end, t);
                }
            }
        }
        else
        {
            if (w_sc < 0)
                return false;
        }
        i++;
    }
    if (t_beg <= t_end)
    {
        res.setP1(countPoint(line, t_beg));
        res.setP2(countPoint(line, t_end));
        line = res;
        return true;
    }
    return false;
}

bool algorithmCyrusBeck(QPainter &painter, const QVector<QLine> &clip, const QVector<QLine> &lines)
{
    int orientation = isConvex(clip);
    if (orientation)
    {
        QVector<MathVector> norms = findNorms(clip, orientation);
        QLine clipping_part;
        bool visible;
        for (const QLine &line: lines)
        {
            clipping_part = line;
            visible = findClippingPart(clipping_part, clip, norms);
            if (visible)
            {
                painter.drawLine(clipping_part);
            }
        }
        return true;
    }
    return false;
}
