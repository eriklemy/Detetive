#ifndef TENTHWINDOW_H
#define TENTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class TenthWindow;
}

class TenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TenthWindow(QWidget *parent = nullptr);
    ~TenthWindow();

private:
    Ui::TenthWindow *ui;
};

#endif // TENTHWINDOW_H
