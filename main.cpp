#include "globalconfig.h"
#include "mainwindow.h"

#include <QApplication>
#include <QSurfaceFormat>

int main(int argc, char *argv[])
{
    QSurfaceFormat defaultSurFmt{ QSurfaceFormat::defaultFormat() };
    defaultSurFmt.setMajorVersion(MV_OPENGL_MAJOR_VERSION);
    defaultSurFmt.setMinorVersion(MV_OPENGL_MINOR_VERSION);
    defaultSurFmt.setProfile(QSurfaceFormat::CoreProfile);
    QSurfaceFormat::setDefaultFormat(defaultSurFmt);
    QApplication a(argc, argv);
    MainWindow w;
    w.setMinimumSize(800, 600);
    w.show();
    return a.exec();
}
