#include "headers/fifteenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/twelfthwindow.h"
#include "ui_fifteenthwindow.h"
#include <QPixmap>

FifteenthWindow::FifteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
}

FifteenthWindow::~FifteenthWindow()
{
    delete ui;
}

void FifteenthWindow::on_pushBackButton_clicked()
{
    hide();
    TwelfthWindow *twelfthWindow = new TwelfthWindow(this);
    twelfthWindow->show();
}


void FifteenthWindow::on_pushContinueButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

