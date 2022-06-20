#include "headers/fourteenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/twelfthwindow.h"

#include "ui/ui_fourteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

FourteenthWindow::FourteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FourteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaParteBaixa.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

FourteenthWindow::~FourteenthWindow()
{
    delete ui;
}

void FourteenthWindow::on_pushContinueButton_clicked()
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

