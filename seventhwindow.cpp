#include "headers/seventhwindow.h"

#include "ui/ui_seventhwindow.h"
#include <QPixmap>
#include <QMessageBox>

SeventhWindow::SeventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SeventhWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaCorteDoRei.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
    ui->textBrowser->setStyleSheet("border: solid 20px grey;  background-color: rgba(33, 24, 0, 79); color:rgb(0,255,0)");
}

SeventhWindow::~SeventhWindow()
{
    delete ui;
}

void SeventhWindow::on_pushContinueButton_clicked()
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

