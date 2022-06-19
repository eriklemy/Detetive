#ifndef FORTHWINDOW_H
#define FORTHWINDOW_H

#include "headers/pathwindow.h"
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
    void on_pushContinueButton_clicked();

private:
    Ui::ForthWindow *ui;
    PathWindow *path;
};

#endif // FORTHWINDOW_H
