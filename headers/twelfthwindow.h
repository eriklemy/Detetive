#ifndef TWELFTHWINDOW_H
#define TWELFTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class TwelfthWindow;
}

class TwelfthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TwelfthWindow(QWidget *parent = nullptr);
    ~TwelfthWindow();

private:
    Ui::TwelfthWindow *ui;
};

#endif // TWELFTHWINDOW_H
