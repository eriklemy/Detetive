#include "./ui_secwindow.h"
#include "secwindow.h"
#include <QPixmap>

SecWindow::SecWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

SecWindow::~SecWindow()
{
    delete ui;
}

void SecWindow::on_pushButton_clicked()
{
    hide();
    thirdWindow = new ThirdWindow(this);
    thirdWindow->show();
}

