#include "headers/seventhwindow.h"

#include "ui/ui_seventhwindow.h"
#include <QPixmap>
#include <QMessageBox>

SeventhWindow::SeventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SeventhWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);

    ui->textSus->viewport()->setAutoFillBackground(false);

    path = new PathWindow(this);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

SeventhWindow::~SeventhWindow()
{
    delete ui;
}

void SeventhWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

