#ifndef EIGHTHWINDOW_H
#define EIGHTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class EighthWindow;
}

class EighthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EighthWindow(QWidget *parent = nullptr);
    ~EighthWindow();

private:
    Ui::EighthWindow *ui;
};

#endif // EIGHTHWINDOW_H
