#include "headers/mainwindow.h"
#include "headers/thirdwindow.h"
#include "headers/forthwindow.h"
#include "headers/fifthwindow.h"
#include "headers/sixthwindow.h"
#include "headers/seventhwindow.h"
#include "headers/eighthwindow.h"
#include "headers/ninthwindow.h"
#include "headers/tenthwindow.h"
#include "headers/eleventhwindow.h"
#include "headers/twelfthwindow.h"
#include "headers/thirteenthwindow.h"
#include "headers/fourteenthwindow.h"
#include "headers/fifteenthwindow.h"

#include "headers/secwindow.h"
#include "ui_secwindow.h"
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
    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);

    list.append("None");
    ui->comboBox_suspeitos->addItems(list);
}

SecWindow::~SecWindow()
{
    delete ui;
}

void SecWindow::on_pushContinueButton_clicked()
{
    this->hide();
    getScreen();
}

void SecWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

void SecWindow::on_comboBox_activated(int index)
{
   screenChose = index + 1;
}

void SecWindow::getScreen()
{
    ThirdWindow *screenOne = new ThirdWindow(this);
    ForthWindow *screenTwo = new ForthWindow(this);
    FifthWindow *screenThree = new FifthWindow(this);
    SixthWindow *screenFour = new SixthWindow(this);
    SeventhWindow *screenFive = new SeventhWindow(this);
    EighthWindow *screenSix = new EighthWindow(this);
    NinthWindow *screenSeven = new NinthWindow(this);
    TenthWindow *screenEigth = new TenthWindow(this);
    EleventhWindow *screenNine = new EleventhWindow(this);
    TwelfthWindow *screenTen = new TwelfthWindow(this);
    ThirteenthWindow *screenEleven = new ThirteenthWindow(this);
    FourteenthWindow *screenTwelve = new FourteenthWindow(this);
    FifteenthWindow *screenThirteen = new FifteenthWindow(this);

    switch (screenChose) {
        case 0:  screenOne->show();      break;
        case 1:  screenTwo->show();      break;
        case 2:  screenThree->show();    break;
        case 3:  screenFour->show();     break;
        case 4:  screenFive->show();     break;
        case 5:  screenSix->show();      break;
        case 6:  screenSeven->show();    break;
        case 7:  screenEigth->show();    break;
        case 8:  screenNine->show();     break;
        case 9:  screenTen->show();      break;
        case 10: screenEleven->show();   break;
        case 11: screenTwelve->show();   break;
        case 12: screenThirteen->show(); break;
        default: screenOne->show();      break;
    }
}



