#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secwindow.h"
#include <QtMultimedia/QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_playButton_clicked();
    void on_exitButton_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *music;
    SecWindow *secWindow;
};
#endif // MAINWINDOW_H
