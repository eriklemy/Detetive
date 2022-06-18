#include "headers/forthwindow.h"
#include "headers/fifthwindow.h"
#include "headers/thirdwindow.h"
#include "ui_forthwindow.h"
#include <QPixmap>

ForthWindow::ForthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
}

ForthWindow::~ForthWindow()
{
    delete ui;
}

void ForthWindow::on_pushBackButton_clicked()
{
    hide();
    ThirdWindow *thirdWindow = new ThirdWindow(this);
    thirdWindow->show();
}


void ForthWindow::on_pushContinueButton_clicked()
{
    hide();
    FifthWindow *fifthWindow = new FifthWindow(this);
    fifthWindow->show();
}

