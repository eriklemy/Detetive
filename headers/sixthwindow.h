#ifndef SIXTHWINDOW_H
#define SIXTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class sixthWindow;
}

class sixthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit sixthWindow(QWidget *parent = nullptr);
    ~sixthWindow();

private:
    Ui::sixthWindow *ui;
};

#endif // SIXTHWINDOW_H
