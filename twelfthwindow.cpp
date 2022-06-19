#include "headers/twelfthwindow.h"
#include "headers/eleventhwindow.h"
#include "headers/mainwindow.h"

#include "ui/ui_twelfthwindow.h"
#include <QPixmap>
#include <QMessageBox>

TwelfthWindow::TwelfthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TwelfthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->comboBox_sus->addItems(path->listOfSuspects);
}

TwelfthWindow::~TwelfthWindow()
{
    delete ui;
}

void TwelfthWindow::on_pushBackButton_clicked()
{
    hide();
    EleventhWindow *eleventhWindow = new EleventhWindow(this);
    eleventhWindow->show();
}


void TwelfthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}
