#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H

#include <QWidget>
#include "floatinghorizon.h"

class PaintWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PaintWidget(QWidget *parent = nullptr);
    void setBGColor(QColor &color);
    void setLineColor(QColor &color);
    void buildSurface(SurfaceData &s_data, const TransformData &t_data, const int &func_index);
    bool surfaceIsSet();
protected:
    void paintEvent(QPaintEvent *event);
private:
    QImage *image;
    int widget_height;
    int widget_width;
    QColor bg_color;
    QColor line_color;
    bool surface_set;
};

#endif // PAINTWIDGET_H
