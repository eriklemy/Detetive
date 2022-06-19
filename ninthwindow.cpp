#include "headers/ninthwindow.h"

#include "ui/ui_ninthwindow.h"
#include <QPixmap>
#include <QMessageBox>

NinthWindow::NinthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NinthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaCasaDoDuke.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);

    path = new PathWindow(this);
    path->hour++;
}

NinthWindow::~NinthWindow()
{
    delete ui;
}

void NinthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        this->hide();
        path = new PathWindow(this);
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

