#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QMainWindow>
#include <QStringList>

namespace Ui {
class SecWindow;
}

class SecWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecWindow(QWidget *parent = nullptr);
    ~SecWindow();
    void getScreen();
    QStringList list;
    qint16 day = 0;
    qint16 screenChose = -1;

private slots:
    void on_pushContinueButton_clicked();
    void on_pushInicioButton_clicked();
    void on_comboBox_activated(int index);

private:
    Ui::SecWindow *ui;

};

#endif // SECWINDOW_H
