#include "headers/fifteenthwindow.h"
#include "headers/mainwindow.h"
#include "headers/twelfthwindow.h"

#include "ui/ui_fifteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

FifteenthWindow::FifteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->comboBox_sus->addItems(secWindow->list);
}

FifteenthWindow::~FifteenthWindow()
{
    delete ui;
}

void FifteenthWindow::on_pushBackButton_clicked()
{
    hide();
    TwelfthWindow *twelfthWindow = new TwelfthWindow(this);
    twelfthWindow->show();
}

void FifteenthWindow::on_pushContinueButton_clicked()
{
    if(secWindow->day <= 7)
    {
        hide();
        secWindow->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um suspeito", QMessageBox::Ok);
}
