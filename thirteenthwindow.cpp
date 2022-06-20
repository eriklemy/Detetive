#include "headers/thirteenthwindow.h"

#include "ui/ui_thirteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

ThirteenthWindow::ThirteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelabairoMoradores.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

ThirteenthWindow::~ThirteenthWindow()
{
    delete ui;
}

void ThirteenthWindow::on_pushContinueButton_clicked()
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


