#include "twelfthwindow.h"
#include "ui_twelfthwindow.h"

TwelfthWindow::TwelfthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TwelfthWindow)
{
    ui->setupUi(this);
}

TwelfthWindow::~TwelfthWindow()
{
    delete ui;
}
