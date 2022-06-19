#ifndef SEVENTEENTHWINDOW_H
#define SEVENTEENTHWINDOW_H

#include <QMainWindow>
#include "headers/pathwindow.h"

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

private:
    Ui::SeventeenthWindow *ui;
    PathWindow *path;

};

#endif // SEVENTEENTHWINDOW_H
