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

private:
    Ui::SeventhWindow *ui;
};

#endif // SEVENTHWINDOW_H
