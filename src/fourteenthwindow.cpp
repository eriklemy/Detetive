#include "headers/fourteenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/twelfthwindow.h"
#include "ui/ui_fourteenthwindow.h"
#include <QPixmap>

FourteenthWindow::FourteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FourteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatioByExpanding));
}

FourteenthWindow::~FourteenthWindow()
{
    delete ui;
}

void FourteenthWindow::on_pushBackButton_clicked()
{
    hide();
    TwelfthWindow *twelfthWindow = new TwelfthWindow(this);
    twelfthWindow->show();
}


void FourteenthWindow::on_pushContinueButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

