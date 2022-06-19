#include "headers.h"

#include "headers/pathwindow.h"
#include "ui/ui_pathwindow.h"

#include <QPixmap>
#include <QMessageBox>
#include <QListWidget>

PathWindow::PathWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PathWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/castle.jpg");
    ui->label->setPixmap(pix.scaled(1366,768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->listWidget->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);

    listOfSuspects.append("Bardo");
    listOfSuspects.append("Ladino");
    listOfSuspects.append("Duque");
    listOfSuspects.append("Forasteiro");
    ui->comboBox_sus->addItems(listOfSuspects);
}

PathWindow::~PathWindow()
{
    delete ui;
}

void PathWindow::on_pushBackButton_clicked()
{
    hide();
    ThirdWindow *thirdWindow = new ThirdWindow(this);
    thirdWindow->show();
}

void PathWindow::on_pushContinueButton_clicked()
{
    this->pathChose = ui->listWidget->currentRow();
    if(this->hour < 7)
    {
        this->hide();
        getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um Suspeito", QMessageBox::Ok);
}

void PathWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

void PathWindow::getScreen()
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
    SixteenthWindow *screenFourteen = new SixteenthWindow(this);
    SeventeenthWindow *screenFifteen = new SeventeenthWindow(this);

    switch (this->pathChose) {
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
        case 13: screenFourteen->show(); break;
        case 14: screenFifteen->show();  break;
        default:
            QMessageBox::information(this, "popup", "Nenhum Caminho Selecionado!!", QMessageBox::Ok);
            break;
    }
}

