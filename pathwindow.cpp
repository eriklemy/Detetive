#include "headers/pathwindow.h"
#include "ui/ui_pathwindow.h"

#include "headers.h"

#include <QPixmap>
#include <QMessageBox>
#include <QListWidget>

PathWindow::PathWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PathWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/Images/TelaPath.jpg");
    ui->label->setPixmap(pix.scaled(1366, 768, Qt::KeepAspectRatioByExpanding));

    ui->textSus->viewport()->setAutoFillBackground(false);
    ui->listWidget->viewport()->setAutoFillBackground(false);
    ui->textLugar->viewport()->setAutoFillBackground(false);
    ui->listWidget->setStyleSheet("border: solid 20px grey;  background-color: rgba(33, 24, 0, 79); color:rgb(0,255,0)");

    listOfSuspects.append("None");
    listOfSuspects.append("Ladino");
    listOfSuspects.append("Bardo");
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

void PathWindow::getScreen()
{
    ForthWindow *praca = new ForthWindow(this);
    FifthWindow *mercado = new FifthWindow(this);
    SixthWindow *estalagem = new SixthWindow(this);
    SeventhWindow *corteRei = new SeventhWindow(this);
    EighthWindow *enfermagem = new EighthWindow(this);
    NinthWindow *casaDuque = new NinthWindow(this);
    TenthWindow *biblioteca = new TenthWindow(this);
    EleventhWindow *taverna = new EleventhWindow(this);
    TwelfthWindow *entradaCapital = new TwelfthWindow(this);
    ThirteenthWindow *bairro = new ThirteenthWindow(this);
    FourteenthWindow *parteBaixa = new FourteenthWindow(this);
    FifteenthWindow *vitoria = new FifteenthWindow(this);

    if(ui->comboBox_sus->currentText() == "None")
    {
        switch (pathChose) {
            case 0:  praca->show();          break;
            case 1:  mercado->show();        break;
            case 2:  estalagem->show();      break;
            case 3:  corteRei->show();       break;
            case 4:  enfermagem->show();     break;
            case 5:  casaDuque->show();      break;
            case 6:  biblioteca->show();     break;
            case 7:  taverna->show();        break;
            case 8:  entradaCapital->show(); break;
            case 9:  bairro->show();         break;
            case 10: parteBaixa->show();     break;
            default:  ;
        }
    }
    else if(ui->comboBox_sus->currentText() != "Bardo")
    {
        QMessageBox::information(this, "popup",
                                 "O capitão sentenciou o suspeito errado e após encontra-lo, ele não estava com a obra de arte do dragão. Fazendo assim com que se inicie o maior massacre da história.", QMessageBox::Ok);
        on_pushInicioButton_clicked();
    }
    else vitoria->show();
}

void PathWindow::on_pushOkButton_clicked()
{
    if(this->hour < 7)
    {
        this->hide();
        this->getScreen();
    }
    else QMessageBox::information(this, "popup", "Voce precisa escolher um Suspeito", QMessageBox::Ok);
}

void PathWindow::on_pushInicioButton_clicked()
{
    hide();
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
}

void PathWindow::on_listWidget_currentRowChanged(int currentRow)
{
    pathChose = currentRow;
}

