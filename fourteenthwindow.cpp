#include "fourteenthwindow.h"
#include "ui_fourteenthwindow.h"

FourteenthWindow::FourteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FourteenthWindow)
{
    ui->setupUi(this);
}

FourteenthWindow::~FourteenthWindow()
{
    delete ui;
}
