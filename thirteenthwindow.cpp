#include "headers/thirteenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/twelfthwindow.h"

#include "ui/ui_thirteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

ThirteenthWindow::ThirteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);

    secWindow->day++;
    secWindow->list.append("suspeito 11");
    ui->comboBox_sus->addItems(secWindow->list);
}

ThirteenthWindow::~ThirteenthWindow()
{
    delete ui;
}

void ThirteenthWindow::on_pushBackButton_clicked()
{
    hide();
    TwelfthWindow *twelfthWindow = new TwelfthWindow(this);
    twelfthWindow->show();
}


void ThirteenthWindow::on_pushContinueButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

void ThirteenthWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


