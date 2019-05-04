#include "paintwidget.h"
#include <QtDebug>

PaintWidget::PaintWidget(QWidget *parent) : QWidget(parent)
{
    widget_width = 840;
    widget_height = 620;
    mode = CLIP;
    line_color = Qt::black;
    clip_color = Qt::blue;
    clipped_part_color = Qt::red;
    drawing_enabled = false;
    clip_set = false;
    parallel_line_set = false;
    image = new QImage(widget_width, widget_height, QImage::Format_RGB32);
    image->fill(Qt::white);
    setGeometry(20, 20, widget_width, widget_height);
    this->setMouseTracking(true);
}

void PaintWidget::redrawImage()
{
    image->fill(Qt::white);
    QPainter painter(image);
    if (clip_set || (mode == CLIP && drawing_enabled))
    {
        painter.setPen(clip_color);
        for (const auto &line: clip)
        {
            painter.drawLine(line);
        }
    }
    painter.setPen(line_color);
    for (const auto &line: lines)
    {
        painter.drawLine(line);
    }
    update();
}

void PaintWidget::addLine(const QPoint &cur_point)
{
    lines.push_back(QLine(last_point, cur_point));
    drawing_enabled = false;
}

void PaintWidget::addParallelLine(const QPoint &cur_point)
{
    QPoint res_point = countParallelPoint(cur_point);
    lines.push_back(QLine(last_point, res_point));
    drawing_enabled = false;
}

void PaintWidget::addClipLine(const QPoint &cur_point)
{
    clip.push_back(QLine(last_point, cur_point));
    last_point = cur_point;
}

void PaintWidget::finishClip()
{
    if (clip.size() >= 2)
    {
        clip_set = true;
        clip.push_back(QLine(last_point, clip[0].p1()));
        drawing_enabled = false;
        redrawImage();
    }
}

QPoint PaintWidget::countParallelPoint(const QPoint &cur_point)
{
    double coef = parallel_line.dy() / static_cast<double>(parallel_line.dx());
    QPoint res_point = cur_point;
    if (abs(coef) > 1)
    {
        res_point.setX(static_cast<int>(round((cur_point.y() - last_point.y()) / coef + last_point.x())));
    }
    else
    {
        res_point.setY(static_cast<int>(round((cur_point.x() - last_point.x()) * coef + last_point.y())));
    }
    return res_point;
}

double PaintWidget::findDistanceToPoint(const QPoint &point, const QLine &line)
{
    QPoint a = line.p1();
    QPoint b = line.p2();
    double ab, bc, ac;
    ab = findLength(line.p1(), line.p2());
    bc = findLength(line.p1(), point);
    ac = findLength(line.p2(), point);
    if (bc * bc + ab * ab < ac * ac)
    {
        return bc;
    }
    if (ac * ac + ab * ab < bc * bc)
    {
        return ac;
    }
    double res = abs((b.y() - a.y()) * point.x() - (b.x() - a.x()) * point.y() +
                    b.x() * a.y() - b.y() * a.x()) / ab;
    return res;
}

double PaintWidget::findLength(const QPoint &first, const QPoint &second)
{
    double res = (second.x() - first.x()) * (second.x() - first.x()) + (second.y() - first.y()) * (second.y() - first.y());
    return sqrt(res);
}

QLine PaintWidget::findClothestLine(const QPoint &search_point)
{
    double min_distance = findDistanceToPoint(search_point, clip[0]);
    QLine res = clip[0];
    double cur_distance;
    for (const QLine &line: clip)
    {
        cur_distance = findDistanceToPoint(search_point, line);
        if (cur_distance < min_distance)
        {
            min_distance = cur_distance;
            res = line;
        }
    }
    return res;
}

void PaintWidget::setStartPoint(const QPoint &cur_point)
{
    last_point = cur_point;
    drawing_enabled = true;
}

void PaintWidget::setLineColor(QColor &color)
{
    line_color.setRgb(color.rgb());
    redrawImage();
}

void PaintWidget::setClipColor(QColor &color)
{
    clip_color.setRgb(color.rgb());
    redrawImage();
}

void PaintWidget::setClippedPartColor(QColor &color)
{
    clipped_part_color.setRgb(color.rgb());
    redrawImage();
}

void PaintWidget::addLineByButton(const QPoint &first, const QPoint &second)
{
    QPainter painter(image);
    painter.setPen(line_color);
    lines.push_back(QLine(first, second));
    painter.drawLine(first, second);
    update();
}

void PaintWidget::addClipByButton(const QPoint &point)
{
    if (drawing_enabled)
    {
        addClipLine(point);
        redrawImage();
    }
    else
    {
        if (clip_set)
        {
            clip_set = false;
            clip.clear();
        }
        QPainter painter(image);
        painter.setPen(clip_color);
        painter.drawPoint(point);
        setStartPoint(point);
        update();
    }
}       

Error PaintWidget::clipAllLines()
{
    if (clip_set)
    {
        if (drawing_enabled)
            drawing_enabled = false;
        QPainter painter(image);
        painter.setPen(QPen(clipped_part_color, 2));
        bool result = algorithmCyrusBeck(painter, clip, lines);
        update();
        if (result)
        {
            return OK;
        }
        else
        {
            return NOT_CONVEX;
        }
    }
    return CLIP_NOT_SET;
}

void PaintWidget::clearAll()
{
    image->fill(Qt::white);
    if (!lines.empty())
    {
        lines.clear();
    }
    drawing_enabled = false;
    if (clip_set)
        clip.clear();
    clip_set = false;
    update();
}

void PaintWidget::clearLines()
{
    if (!lines.empty())
    {
        lines.clear();
    }
    redrawImage();
    drawing_enabled = false;
}

void PaintWidget::setLineMode()
{
    mode = LINE;
    if (drawing_enabled)
    {
        drawing_enabled = false;
        if (!clip_set && !clip.empty())
        {
            clip.clear();
        }
        redrawImage();
    }
    if (parallel_line_set == true)
        parallel_line_set = false;
}

void PaintWidget::setParallelLineMode()
{
    mode = PARALLEL_LINE;
    if (drawing_enabled)
    {
        drawing_enabled = false;
        if (!clip_set && !clip.empty())
        {
            clip.clear();
        }
        redrawImage();
    }
}

void PaintWidget::setClipMode()
{
    mode = CLIP;
    if (drawing_enabled)
    {
        drawing_enabled = false;
        redrawImage();
    }
    if (parallel_line_set == true)
        parallel_line_set = false;
}

void PaintWidget::mousePressEvent(QMouseEvent *event)
{
    QPoint cur_point = event->pos();
    if (drawing_enabled && mode == LINE)
    {
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
        addLine(cur_point);
    }
    else if (drawing_enabled && mode == CLIP)
    {
        if (event->button() == Qt::LeftButton)
        {
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
            addClipLine(cur_point);
        }
        else if (event->button() == Qt::RightButton)
        {
            finishClip();
        }
    }
    else if (drawing_enabled && mode == PARALLEL_LINE)
    {
        addParallelLine(cur_point);
    }
    else if (!parallel_line_set && mode == PARALLEL_LINE)
    {
        if (clip_set)
        {
            parallel_line = findClothestLine(cur_point);
            parallel_line_set = true;
        }
    }
    else
    {
        if (mode == CLIP)
        {
            clip_set = false;
            if (!clip.empty())
            {
                clip.clear();
            }
        }
        else if (mode == PARALLEL_LINE)
        {
            parallel_line_set = false;
        }
        setStartPoint(cur_point);
    }
}

void PaintWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (drawing_enabled)
    {
        redrawImage();
        QPainter painter(image);
        QPoint cur_point = event->pos();
        if (mode == LINE)
        {
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
            painter.setPen(line_color);
            painter.drawLine(cur_point, last_point);
        }
        else if (mode == CLIP)
        {
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
            painter.setPen(clip_color);
            painter.drawLine(cur_point, last_point);
        }
        else if (mode == PARALLEL_LINE)
        {
            QPoint res_point = countParallelPoint(cur_point);
            painter.setPen(line_color);
            painter.drawLine(res_point, last_point);
        }
    }
}

void PaintWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(0, 0, *image);
    Q_UNUSED(event);
}

