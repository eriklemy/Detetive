#ifndef THIRTEENTHWINDOW_H
#define THIRTEENTHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class ThirteenthWindow;
}

class ThirteenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThirteenthWindow(QWidget *parent = nullptr);
    ~ThirteenthWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();

private:
    Ui::ThirteenthWindow *ui;
    SecWindow *secWindow = new SecWindow();
};

#endif // THIRTEENTHWINDOW_H
