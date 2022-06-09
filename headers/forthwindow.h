#ifndef FORTHWINDOW_H
#define FORTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class ForthWindow;
}

class ForthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForthWindow(QWidget *parent = nullptr);
    ~ForthWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::ForthWindow *ui;
};

#endif // FORTHWINDOW_H