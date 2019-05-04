#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <cmath>
#include "clipping.h"

enum Mode { CLIP, LINE, PARALLEL_LINE };
enum Error { NOT_CONVEX, CLIP_NOT_SET, OK };

class PaintWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PaintWidget(QWidget *parent = nullptr);
    void addLineByButton(const QPoint &first, const QPoint &second);
    void addClipByButton(const QPoint &point);
    Error clipAllLines();
    void setLineColor(QColor &color);
    void setClipColor(QColor &color);
    void setClippedPartColor(QColor &color);
    void setClipMode();
    void setLineMode();
    void setParallelLineMode();
    void clearAll();
    void clearLines();
    void finishClip();
protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private:
    Mode mode;
    QPoint last_point;
    QVector<QLine> lines;
    QVector<QLine> clip;
    QImage *image;
    int widget_height;
    int widget_width;
    QColor line_color;
    QColor clip_color;
    QColor clipped_part_color;
    bool drawing_enabled;
    bool clip_set;
    bool parallel_line_set;
    QLine parallel_line;

    void redrawImage();
    void addLine(const QPoint &cur_point);
    void addParallelLine(const QPoint &cur_point);
    void addClipLine(const QPoint &cur_point);
    QPoint countParallelPoint(const QPoint &cur_point);
    QLine findClothestLine(const QPoint &search_point);
    double findDistanceToPoint(const QPoint &point, const QLine &line);
    double findLength(const QPoint &first, const QPoint &second);
    void setStartPoint(const QPoint &cur_point);
};

#endif // PAINTWIDGET_H
