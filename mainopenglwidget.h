#ifndef MAINOPENGLWIDGET_H
#define MAINOPENGLWIDGET_H

#include <QOpenGLFunctions_4_1_Core>
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
    QOpenGLFunctions_4_1_Core *glf;
};

#endif // MAINOPENGLWIDGET_H
