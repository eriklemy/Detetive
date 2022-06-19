#include "headers/tenthwindow.h"

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
    path = new PathWindow(this);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

TenthWindow::~TenthWindow()
{
    delete ui;
}

void TenthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}


