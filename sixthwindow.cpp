#include "headers/sixthwindow.h"
#include "headers/fifthwindow.h"
#include "headers/seventhwindow.h"
#include "ui_sixthwindow.h"
#include <QPixmap>

SixthWindow::SixthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SixthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
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
    hide();
    SeventhWindow *seventhWindow = new SeventhWindow(this);
    seventhWindow->show();
}

