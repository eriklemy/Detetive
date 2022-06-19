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
public:
    qint32 hour = 0;
    qint32 pathChose = 0;
    void getScreen();
    QStringList listOfSuspects;

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();

private:
    Ui::PathWindow *ui;
};

#endif // PATHWINDOW_H
