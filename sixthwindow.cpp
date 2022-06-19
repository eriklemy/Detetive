#include "headers/sixthwindow.h"

#include "ui/ui_sixthwindow.h"
#include <QPixmap>
#include <QMessageBox>

SixthWindow::SixthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SixthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);

    path = new PathWindow(this);
    ui->comboBox_sus->addItems(path->listOfSuspects);
    path->hour++;
}

SixthWindow::~SixthWindow()
{
    delete ui;
}

void SixthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        this->hide();
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}
