#ifndef FIFTHWINDOW_H
#define FIFTHWINDOW_H

#include "headers/pathwindow.h"
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
    void on_pushContinueButton_clicked();
    void on_pushBackButton_clicked();

private:
    Ui::FifthWindow *ui;
    PathWindow *path;

};

#endif // FIFTHWINDOW_H
