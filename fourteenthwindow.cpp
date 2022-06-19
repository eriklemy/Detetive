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
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textSus->viewport()->setAutoFillBackground(false);

    path = new PathWindow(this);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

FourteenthWindow::~FourteenthWindow()
{
    delete ui;
}

void FourteenthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

