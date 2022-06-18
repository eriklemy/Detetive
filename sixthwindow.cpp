#include "sixthwindow.h"
#include "ui_sixthwindow.h"

sixthWindow::sixthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sixthWindow)
{
    ui->setupUi(this);
}

sixthWindow::~sixthWindow()
{
    delete ui;
}
