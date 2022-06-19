#ifndef PATHWINDOW_H
#define PATHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class PathWindow;
}

class PathWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PathWindow(QWidget *parent = nullptr);
    ~PathWindow();
private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();
    
private:
    Ui::PathWindow *ui;
    SecWindow *secWindow = new SecWindow();
};

#endif // PATHWINDOW_H
