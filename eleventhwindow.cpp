#include "headers/eleventhwindow.h"
#include "headers/mainwindow.h"
#include "headers/tenthwindow.h"

#include "ui/ui_eleventhwindow.h"
#include <QPixmap>
#include <QMessageBox>

EleventhWindow::EleventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EleventhWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);

    secWindow->day++;
    secWindow->list.append("suspeito 9");
    ui->comboBox_sus->addItems(secWindow->list);
}

EleventhWindow::~EleventhWindow()
{
    delete ui;
}

void EleventhWindow::on_pushBackButton_clicked()
{
    hide();
    TenthWindow *tenthWindow = new TenthWindow(this);
    tenthWindow->show();
}


void EleventhWindow::on_pushContinueButton_clicked()
{
    if(secWindow->day <= 7)
    {
        hide();
        secWindow->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}

void EleventhWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

