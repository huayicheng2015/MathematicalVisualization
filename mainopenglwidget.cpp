#include "mainopenglwidget.h"

#include <QChar>
#include <QOpenGLContext>
#include <QOpenGLVersionFunctionsFactory>

MainOpenGLWidget::MainOpenGLWidget(QWidget *parent) : QOpenGLWidget{ parent }, glVersionStr{ new QString }
{}

MainOpenGLWidget::~MainOpenGLWidget()
{
    delete glVersionStr;
}

void MainOpenGLWidget::initializeGL()
{
    QOpenGLContext *cxt = context();

#if MV_OPENGL_MAJOR_VERSION == 4 && MV_OPENGL_MINOR_VERSION == 0
    glf = QOpenGLVersionFunctionsFactory::get<QOpenGLFunctions_4_0_Core>(cxt);
#elif MV_OPENGL_MAJOR_VERSION == 3 && MV_OPENGL_MINOR_VERSION == 3
    glf = QOpenGLVersionFunctionsFactory::get<QOpenGLFunctions_3_3_Core>(cxt);
#elif MV_OPENGL_MAJOR_VERSION == 3 && MV_OPENGL_MINOR_VERSION == 2
    glf = QOpenGLVersionFunctionsFactory::get<QOpenGLFunctions_3_2_Core>(cxt);
#else
    glf = QOpenGLVersionFunctionsFactory::get<QOpenGLFunctions_4_1_Core>(cxt);
#endif
}

void MainOpenGLWidget::paintGL()
{
    glf->glClearColor(1.0, 1.0, 0.0, 1.0);
    glf->glClear(GL_COLOR_BUFFER_BIT);
    const GLubyte *version = glf->glGetString(GL_VERSION);
    glVersionStr->clear();
    for (quint16 i = 0; version[i] != 0; ++i)
    {
        glVersionStr->append(QChar(version[i]));
    }
    qDebug() << *glVersionStr;
}
