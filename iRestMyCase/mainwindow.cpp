#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "clienttab.h"

MainWindow::MainWindow(Model &model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->model = &model;
    ui->setupUi(this);
    ui->screens->setCurrentIndex(0);
    ui->instruction_tab->setCurrentIndex(0);

    ui->dialouge->hide();

    QPixmap desk(":/resources/img/tempDesk2A8.png");
    ui->user_desk->setPixmap(desk.scaled(ui->user_desk->width(),ui->user_desk->height(), Qt::IgnoreAspectRatio));

//    QPixmap ruleBook(":/resources/img/tempRuleBookA8.png");
//    ui->rule_book->setPixmap(ruleBook.scaled(ui->rule_book->width(),ui->rule_book->height(), Qt::KeepAspectRatio));
//    ui->rule_book->hide();

    QPixmap ruleBook(":/resources/img/tempRuleBookP2A8.png");
    ui->rules1->setPixmap(ruleBook.scaled(ui->ruleBook->width(), ui->ruleBook->height(), Qt::IgnoreAspectRatio));
    ui->closeRules_pushButton->hide();
    ui->closeRules_pushButton->setEnabled(false);
    ui->ruleBook->hide();
    ui->ruleBook->setEnabled(false);
    //ui->tab_3->setT;

    //Select Client button should be hidden on main screen
    ui->selectClient_pushButton->hide();
    ui->selectClient_pushButton->setEnabled(false);

    connect(ui->ruleBook_pushButton, &QPushButton::clicked, this, &MainWindow::ruleBookClicked);
    connect(ui->closeRules_pushButton, &QPushButton::clicked, this, &MainWindow::ruleBookClosed);

    connect(ui->start_menu, &StartMenu::restartGameSignal, this, &MainWindow::restartGame);
    connect(ui->start_menu, &StartMenu::instructionSignal, this, &MainWindow::goToInstructions);

    connect(ui->menu_pushButton, &QPushButton::clicked, this, &MainWindow::toMainMenu);
    connect(ui->instr_menu_pushButton, &QPushButton::clicked, this, &MainWindow::toMainMenu);
    connect(ui->newClient_pushButton, &QPushButton::clicked, this, &MainWindow::toClientSelection);
    connect(ui->instr_nextPage_pushButton, &QPushButton::clicked, this, &MainWindow::nextPageInstruction);

    connect(ui->question_pushButton, &QPushButton::clicked, this, &MainWindow::questionClient);

    //connect(ui->addClient_pushButton, &QPushButton::clicked, &model, &Model::getNewClient);
    connect(ui->addClient_pushButton, &QPushButton::clicked, this, &MainWindow::addNewClientSelection);

   // connect(&model, &Model::addClientToManila, ui->selectClient, &SelectClient::addNewClients);

    connect(ui->selectClient, &QTabWidget::tabBarClicked, this, &MainWindow::changeTab);

    connect(ui->selectClient_pushButton, &QPushButton::clicked, this, &MainWindow::selectClientDisplay);

}
/**
 * @brief Visually restarts the game
 */
void MainWindow::restartGame(){

    ui->client->hide();

    ui->screens->setCurrentIndex(1);
    ui->dialouge->hide();

    ui->ruleBook->hide();
    ui->ruleBook->setEnabled(false);
    ui->closeRules_pushButton->hide();
    ui->closeRules_pushButton->setEnabled(false);

    ui->ruleBook_pushButton->show();
    ui->ruleBook_pushButton->setEnabled(true);

    //Reset Everything in model
    emit resetSignal();
}
void MainWindow::goToInstructions(){
    ui->screens->setCurrentIndex(3);
}
void MainWindow::toMainMenu(){
    ui->screens->setCurrentIndex(0);
}
void MainWindow::ruleBookClicked(){

   ui->ruleBook_pushButton->hide();
   ui->ruleBook_pushButton->setEnabled(false);

  // ui->rule_book->show();
   ui->ruleBook->show();
   ui->ruleBook->setEnabled(true);

   ui->closeRules_pushButton->show();
   ui->closeRules_pushButton->setEnabled(true);
}
void MainWindow::ruleBookClosed(){

   ui->ruleBook_pushButton->show();
   ui->ruleBook_pushButton->setEnabled(true);

   //ui->rule_book->hide();
   ui->ruleBook->hide();
   ui->ruleBook->setEnabled(false);

   ui->closeRules_pushButton->hide();
   ui->closeRules_pushButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::toClientSelection()
{
   ui->screens->setCurrentIndex(2);
}


void MainWindow::questionClient()
{
   ui->dialouge->show();
   ui->dialouge->setText("Hello this is a dialouge box!");
}

/**
 * @brief Displays client image sent by the SelectClient class
 * @param index
 */
void MainWindow::selectClientDisplay(int index){
    ui->screens->setCurrentIndex(1);
    ui->client->show();
    QPixmap client = model->currentClients.at(index)->image;
    int w = ui->client->width();
    int h = ui->client->height();
    ui->client->setPixmap(client.scaled(w,h,Qt::KeepAspectRatio));
}



void MainWindow::addNewClientSelection()
{
    clientTab *newClient = new clientTab(*model->currentClients.at(0));
    //newClient.addClient(*model->currentClients.at(0));
    ui->selectClient->addTab(newClient,QIcon(QString("")), model->currentClients.at(0)->name);

}



void MainWindow::changeTab(int index)
{
    if (index > 0){
        ui->selectClient_pushButton->show();
        ui->selectClient_pushButton->setEnabled(true);
    }
    else{
        ui->selectClient_pushButton->hide();
        ui->selectClient_pushButton->setEnabled(false);
    }
}


void MainWindow::nextPageInstruction()
{
    if ((ui->instruction_tab->currentIndex()) == ui->instruction_tab->count()-1){
        ui->instruction_tab->setCurrentIndex(ui->instruction_tab->currentIndex()-1);
        ui->instr_nextPage_pushButton->setText("NEXT...");
    }
    else{
        ui->instruction_tab->setCurrentIndex(ui->instruction_tab->currentIndex()+1);

        if ((ui->instruction_tab->currentIndex()) == ui->instruction_tab->count()-1){
            ui->instr_nextPage_pushButton->setText("...BACK");
        }
    }

}


