#include "maincontentwidget.h"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    MainContentWidget *contentWidget = new MainContentWidget;
    setCentralWidget(contentWidget);
}

MainWindow::~MainWindow() {}
