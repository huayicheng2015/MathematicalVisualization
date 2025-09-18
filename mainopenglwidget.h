#ifndef MAINOPENGLWIDGET_H
#define MAINOPENGLWIDGET_H

#include "globalconfig.h"

#if MV_OPENGL_MAJOR_VERSION == 4 && MV_OPENGL_MINOR_VERSION == 0
    #include <QOpenGLFunctions_4_0_Core>
#elif MV_OPENGL_MAJOR_VERSION == 3 && MV_OPENGL_MINOR_VERSION == 3
    #include <QOpenGLFunctions_3_3_Core>
#elif MV_OPENGL_MAJOR_VERSION == 3 && MV_OPENGL_MINOR_VERSION == 2
    #include <QOpenGLFunctions_3_2_Core>
#else
    #include <QOpenGLFunctions_4_1_Core>
#endif

#include <QOpenGLWidget>
#include <QString>
#include <QWidget>

class MainOpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    explicit MainOpenGLWidget(QWidget *parent = nullptr);

    ~MainOpenGLWidget();

protected:
    virtual void initializeGL() override;

    virtual void paintGL() override;

private:
    QString *glVersionStr;

#if MV_OPENGL_MAJOR_VERSION == 4 && MV_OPENGL_MINOR_VERSION == 0
    QOpenGLFunctions_4_0_Core *glf;
#elif MV_OPENGL_MAJOR_VERSION == 3 && MV_OPENGL_MINOR_VERSION == 3
    QOpenGLFunctions_3_3_Core *glf;
#elif MV_OPENGL_MAJOR_VERSION == 3 && MV_OPENGL_MINOR_VERSION == 2
    QOpenGLFunctions_3_2_Core *glf;
#else
    QOpenGLFunctions_4_1_Core *glf;
#endif
};

#endif // MAINOPENGLWIDGET_H
