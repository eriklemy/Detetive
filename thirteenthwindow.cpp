#include "headers/thirteenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/twelfthwindow.h"
#include "ui_thirteenthwindow.h"
#include <QPixmap>

ThirteenthWindow::ThirteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
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

