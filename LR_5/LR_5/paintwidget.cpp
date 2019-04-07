#include "paintwidget.h"
#include <QtDebug>
PaintWidget::PaintWidget(QWidget *parent) : QWidget(parent)
{
    widget_width = 740;
    widget_height = 620;
    bg_color = Qt::white;
    borders_color = Qt::black;
    fill_color = Qt::blue;
    drawing_enabled = false;
    image = new QImage(widget_width, widget_height, QImage::Format_RGB32);
    image->fill(bg_color);
    setGeometry(20, 20, widget_width, widget_height);
}

void PaintWidget::redraw()
{
    image->fill(bg_color);
    QPainter painter(image);
    painter.setPen(borders_color);
    for (const QPoint &point: points)
    {
        painter.drawPoint(point);
    }
    for (const auto &edge: edges)
    {
        painter.drawLine(points[edge.first], points[edge.second]);
    }
    update();
}

void PaintWidget::addLine(QPainter &painter, const QPoint &cur_point)
{
    edges.push_back(std::make_pair(points.size() - 1, points.size()));
    if (cur_point.y() < last_point.y())
        qSwap(edges.back().first, edges.back().second);
    points.push_back(cur_point);
    painter.drawLine(last_point, cur_point);
    last_point = cur_point;
    update();
    emit pointsChanged(points.size(), start_point_index);
}

void PaintWidget::setStartPoint(QPainter &painter, const QPoint &cur_point)
{
    start_point_index = points.size();
    points.push_back(cur_point);
    painter.drawPoint(cur_point);
    last_point = cur_point;
    drawing_enabled = true;
    update();
}

void PaintWidget::findBorders()
{
    x_max = points[0].x();
    x_min = points[0].x();
    for (const QPoint &point: points)
    {
        if (point.x() > x_max)
            x_max = point.x();
        if (point.x() < x_min)
            x_min = point.x();
    }
}

void PaintWidget::setSeparator(QPainter &painter)
{
    double middle = (x_max - x_min) / 2 + x_min;
    x_sep = points[0].x();
    for (const QPoint &point: points)
    {
        if (abs(middle - point.x()) < abs(middle - x_sep))
            x_sep = point.x();
    }
    painter.drawLine(x_sep, 0, x_sep, widget_height);
}

void PaintWidget::drawPoint(QPainter &painter, const int &x, const int &y)
{
    QColor cur = image->pixelColor(x, y);
    if (cur == fill_color)
    {
        painter.setPen(bg_color);
        painter.drawPoint(x, y);
    }
    else if (cur == bg_color)
    {
        painter.setPen(fill_color);
        painter.drawPoint(x, y);
    }
}

void PaintWidget::finishFigure(QPainter &painter)
{
    if (start_point_index + 2 < points.size())
    {
        edges.push_back(std::make_pair(points.size() - 1, start_point_index));
        if (last_point.y() > points[start_point_index].y())
            qSwap(edges.back().first, edges.back().second);
        painter.drawLine(last_point, points[start_point_index]);
        drawing_enabled = false;
        emit pointsChanged(points.size(), points.size());
        update();
    }
}

void PaintWidget::setBGColor(QColor &color)
{
    bg_color = color;
    redraw();
}

void PaintWidget::setBordersColor(QColor &color)
{
    borders_color = color;
    redraw();
}

void PaintWidget::drawByButton(QPoint &cur_point)
{
    QPainter painter(image);
    painter.setPen(borders_color);
    if (drawing_enabled)
    {
        addLine(painter, cur_point);
    }
    else
    {
        setStartPoint(painter, cur_point);
    }
}

void PaintWidget::finishByButton()
{
    if (drawing_enabled)
    {
        QPainter painter(image);
        painter.setPen(borders_color);
        finishFigure(painter);
    }
}

void PaintWidget::clearAll()
{
    image->fill(bg_color);
    if (!points.empty())
    {
        points.clear();
        edges.clear();
        drawing_enabled = false;
        emit pointsChanged(points.size(), points.size());
    }
    update();
}

void PaintWidget::fillFigure()
{
    redraw();
    QPainter painter(image);
    painter.setPen(Qt::red);
    findBorders();
    setSeparator(painter);
    for (const auto &edge: edges)
    {
        QPoint first_point = points[edge.first];
        QPoint second_point = points[edge.second];
        int dx = first_point.x() - second_point.x();
        int dy = first_point.y() - second_point.y();
        double k = static_cast<double>(dx) / dy;
        if (first_point.x() < x_sep && second_point.x() < x_sep)
        {
            double x_start = first_point.x();
            for (int y = first_point.y(); y < second_point.y(); y++, x_start += k)
            {
                for (int x = static_cast<int>(round(x_start)); x < x_sep; x++)
                {
                    drawPoint(painter, x, y);
                }
            }
        }
        else if (first_point.x() >= x_sep && second_point.x() >= x_sep)
        {
            double x_start = first_point.x();
            for (int y = first_point.y(); y < second_point.y(); y++, x_start += k)
            {
                for (int x = static_cast<int>(round(x_start)); x >= x_sep; x--)
                {
                    drawPoint(painter, x, y);
                }
            }
        }
        else if (first_point.x() < x_sep && second_point.x() >= x_sep)
        {
            double x_start = first_point.x();
            int y_sep = static_cast<int>(round((x_sep - first_point.x()) / k) + first_point.y());
            for (int y = first_point.y(); y < y_sep; y++, x_start += k)
            {
                for (int x = static_cast<int>(round(x_start)); x < x_sep; x++)
                {
                    drawPoint(painter, x, y);
                }
            }
            for (int y = y_sep; y < second_point.y(); y++, x_start += k)
            {
                for (int x = static_cast<int>(round(x_start)); x >= x_sep; x--)
                {
                    drawPoint(painter, x, y);
                }
            }
        }
        else
        {
            double x_start = first_point.x();
            int y_sep = static_cast<int>(round((x_sep - first_point.x()) / k) + first_point.y());
            for (int y = first_point.y(); y < y_sep; y++, x_start += k)
            {
                for (int x = static_cast<int>(round(x_start)); x >= x_sep; x--)
                {
                    drawPoint(painter, x, y);
                }
            }
            for (int y = y_sep; y < second_point.y(); y++, x_start += k)
            {
                for (int x = static_cast<int>(round(x_start)); x < x_sep; x++)
                {
                    drawPoint(painter, x, y);
                }
            }
        }
    }
    update();
}

void PaintWidget::mousePressEvent(QMouseEvent *event)
{
    QPainter painter(image);
    painter.setPen(borders_color);
    if (drawing_enabled)
    {
        if (event->button() == Qt::LeftButton)
        {
            QPoint cur_point = event->pos();
            if (event->modifiers() == Qt::ShiftModifier)
            {
                if (abs(last_point.x() - cur_point.x()) <= abs(last_point.y() - cur_point.y()))
                {
                    cur_point.setX(last_point.x());
                }
                else
                {
                    cur_point.setY(last_point.y());
                }
            }
            addLine(painter, cur_point);
        }
        else if (event->button() == Qt::RightButton)
        {
            finishFigure(painter);
        }
    }
    else
    {
        if (event->button() == Qt::LeftButton)
        {
            QPoint cur_point = event->pos();
            setStartPoint(painter, cur_point);
        }
    }
}

void PaintWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.drawImage(0, 0, *image);
    Q_UNUSED(event);
}
