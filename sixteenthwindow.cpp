#include "headers/sixteenthwindow.h"
#include "headers/mainwindow.h"

#include "ui/ui_sixteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

SixteenthWindow::SixteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SixteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wallpaper1.jpeg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

SixteenthWindow::~SixteenthWindow()
{
    delete ui;
}

void SixteenthWindow::on_pushBackButton_clicked()
{
    hide();
}

void SixteenthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        this->hide();
        path = new PathWindow(this);
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

