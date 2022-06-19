#ifndef TWELFTHWINDOW_H
#define TWELFTHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class TwelfthWindow;
}

class TwelfthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TwelfthWindow(QWidget *parent = nullptr);
    ~TwelfthWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::TwelfthWindow *ui;
    SecWindow *secWindow = new SecWindow();

};

#endif // TWELFTHWINDOW_H
