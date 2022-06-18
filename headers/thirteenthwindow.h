#ifndef THIRTEENTHWINDOW_H
#define THIRTEENTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class ThirteenthWindow;
}

class ThirteenthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThirteenthWindow(QWidget *parent = nullptr);
    ~ThirteenthWindow();

private:
    Ui::ThirteenthWindow *ui;
};

#endif // THIRTEENTHWINDOW_H
