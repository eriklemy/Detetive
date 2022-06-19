#ifndef SEVENTEENTHWINDOW_H
#define SEVENTEENTHWINDOW_H

#include <QMainWindow>
#include "headers/secwindow.h"

namespace Ui {
class SeventeenthWindow;
}

class SeventeenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SeventeenthWindow(QWidget *parent = nullptr);
    ~SeventeenthWindow();
private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();

private:
    Ui::SeventeenthWindow *ui;
    SecWindow *secWindow = new SecWindow();

};

#endif // SEVENTEENTHWINDOW_H
