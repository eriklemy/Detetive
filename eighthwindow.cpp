#include "headers/eighthwindow.h"
#include "headers/sixthwindow.h"
#include "headers/ninthwindow.h"
#include "ui_eighthwindow.h"
#include <QPixmap>

EighthWindow::EighthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EighthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
}

EighthWindow::~EighthWindow()
{
    delete ui;
}

void EighthWindow::on_pushBackButton_clicked()
{
    hide();
    SixthWindow *sixthWindow = new SixthWindow(this);
    sixthWindow->show();
}


void EighthWindow::on_pushContinueButton_clicked()
{
    hide();
    NinthWindow *ninthWindow = new NinthWindow(this);
    ninthWindow->show();
}

