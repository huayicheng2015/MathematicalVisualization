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
    glf = QOpenGLVersionFunctionsFactory::get<QOpenGLFunctions_4_1_Core>(cxt);
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
