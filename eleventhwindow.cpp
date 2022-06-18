#include "eleventhwindow.h"
#include "ui_eleventhwindow.h"

EleventhWindow::EleventhWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EleventhWindow)
{
    ui->setupUi(this);
}

EleventhWindow::~EleventhWindow()
{
    delete ui;
}
