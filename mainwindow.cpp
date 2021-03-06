#include "headers/mainwindow.h"
#include "headers/secwindow.h"

#include "ui/ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/Images/TelaInicial.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
    ui->textBrowser->setStyleSheet("border: solid 20px grey;  background-color: rgba(29, 10, 0, 66); color:rgb(0,255,0)");
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

void MainWindow::on_exitButton_clicked(){}

