#ifndef EIGHTHWINDOW_H
#define EIGHTHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class EighthWindow;
}

class EighthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EighthWindow(QWidget *parent = nullptr);
    ~EighthWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::EighthWindow *ui;
    SecWindow *secWindow = new SecWindow();

};

#endif // EIGHTHWINDOW_H
