#ifndef FIFTEENTHWINDOW_H
#define FIFTEENTHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class FifteenthWindow;
}

class FifteenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FifteenthWindow(QWidget *parent = nullptr);
    ~FifteenthWindow();

private slots:
    void on_pushContinueButton_clicked();
    void on_pushBackButton_clicked();
    void on_pushInicioButton_clicked();

private:
    Ui::FifteenthWindow *ui;
    SecWindow *secWindow = new SecWindow();

};

#endif // FIFTEENTHWINDOW_H
