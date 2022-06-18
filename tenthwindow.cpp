#include "tenthwindow.h"
#include "ui_tenthwindow.h"

TenthWindow::TenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TenthWindow)
{
    ui->setupUi(this);
}

TenthWindow::~TenthWindow()
{
    delete ui;
}
