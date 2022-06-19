#include "headers/forthwindow.h"
#include "headers/mainwindow.h"
#include "headers/fifthwindow.h"

#include "ui/ui_fifthwindow.h"
#include <QPixmap>
#include <QMessageBox>

FifthWindow::FifthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wallpaper1.jpeg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    path = new PathWindow(this);

    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

FifthWindow::~FifthWindow()
{
    delete ui;
}

void FifthWindow::on_pushBackButton_clicked()
{
    hide();
    ForthWindow *forthWindow = new ForthWindow(this);
    forthWindow->show();
}


void FifthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path = new PathWindow(this);
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}
