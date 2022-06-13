#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QMainWindow>

namespace Ui {
class SecWindow;
}

class SecWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecWindow(QWidget *parent = nullptr);
    ~SecWindow();

private slots:
    void on_pushButton_clicked();
    void on_comboBox_activated(int index);

private:
    Ui::SecWindow *ui;
    int prop;
};

#endif // SECWINDOW_H
