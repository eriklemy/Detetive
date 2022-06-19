#include "headers/thirdwindow.h"
#include "headers/forthwindow.h"
#include "headers/mainwindow.h"
#include "headers/secwindow.h"

#include "ui/ui_thirdwindow.h"
#include <QPixmap>
#include <QMessageBox>

ThirdWindow::ThirdWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wolf.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textSus->viewport()->setAutoFillBackground(false);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}

void ThirdWindow::on_pushContinueButton_clicked()
{
    hide();
    path = new PathWindow(this);
    path->show();
}

void ThirdWindow::on_pushBackButton_clicked()
{
    hide();
    SecWindow *secWindow = new SecWindow(this);
    secWindow->show();
}

void ThirdWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

