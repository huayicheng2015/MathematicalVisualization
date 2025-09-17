#ifndef MAINCONTENTWIDGET_H
#define MAINCONTENTWIDGET_H

#include <QWidget>

class MainContentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainContentWidget(QWidget *parent = nullptr);

    ~MainContentWidget() = default;

signals:
};

#endif // MAINCONTENTWIDGET_H
