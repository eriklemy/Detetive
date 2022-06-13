#include "headers/mainwindow.h"
#include "headers/thirdwindow.h"
#include "ui_secwindow.h"
#include "headers/secwindow.h"
#include <QPixmap>
#include <QMessageBox>

SecWindow::SecWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1080,720, Qt::KeepAspectRatio));
    ui->textBrowser->viewport()->setAutoFillBackground(false);
}

SecWindow::~SecWindow()
{
    delete ui;
}

void SecWindow::on_pushButton_clicked()
{
    hide();
    ThirdWindow *thirdWindow = new ThirdWindow(this);
    thirdWindow->show();
}


void SecWindow::on_comboBox_activated(int index)
{
    QMessageBox msgBox;
    MainWindow *mainWindow = new MainWindow(this);
    switch(index) {
        case 0:
            if(mainWindow->propTeste == 1)
                QMessageBox::information(this, "Dica 1", "Dica 1.1", QMessageBox::Ok);
            else
                QMessageBox::information(this, "Dica 1", "Dica 1", QMessageBox::Ok);
           break;
        case 1:
            QMessageBox::information(this, "Dica 2", "Dica 2", QMessageBox::Ok);
            break;
        case 2:
            QMessageBox::information(this, "Dica 3", "Dica 3", QMessageBox::Ok);
            break;
       default:
            break;
    }

}

