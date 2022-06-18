#include "headers/secwindow.h"
#include "headers/thirdwindow.h"
#include "headers/forthwindow.h"

#include "ui_thirdwindow.h"
#include <QPixmap>
#include <QMessageBox>

ThirdWindow::ThirdWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wolf.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
    ui->textSus->viewport()->setAutoFillBackground(false);

    SecWindow *secWindow = new SecWindow();

    secWindow->list.replace(0, "suspeito 1");
    ui->comboBox->addItems(secWindow->list);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}

void ThirdWindow::on_pushContinueButton_clicked()
{
    hide();
    ForthWindow *forthWindow = new ForthWindow();
    forthWindow->show();
}

void ThirdWindow::on_pushBackButton_clicked()
{
    hide();
    SecWindow *secWindow = new SecWindow(this);
    secWindow->show();
}

