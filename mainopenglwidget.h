#ifndef MAINOPENGLWIDGET_H
#define MAINOPENGLWIDGET_H

#include <QOpenGLWidget>
#include <QWidget>

class MainOpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    explicit MainOpenGLWidget(QWidget *parent = nullptr);

    ~MainOpenGLWidget() = default;
};

#endif // MAINOPENGLWIDGET_H
