#include "headers/twelfthwindow.h"

#include "ui/ui_twelfthwindow.h"
#include <QPixmap>
#include <QMessageBox>

TwelfthWindow::TwelfthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TwelfthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaEntradaCapital.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);

}

TwelfthWindow::~TwelfthWindow()
{
    delete ui;
}

void TwelfthWindow::on_pushContinueButton_clicked()
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
