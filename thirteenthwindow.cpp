#include "thirteenthwindow.h"
#include "ui_thirteenthwindow.h"

ThirteenthWindow::ThirteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirteenthWindow)
{
    ui->setupUi(this);
}

ThirteenthWindow::~ThirteenthWindow()
{
    delete ui;
}
