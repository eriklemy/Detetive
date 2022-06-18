#ifndef NINTHWINDOW_H
#define NINTHWINDOW_H

#include <QMainWindow>

namespace Ui {
class NinthWindow;
}

class NinthWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NinthWindow(QWidget *parent = nullptr);
    ~NinthWindow();

private:
    Ui::NinthWindow *ui;
};

#endif // NINTHWINDOW_H
