#include "headers/twelfthwindow.h"
#include "headers/eleventhwindow.h"
#include "headers/thirteenthwindow.h"
#include "ui/ui_twelfthwindow.h"
#include <QPixmap>

TwelfthWindow::TwelfthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TwelfthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/j4uakmaghau61.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
}

TwelfthWindow::~TwelfthWindow()
{
    delete ui;
}

void TwelfthWindow::on_pushBackButton_clicked()
{
    hide();
    EleventhWindow *eleventhWindow = new EleventhWindow(this);
    eleventhWindow->show();
}


void TwelfthWindow::on_pushContinueButton_clicked()
{
    hide();
    ThirteenthWindow *thirteenthWindow = new ThirteenthWindow(this);
    thirteenthWindow->show();
}

