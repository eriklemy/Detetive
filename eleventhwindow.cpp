#include "headers/eleventhwindow.h"
#include "headers/mainwindow.h"
#include "headers/tenthwindow.h"

#include "ui/ui_eleventhwindow.h"
#include <QPixmap>
#include <QMessageBox>

EleventhWindow::EleventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EleventhWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaTaverna.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    path = new PathWindow(this);
    path->hour++;
}

EleventhWindow::~EleventhWindow()
{
    delete ui;
}

void EleventhWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path = new PathWindow(this);
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

