#ifndef SIXTEENTHWINDOW_H
#define SIXTEENTHWINDOW_H

#include <QMainWindow>
#include "headers/secwindow.h"

namespace Ui {
class SixteenthWindow;
}

class SixteenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SixteenthWindow(QWidget *parent = nullptr);
    ~SixteenthWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::SixteenthWindow *ui;    
    SecWindow *secWindow = new SecWindow();
};

#endif // SIXTEENTHWINDOW_H
