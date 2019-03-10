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
}

void Epicycloid::scale(double xm, double ym, double kx, double ky)
{
    prev = cur;
    for(QPoint& p: cur)
    {
        p.setX(static_cast<int>(p.x() * kx + (1 - kx) * xm));
        p.setY(static_cast<int>(p.y() * ky + (1 - ky) * ym));
    }
    setBoarders();
}

void Epicycloid::turn(double xc, double yc, double angle)
{
    prev = cur;
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
    setBoarders();
}

void Epicycloid::stepback()
{
    if (!prev.empty())
    {
        cur = prev;
        setBoarders();
        prev.clear();
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
    setBoarders();
}

void Epicycloid::drawEpicycloid()
{
    prev = cur;
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
    int max_x, max_y, min_x, min_y;
    max_x = min_x = cur[0].x();
    max_y = min_y = cur[0].y();
    foreach(QPoint p, cur)
    {
        if (p.x() > max_x)
            max_x = p.x();
        else if (p.x() < min_x)
            min_x = p.x();
        else if (p.y() > max_y)
            max_y = p.y();
        else if (p.y() < min_y)
            min_y = p.y();
    }
    leftboarder = QPoint(min_x - 30, min_y - 30);
    rightboarder = QPoint(max_x + 30, max_y + 30);
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
    painter->setBrush(Qt::white);
    painter->drawPolygon(polygon);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}
