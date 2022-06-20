#include "headers/ninthwindow.h"

#include "ui/ui_ninthwindow.h"
#include <QPixmap>
#include <QMessageBox>

NinthWindow::NinthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NinthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaCasaDoDuke.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
    ui->textBrowser->setStyleSheet("border: solid 20px grey;  background-color: rgba(33, 24, 0, 79); color:rgb(0,255,0)");
}

NinthWindow::~NinthWindow()
{
    delete ui;
}

void NinthWindow::on_pushContinueButton_clicked()
{
    hide();    
    path = new PathWindow(this);
    path->hour++;
    if(path->hour > 7)
    {
        QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
    }
    path->show();
}

