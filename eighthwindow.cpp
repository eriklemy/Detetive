#include "headers/eighthwindow.h"
#include "headers/mainwindow.h"
#include "headers/sixthwindow.h"

#include "ui/ui_eighthwindow.h"
#include <QPixmap>
#include <QMessageBox>

EighthWindow::EighthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EighthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaEnfermagem.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
    ui->textBrowser->setStyleSheet("border: solid 20px grey;  background-color: rgba(33, 24, 0, 79); color:rgb(0,255,0)");
}

EighthWindow::~EighthWindow()
{
    delete ui;
}

void EighthWindow::on_pushContinueButton_clicked()
{
    hide();    
    path = new PathWindow(this);
    path->hour++;
    if(path->hour < 7)
    {
        path->show();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

