#include "headers/forthwindow.h"

#include "ui/ui_forthwindow.h"
#include <QPixmap>
#include <QMessageBox>

ForthWindow::ForthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaPracaCental.jpg");
    ui->label->setPixmap(pix.scaled(1500, 768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
    ui->textBrowser->setStyleSheet("border: solid 20px grey;  background-color: rgba(33, 24, 0, 79); color:rgb(0,255,0)");
}

ForthWindow::~ForthWindow()
{
    delete ui;
}

void ForthWindow::on_pushContinueButton_clicked()
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


