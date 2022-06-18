#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>
#include <headers/secwindow.h>

namespace Ui {
class ThirdWindow;
}

class ThirdWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThirdWindow(QWidget *parent = nullptr);
    ~ThirdWindow();

private slots:
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();
    void on_pushBackButton_clicked();
    void on_comboBox_activated(int index);

private:
    Ui::ThirdWindow *ui;
    SecWindow *secWindow = new SecWindow();
};

#endif // THIRDWINDOW_H
