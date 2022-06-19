#ifndef SEVENTHWINDOW_H
#define SEVENTHWINDOW_H

#include "headers/pathwindow.h"
#include <QMainWindow>

namespace Ui {
class SeventhWindow;
}

class SeventhWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SeventhWindow(QWidget *parent = nullptr);
    ~SeventhWindow();

private slots:
    void on_pushContinueButton_clicked();

private:
    Ui::SeventhWindow *ui;
    PathWindow *path;};

#endif // SEVENTHWINDOW_H
