#ifndef ELEVENTHWINDOW_H
#define ELEVENTHWINDOW_H

#include "headers/pathwindow.h"
#include <QMainWindow>

namespace Ui {
class EleventhWindow;
}

class EleventhWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EleventhWindow(QWidget *parent = nullptr);
    ~EleventhWindow();

private slots:
    void on_pushContinueButton_clicked();

private:
    Ui::EleventhWindow *ui;
    PathWindow *path;
};

#endif // ELEVENTHWINDOW_H
