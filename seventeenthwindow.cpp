#include "headers/seventeenthwindow.h"
#include "headers/mainwindow.h"

#include "headers/pathwindow.h"
#include "ui/ui_seventeenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

SeventeenthWindow::SeventeenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SeventeenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wallpaper1.jpeg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

SeventeenthWindow::~SeventeenthWindow()
{
    delete ui;
}

void SeventeenthWindow::on_pushBackButton_clicked()
{
    hide();
    path = new PathWindow();
    path->show();
}

void SeventeenthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

