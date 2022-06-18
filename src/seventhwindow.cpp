#include "headers/seventhwindow.h"
#include "headers/eighthwindow.h"
#include "headers/sixthwindow.h"
#include "ui/ui_seventhwindow.h"
#include <QPixmap>
#include <QMessageBox>

SeventhWindow::SeventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SeventhWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);

}

SeventhWindow::~SeventhWindow()
{
    delete ui;
}

void SeventhWindow::on_pushBackButton_clicked()
{
    hide();
    SixthWindow *sixthWindow = new SixthWindow(this);
    sixthWindow->show();
}


void SeventhWindow::on_pushContinueButton_clicked()
{
    hide();
    EighthWindow *eighthWindow = new EighthWindow(this);
    eighthWindow->show();
}

