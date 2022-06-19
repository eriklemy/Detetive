#include "headers/thirdwindow.h"
#include "headers/forthwindow.h"
#include "headers/mainwindow.h"
#include "headers/secwindow.h"

#include "ui/ui_thirdwindow.h"
#include <QPixmap>
#include <QMessageBox>

ThirdWindow::ThirdWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wolf.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);

    secWindow->day++;
    secWindow->list.append("suspeito 1");
    ui->comboBox_sus->addItems(secWindow->list);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}

void ThirdWindow::on_pushContinueButton_clicked()
{
    if(secWindow->day <= 7)
    {
        hide();
        secWindow->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

void ThirdWindow::on_pushBackButton_clicked()
{
    hide();
    secWindow->show();
}

void ThirdWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

void ThirdWindow::on_comboBox_activated(int index)
{
   secWindow->screenChose = index + 1;
}
