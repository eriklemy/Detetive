#include "headers/thirteenthwindow.h"

#include "ui/ui_thirteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

ThirteenthWindow::ThirteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);

    path = new PathWindow(this);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

ThirteenthWindow::~ThirteenthWindow()
{
    delete ui;
}

void ThirteenthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}


