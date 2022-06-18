#include "headers/forthwindow.h"
#include "headers/mainwindow.h"
#include "headers/fifthwindow.h"
#include "headers/sixthwindow.h"
#include "ui_fifthwindow.h"
#include <QPixmap>

FifthWindow::FifthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wallpaper1.jpeg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
}

FifthWindow::~FifthWindow()
{
    delete ui;
}

void FifthWindow::on_pushBackButton_clicked()
{
    hide();
    ForthWindow *forthWindow = new ForthWindow(this);
    forthWindow->show();
}


void FifthWindow::on_pushContinueButton_clicked()
{
    hide();
    SixthWindow *sixthWindow = new SixthWindow(this);
    sixthWindow->show();
}


void FifthWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

