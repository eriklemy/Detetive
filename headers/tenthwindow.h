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

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::TenthWindow *ui;
};

#endif // TENTHWINDOW_H
