#ifndef TWELFTHWINDOW_H
#define TWELFTHWINDOW_H

#include "headers/pathwindow.h"
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
    void on_pushContinueButton_clicked();

private:
    Ui::TwelfthWindow *ui;
    PathWindow *path;
};
#endif // TWELFTHWINDOW_H
