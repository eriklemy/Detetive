#include "headers/eighthwindow.h"
#include "headers/mainwindow.h"
#include "headers/sixthwindow.h"

#include "ui/ui_eighthwindow.h"
#include <QPixmap>
#include <QMessageBox>

EighthWindow::EighthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EighthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaEnfermagem.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    path = new PathWindow(this);
    path->hour++;
}

EighthWindow::~EighthWindow()
{
    delete ui;
}

void EighthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path = new PathWindow(this);
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

