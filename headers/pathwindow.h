#ifndef PATHWINDOW_H
#define PATHWINDOW_H

#include <QMainWindow>
#include <QStringList>

namespace Ui {
class PathWindow;
}

class PathWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PathWindow(QWidget *parent = nullptr);
    ~PathWindow();
    int hour = 7;
    int pathChose = -1;
    QStringList listOfSuspects;

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();
    void getScreen();

private:
    Ui::PathWindow *ui;
};

#endif // PATHWINDOW_H
