#include "headers/ninthwindow.h"
#include "headers/eighthwindow.h"
#include "headers/tenthwindow.h"

#include "ui/ui_ninthwindow.h"
#include <QPixmap>
#include <QMessageBox>

NinthWindow::NinthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NinthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

NinthWindow::~NinthWindow()
{
    delete ui;
}

void NinthWindow::on_pushBackButton_clicked()
{
    hide();
    EighthWindow *eighthWindow = new EighthWindow(this);
    eighthWindow->show();
}


void NinthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

