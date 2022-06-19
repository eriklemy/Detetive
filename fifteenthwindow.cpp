#include "headers/fifteenthwindow.h"
#include "headers/mainwindow.h"

#include "ui/ui_fifteenthwindow.h"
#include <QPixmap>
#include <QMessageBox>

FifteenthWindow::FifteenthWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FifteenthWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaVitoria.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));
    ui->textBrowser->viewport()->setAutoFillBackground(false);

    path = new PathWindow(this);
    path->hour++;
}

FifteenthWindow::~FifteenthWindow()
{
    delete ui;
}

void FifteenthWindow::on_pushInicioButton_clicked()
{
    QMessageBox::information(this, "popup", "Parabéns voce encontrou o ladrão e salvou a cidade!!", QMessageBox::Ok);
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}
