#include "headers/sixthwindow.h"
#include "headers/fifthwindow.h"
#include "headers/mainwindow.h"

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
    ui->textLugar->viewport()->setAutoFillBackground(false);

    secWindow->day++;
    secWindow->list.append("suspeito 4");
    ui->comboBox_sus->addItems(secWindow->list);
}

SixthWindow::~SixthWindow()
{
    delete ui;
}

void SixthWindow::on_pushBackButton_clicked()
{
    hide();
    FifthWindow *fifthWindow = new FifthWindow(this);
    fifthWindow->show();
}


void SixthWindow::on_pushContinueButton_clicked()
{
    if(secWindow->day <= 7)
    {
        hide();
        secWindow->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

void SixthWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

