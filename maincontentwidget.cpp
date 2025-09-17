#include "maincontentwidget.h"

#include <QOpenGLWidget>

MainContentWidget::MainContentWidget(QWidget *parent)
    : QWidget{parent}
{
    QOpenGLWidget *openglWidget = new QOpenGLWidget(this);
    openglWidget->setGeometry(0, 0, 600, 600);
}
