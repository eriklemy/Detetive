#include "thirdwindow.h"
#include "./ui_thirdwindow.h"
#include <QPixmap>

ThirdWindow::ThirdWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wolf.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}
