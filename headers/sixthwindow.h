#ifndef SIXTHWINDOW_H
#define SIXTHWINDOW_H

#include "headers/pathwindow.h"
#include <QMainWindow>

namespace Ui {
class SixthWindow;
}

class SixthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SixthWindow(QWidget *parent = nullptr);
    ~SixthWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::SixthWindow *ui;
    PathWindow *path;
};

#endif // SIXTHWINDOW_H
