#ifndef SEVENTHWINDOW_H
#define SEVENTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class SeventhWindow;
}

class SeventhWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SeventhWindow(QWidget *parent = nullptr);
    ~SeventhWindow();

private slots:
    void on_pushBackButton_clicked();
    void on_pushContinueButton_clicked();

private:
    Ui::SeventhWindow *ui;
};

#endif // SEVENTHWINDOW_H
