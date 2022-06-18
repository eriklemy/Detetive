#ifndef FOURTEENTHWINDOW_H
#define FOURTEENTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class FourteenthWindow;
}

class FourteenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FourteenthWindow(QWidget *parent = nullptr);
    ~FourteenthWindow();

private:
    Ui::FourteenthWindow *ui;
};

#endif // FOURTEENTHWINDOW_H
