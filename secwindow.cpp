#include "secwindow.h"
#include "./ui_secwindow.h"
#include <QPixmap>

SecWindow::SecWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/erick/OneDrive/Documentos/RPLM/Detetive/menu.jpeg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

SecWindow::~SecWindow()
{
    delete ui;
}
