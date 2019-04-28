#include "paintwidget.h"

PaintWidget::PaintWidget(QWidget *parent) : QWidget(parent)
{
    widget_width = 740;
    widget_height = 520;
    mode = CLIP;
    line_color = Qt::black;
    clip_color = Qt::blue;
    clipped_part_color = Qt::red;
    drawing_enabled = false;
    clip_set = false;
    image = new QImage(widget_width, widget_height, QImage::Format_RGB32);
    image->fill(Qt::white);
    setGeometry(20, 20, widget_width, widget_height);
    this->setMouseTracking(true);
}

void PaintWidget::redrawImage()
{
    image->fill(Qt::white);
    QPainter painter(image);
    if (clip_set)
    {
        painter.setPen(clip_color);
        drawBresenhamRect(painter, clip);
    }
    painter.setPen(line_color);
    for (const auto &line: lines)
    {
        drawBresenham(painter, line.p1(), line.p2());
    }
    update();
}

void PaintWidget::addLine(const QPoint &cur_point)
{
    lines.push_back(QLine(last_point, cur_point));
    drawing_enabled = false;
}

void PaintWidget::addClip(const QPoint &cur_point)
{
    clip = QRect(last_point, cur_point);
    clip_set = true;
    drawing_enabled = false;
    redrawImage();
}

void PaintWidget::setStartPoint(const QPoint &cur_point)
{
    last_point = cur_point;
    drawing_enabled = true;
}

void PaintWidget::eraseClip()
{
    QPainter painter(image);
    painter.setBrush(Qt::white);
    painter.setPen(Qt::white);
    painter.drawRect(QRect(QPoint(clip.left() + 1, clip.top() - 1),
                           QPoint(clip.right() - 2, clip.bottom())));
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

void PaintWidget::addByButton(const QPoint &first, const QPoint &second)
{
    QPainter painter(image);
    if (mode == CLIP)
    {
        painter.setPen(clip_color);
        clip = QRect(first, second);
        clip_set = true;
        drawBresenhamRect(painter, clip);
        painter.end();
        redrawImage();
    }
    else if (mode == LINE)
    {
        painter.setPen(line_color);
        lines.push_back(QLine(first, second));
        drawBresenham(painter, first, second);
        update();
    }
}

void PaintWidget::clipAllLines()
{
    if (clip_set)
    {
        if (drawing_enabled)
            drawing_enabled = false;
        eraseClip();
        QPainter painter(image);
        painter.setPen(QPen(clipped_part_color, 2));
        for (const QLine &line: lines)
        {
            ClippedPart clipped_part(line.p1(), line.p2(), clip);
            clipped_part.SimpleAlgorithm(painter);
        }
        update();
    }
}


void PaintWidget::clearAll()
{
    image->fill(Qt::white);
    if (!lines.empty())
    {
        lines.clear();
    }
    drawing_enabled = false;
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
        QPoint tmp = last_point;
        last_point = QPoint(qMin(last_point.x(), cur_point.x()), qMax(last_point.y(), cur_point.y()));
        cur_point = QPoint(qMax(tmp.x(), cur_point.x()), qMin(tmp.y(), cur_point.y()));
        addClip(cur_point);
    }
    else
    {
        if (mode == CLIP)
        {
            clip_set = false;
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
            drawBresenham(painter, cur_point, last_point);
        }
        else
        {
            painter.setPen(clip_color);
            QPoint tmp = last_point;
            tmp = QPoint(qMin(last_point.x(), cur_point.x()), qMax(last_point.y(), cur_point.y()));
            cur_point = QPoint(qMax(last_point.x(), cur_point.x()), qMin(last_point.y(), cur_point.y()));
            drawBresenhamRect(painter, QRect(tmp, cur_point));
        }
    }
}

void PaintWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(0, 0, *image);
    Q_UNUSED(event);
}

