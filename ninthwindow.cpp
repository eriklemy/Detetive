#include "headers/ninthwindow.h"
#include "headers/eighthwindow.h"
#include "headers/tenthwindow.h"
#include "ui_ninthwindow.h"
#include <QPixmap>

NinthWindow::NinthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NinthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
}

NinthWindow::~NinthWindow()
{
    delete ui;
}

void NinthWindow::on_pushBackButton_clicked()
{
    hide();
    EighthWindow *eighthWindow = new EighthWindow(this);
    eighthWindow->show();
}


void NinthWindow::on_pushContinueButton_clicked()
{
    hide();
    TenthWindow *tenthWindow = new TenthWindow(this);
    tenthWindow->show();
}

