#ifndef FIFTHWINDOW_H
#define FIFTHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class FifthWindow;
}

class FifthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FifthWindow(QWidget *parent = nullptr);
    ~FifthWindow();

private slots:
    void on_pushInicioButton_clicked();
    void on_pushContinueButton_clicked();
    void on_pushBackButton_clicked();

private:
    Ui::FifthWindow *ui;
    SecWindow *secWindow = new SecWindow();

};

#endif // FIFTHWINDOW_H
