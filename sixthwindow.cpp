#include "headers/sixthwindow.h"

#include "ui/ui_sixthwindow.h"
#include <QPixmap>
#include <QMessageBox>

SixthWindow::SixthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SixthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaEstalagem.png");
    ui->label->setPixmap(pix.scaled(1366, 768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

SixthWindow::~SixthWindow()
{
    delete ui;
}

void SixthWindow::on_pushContinueButton_clicked()
{
    hide();    
    path = new PathWindow(this);
    path->hour++;
    if(path->hour < 7)
    {
        path->show();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}
