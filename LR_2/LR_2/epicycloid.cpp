#include "epicycloid.h"


Epicycloid::Epicycloid()
{

}

Epicycloid::Epicycloid(double a, double b)
    : a_(a),
      b_(b)
{
    countPoints();
}

void Epicycloid::transfer(double dx, double dy)
{
    prev = cur;
    for(QPoint& p: cur)
    {
        p.setX(static_cast<int>(p.x() + dx));
        p.setY(static_cast<int>(p.y() + dy));
    }
    setBoarders();
    prev_rec = cur_rec;
    for(QPoint& p: cur_rec)
    {
        p.setX(static_cast<int>(p.x() + dx));
        p.setY(static_cast<int>(p.y() + dy));
    }
}

void Epicycloid::scale(double xm, double ym, double kx, double ky)
{
    prev = cur;
    for(QPoint& p: cur)
    {
        p.setX(static_cast<int>(p.x() * kx + (1 - kx) * xm));
        p.setY(static_cast<int>(p.y() * ky + (1 - ky) * ym));
    }
    prev_rec = cur_rec;
    for(QPoint& p: cur_rec)
    {
        p.setX(static_cast<int>(p.x() * kx + (1 - kx) * xm));
        p.setY(static_cast<int>(p.y() * ky + (1 - ky) * ym));
    }
    setBoarders();
}

void Epicycloid::turn(double xc, double yc, double angle)
{
    prev = cur;
    prev_rec = cur_rec;
    int tmp_x, tmp_y;
    for(QPoint& p: cur)
    {
        tmp_x = p.x();
        tmp_y = p.y();
        p.setX(static_cast<int>(xc + (tmp_x - xc) * cos(angle * M_PI / 180) +
                                (tmp_y - yc) * sin(angle * M_PI / 180)));
        p.setY(static_cast<int>(yc - (tmp_x - xc) * sin(angle * M_PI / 180) +
                                (tmp_y - yc) * cos(angle * M_PI / 180)));
    }
    for(QPoint& p: cur_rec)
    {
        tmp_x = p.x();
        tmp_y = p.y();
        p.setX(static_cast<int>(xc + (tmp_x - xc) * cos(angle * M_PI / 180) +
                                (tmp_y - yc) * sin(angle * M_PI / 180)));
        p.setY(static_cast<int>(yc - (tmp_x - xc) * sin(angle * M_PI / 180) +
                                (tmp_y - yc) * cos(angle * M_PI / 180)));
    }
    setBoarders();
}

void Epicycloid::stepback()
{
    if (!prev.empty())
    {
        cur = prev;
        cur_rec = prev_rec;
        setBoarders();
        prev.clear();
        prev_rec.clear();
    }
}

void Epicycloid::countPoints()
{
    double angle = 0;
    int x, y;
    while (angle < M_PI * 2)
    {
        x = 270 + static_cast<int>((a_ + b_) * cos(angle) -
                             a_ * cos(angle * (a_ + b_) / a_));
        y = 270 + static_cast<int>((a_ + b_) * sin(angle) -
                             a_ * sin(angle * (a_ + b_) / a_));
        cur << QPoint(x, y);
        angle += 0.01;
    }
    cur_rec << QPoint(static_cast<int>(270 - (b_ + a_) * 2.5), static_cast<int>(270 - (b_ + a_) * 1.5));
    cur_rec << QPoint(static_cast<int>(270 - (b_ + a_) * 2.5), static_cast<int>(270 + (b_ + a_) * 1.5));
    cur_rec << QPoint(static_cast<int>(270 + (b_ + a_) * 2.5), static_cast<int>(270 + (b_ + a_) * 1.5));
    cur_rec << QPoint(static_cast<int>(270 + (b_ + a_) * 2.5), static_cast<int>(270 - (b_ + a_) * 1.5));
    setBoarders();
}

void Epicycloid::drawEpicycloid()
{
    prev = cur;
    prev_rec = cur_rec;
    cur_rec.clear();
    cur.clear();
    countPoints();
}

void Epicycloid::setParam(double a, double b)
{
    a_ = a;
    b_ = b;
    drawEpicycloid();
}

void Epicycloid::setBoarders()
{
    leftboarder = cur_rec[0];
    rightboarder = cur_rec[2];

}

QRectF Epicycloid::boundingRect() const
{
    return QRectF(leftboarder, rightboarder);
}

void Epicycloid::paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *option,
                       QWidget *widget)
{
    QPolygon polygon(cur);
    QPolygon rec(cur_rec);
    painter->setBrush(QBrush(Qt::black, Qt::BDiagPattern));
    painter->drawPolygon(rec);
    painter->setBrush(Qt::white);
    painter->drawPolygon(polygon);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
