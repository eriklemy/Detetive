#include "headers/mainwindow.h"
#include "headers/secwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
    connect(ui->exitButton, SIGNAL(clicked()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_playButton_clicked()
{
    hide();
    SecWindow *secWindow = new SecWindow(this);
    secWindow->show();
}


void MainWindow::on_exitButton_clicked()
{

}

