#ifndef FOURTEENTHWINDOW_H
#define FOURTEENTHWINDOW_H

#include "headers/pathwindow.h"
#include <QMainWindow>

namespace Ui {
class FourteenthWindow;
}

class FourteenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FourteenthWindow(QWidget *parent = nullptr);
    ~FourteenthWindow();

private slots:
    void on_pushContinueButton_clicked();
    void on_pushBackButton_clicked();

private:
    Ui::FourteenthWindow *ui;
    PathWindow *path;};

#endif // FOURTEENTHWINDOW_H
