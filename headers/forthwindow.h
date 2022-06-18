#ifndef FORTHWINDOW_H
#define FORTHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class ForthWindow;
}

class ForthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForthWindow(QWidget *parent = nullptr);
    ~ForthWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();

private:
    Ui::ForthWindow *ui;
    SecWindow *secWindow = new SecWindow();

};

#endif // FORTHWINDOW_H
