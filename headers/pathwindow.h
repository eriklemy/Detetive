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

    int hour = 0;
    int pathChose = 0;
    void getScreen();
    QStringList listOfSuspects;

private slots:
    void on_pushBackButton_clicked();
    void on_pushInicioButton_clicked();
    void on_pushOkButton_clicked();
    void on_listWidget_currentRowChanged(int currentRow);

private:
    Ui::PathWindow *ui;
};

#endif // PATHWINDOW_H
