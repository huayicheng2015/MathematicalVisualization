#include "globalconfig.h"
#include "mainwindow.h"

#include <QApplication>
#include <QSurfaceFormat>

int main(int argc, char *argv[])
{
    QSurfaceFormat defaultSurFmt{ QSurfaceFormat::defaultFormat() };
    defaultSurFmt.setMajorVersion(opengl_major_version);
    defaultSurFmt.setMinorVersion(opengl_minor_version);
    defaultSurFmt.setProfile(QSurfaceFormat::CoreProfile);
    QSurfaceFormat::setDefaultFormat(defaultSurFmt);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
