#include "eighthwindow.h"
#include "ui_eighthwindow.h"

EighthWindow::EighthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EighthWindow)
{
    ui->setupUi(this);
}

EighthWindow::~EighthWindow()
{
    delete ui;
}
