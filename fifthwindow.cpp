#include "headers/fifthwindow.h"

#include "ui/ui_fifthwindow.h"
#include <QPixmap>
#include <QMessageBox>

FifthWindow::FifthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaMercadoCentral.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    path = new PathWindow(this);
    path->hour++;
}

FifthWindow::~FifthWindow()
{
    delete ui;
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
