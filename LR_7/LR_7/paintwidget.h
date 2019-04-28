#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H
#include <QWidget>
#include <QPaintEvent>
#include <cmath>
#include "clipping.h"

enum Mode { CLIP, LINE };

class PaintWidget : public QWidget
{

    Q_OBJECT

public:
    explicit PaintWidget(QWidget *parent = nullptr);
    void addByButton(const QPoint &first, const QPoint &second);
    void clipAllLines();
    void setLineColor(QColor &color);
    void setClipColor(QColor &color);
    void setClippedPartColor(QColor &color);
    void setClipMode();
    void setLineMode();
    void clearAll();
    void clearLines();
protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private:
    Mode mode;
    QPoint last_point;
    QVector<QLine> lines;
    QRect clip;
    QImage *image;
    int widget_height;
    int widget_width;
    QColor line_color;
    QColor clip_color;
    QColor clipped_part_color;
    bool drawing_enabled;
    bool clip_set;

    void redrawImage();
    void addLine(const QPoint &cur_point);
    void addClip(const QPoint &cur_point);
    void setStartPoint(const QPoint &cur_point);
    void eraseClip();

};

#endif // DRAWWIDGET_H
