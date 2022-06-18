#include "headers/tenthwindow.h"
#include "headers/eleventhwindow.h"
#include "headers/ninthwindow.h"
#include "ui_tenthwindow.h"
#include <QPixmap>

TenthWindow::TenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
}

TenthWindow::~TenthWindow()
{
    delete ui;
}

void TenthWindow::on_pushBackButton_clicked()
{
    hide();
    NinthWindow *ninthWindow = new NinthWindow(this);
    ninthWindow->show();
}


void TenthWindow::on_pushContinueButton_clicked()
{
    hide();
    EleventhWindow *eleventhWindow = new EleventhWindow(this);
    eleventhWindow->show();
}

