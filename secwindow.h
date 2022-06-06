#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QMainWindow>
#include "thirdwindow.h"

namespace Ui {
class SecWindow;
}

class SecWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecWindow(QWidget *parent = nullptr);
    ~SecWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecWindow *ui;
    ThirdWindow *thirdWindow;

};

#endif // SECWINDOW_H
