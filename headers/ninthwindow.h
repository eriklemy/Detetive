#ifndef NINTHWINDOW_H
#define NINTHWINDOW_H

#include "headers/secwindow.h"
#include <QMainWindow>

namespace Ui {
class NinthWindow;
}

class NinthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NinthWindow(QWidget *parent = nullptr);
    ~NinthWindow();
private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::NinthWindow *ui;
    SecWindow *secWindow = new SecWindow();
};

#endif // NINTHWINDOW_H
