#include "headers/fourteenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/twelfthwindow.h"

#include "ui/ui_fourteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

FourteenthWindow::FourteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FourteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);

    secWindow->day++;
    secWindow->list.append("suspeito 12");
    ui->comboBox_sus->addItems(secWindow->list);
}

FourteenthWindow::~FourteenthWindow()
{
    delete ui;
}

void FourteenthWindow::on_pushBackButton_clicked()
{
    hide();
    TwelfthWindow *twelfthWindow = new TwelfthWindow(this);
    twelfthWindow->show();
}


void FourteenthWindow::on_pushContinueButton_clicked()
{
    if(secWindow->day <= 7)
    {
        hide();
        secWindow->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

void FourteenthWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

