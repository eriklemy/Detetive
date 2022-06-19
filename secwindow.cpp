#include "headers/mainwindow.h"
#include "headers/secwindow.h"
#include "headers/thirdwindow.h"

#include "ui/ui_secwindow.h"
#include <QPixmap>
#include <QMessageBox>

SecWindow::SecWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaDragao.jpg");
    ui->label->setPixmap(pix.scaled(1366, 768, Qt::KeepAspectRatioByExpanding));

    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

SecWindow::~SecWindow()
{
    delete ui;
}

void SecWindow::on_pushContinueButton_clicked()
{
    hide();
    ThirdWindow *thirdWindow = new ThirdWindow(this);
    thirdWindow->show();
}

void SecWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

