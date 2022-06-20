#include "headers/thirdwindow.h"

#include "ui/ui_thirdwindow.h"
#include <QPixmap>
#include <QMessageBox>

ThirdWindow::ThirdWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaRei.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}

void ThirdWindow::on_pushContinueButton_clicked()
{
    this->hide();
    path = new PathWindow(this);
    path->show();
}

