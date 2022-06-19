#include "headers/fifteenthwindow.h"

#include "ui/ui_fifteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

FifteenthWindow::FifteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaEstalagem.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textSus->viewport()->setAutoFillBackground(false);

    path = new PathWindow(this);
    path->hour++;
}

FifteenthWindow::~FifteenthWindow()
{
    delete ui;
}

void FifteenthWindow::on_pushContinueButton_clicked()
{
    if(path->hour < 7)
    {
        hide();
        path = new PathWindow(this);
        path->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}
