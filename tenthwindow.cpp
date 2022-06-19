#include "headers/tenthwindow.h"

#include "ui/ui_tenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

TenthWindow::TenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaBiblioteca.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    path = new PathWindow(this);
    path->hour++;
}

TenthWindow::~TenthWindow()
{
    delete ui;
}

void TenthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path = new PathWindow(this);

        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}


