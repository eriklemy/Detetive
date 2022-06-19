#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>
#include "headers/pathwindow.h"

namespace Ui {
class ThirdWindow;
}

class ThirdWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThirdWindow(QWidget *parent = nullptr);
    ~ThirdWindow();

private slots:
    void on_pushContinueButton_clicked();

private:
    Ui::ThirdWindow *ui;
    PathWindow *path;

};
#endif // THIRDWINDOW_H
