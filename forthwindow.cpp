#include "headers/forthwindow.h"
#include "headers/mainwindow.h"
#include "headers/thirdwindow.h"

#include "ui/ui_forthwindow.h"
#include <QPixmap>
#include <QMessageBox>

ForthWindow::ForthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->comboBox_sus->addItems(path->listOfSuspects);
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
    path = new PathWindow(this);
    path->show();
}


