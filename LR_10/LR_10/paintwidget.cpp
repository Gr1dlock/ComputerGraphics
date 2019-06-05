#include "paintwidget.h"

PaintWidget::PaintWidget(QWidget *parent) : QWidget(parent)
{
    widget_width = 840;
    widget_height = 670;
    bg_color = QColor(50, 50, 50);
    line_color = Qt::white;
    surface_set = false;
    image = new QImage(widget_width, widget_height, QImage::Format_RGB32);
    image->fill(bg_color);
    setGeometry(20, 20, widget_width, widget_height);
}

void PaintWidget::setBGColor(QColor &color)
{
    bg_color.setRgb(color.rgb());
}

void PaintWidget::setLineColor(QColor &color)
{
    line_color.setRgb(color.rgb());
}

void PaintWidget::buildSurface(SurfaceData &s_data, const TransformData &t_data, const int &func_index)
{
    s_data.setFunc(func_index);
    FloatingHorizon algo(widget_width, widget_height);
    image->fill(bg_color);
    QPainter painter(image);
    painter.setPen(line_color);
    algo.algorithm(&painter, s_data, t_data);
    update();
    surface_set = true;
}

bool PaintWidget::surfaceIsSet()
{
    return surface_set;
}

void PaintWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(0, 0, *image);
    Q_UNUSED(event);
}
