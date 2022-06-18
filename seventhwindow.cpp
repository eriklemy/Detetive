#include "seventhwindow.h"
#include "ui_seventhwindow.h"

SeventhWindow::SeventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SeventhWindow)
{
    ui->setupUi(this);
}

SeventhWindow::~SeventhWindow()
{
    delete ui;
}
