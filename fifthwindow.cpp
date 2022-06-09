#include "fifthwindow.h"
#include "mainwindow.h"
#include "ui_fifthwindow.h"
#include <QPixmap>

FifthWindow::FifthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/wallpaper1.jpeg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
}

FifthWindow::~FifthWindow()
{
    delete ui;
}

void FifthWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

