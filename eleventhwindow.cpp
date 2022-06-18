#include "headers/eleventhwindow.h"
#include "headers/tenthwindow.h"
#include "headers/twelfthwindow.h"
#include "ui_eleventhwindow.h"
#include <QPixmap>

EleventhWindow::EleventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EleventhWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
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
    hide();
    TwelfthWindow *twelfthWindow = new TwelfthWindow(this);
    twelfthWindow->show();
}

