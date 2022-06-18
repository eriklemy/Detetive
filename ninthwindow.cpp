#include "ninthwindow.h"
#include "ui_ninthwindow.h"

NinthWindow::NinthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NinthWindow)
{
    ui->setupUi(this);
}

NinthWindow::~NinthWindow()
{
    delete ui;
}
