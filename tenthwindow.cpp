#include "headers/tenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/ninthwindow.h"

#include "ui/ui_tenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

TenthWindow::TenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->comboBox_sus->addItems(secWindow->list);
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
    if(secWindow->day <= 7)
    {
        hide();
        secWindow->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}


