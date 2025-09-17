#include "maincontentwidget.h"
#include "mainopenglwidget.h"

MainContentWidget::MainContentWidget(QWidget *parent)
    : QWidget{parent}
{
    MainOpenGLWidget *openglWidget = new MainOpenGLWidget(this);
    openglWidget->setGeometry(0, 0, 600, 600);
}
