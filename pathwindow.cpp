#include "headers/pathwindow.h"
#include "headers/mainwindow.h"

#include "ui/ui_pathwindow.h"
#include <QPixmap>
#include <QMessageBox>

PathWindow::PathWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PathWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wallpaper1.jpeg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);

    secWindow->day++;
    secWindow->list.append("suspeito 3");
    ui->comboBox_sus->addItems(secWindow->list);
}

PathWindow::~PathWindow()
{
    delete ui;
}

void PathWindow::on_pushBackButton_clicked()
{
    hide();

}

void PathWindow::on_pushContinueButton_clicked()
{
    if(secWindow->day <= 7)
    {
        hide();
        secWindow->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

void PathWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

