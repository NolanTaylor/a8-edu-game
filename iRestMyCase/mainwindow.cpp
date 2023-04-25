#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
#include "clienttab.h"

MainWindow::MainWindow(Model &model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->model = &model;
    ui->setupUi(this);
    ui->screens->setCurrentIndex(0);
    ui->instruction_tab->setCurrentIndex(0);

    client_in_office = false;
    client_index = 0;
    dialogue_index = 0;

    ui->newClient_pushButton->setDisabled(false);
    ui->question_pushButton->setDisabled(true);
    ui->accept_pushButton->setDisabled(true);
    ui->reject_pushButton->setDisabled(true);
    ui->next_pushButton->setDisabled(true);

    ui->dialougeHistory->hide();
    ui->dialougeHistory->clear();

    ui->dialouge->hide();
    ui->next_pushButton->hide();
    ui->history_pushButton->hide();

    QPixmap desk(":/resources/img/tempDesk2A8.png");
    ui->user_desk->setPixmap(desk.scaled(ui->user_desk->width(),ui->user_desk->height(), Qt::IgnoreAspectRatio));

    for (int i = 0; i < this->model->clients.size(); i++)
    {
        clientTab *newClient = new clientTab(*this->model->clients.at(i));
        //newClient.addClient(*model->currentClients.at(0));
        ui->selectClient->addTab(newClient,QIcon(QString("")), this->model->clients.at(i)->name);
    }

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
    connect(ui->instr_nextPage_pushButton, &QPushButton::clicked, this, &MainWindow::nextPageInstruction);

    connect(ui->question_pushButton, &QPushButton::clicked, this, &MainWindow::questionClient);

    // connect(ui->addClient_pushButton, &QPushButton::clicked, &model, &Model::getNewClient);
    // connect(&model, &Model::addClientToManila, ui->selectClient, &SelectClient::addNewClients);

    connect(ui->selectClient, &QTabWidget::tabBarClicked, this, &MainWindow::changeTab);

    connect(ui->selectClient_pushButton, &QPushButton::clicked, this, &MainWindow::selectClientDisplay);
    connect(ui->newClient_pushButton, &QPushButton::clicked, this, &MainWindow::toSelectionScreen);

    connect(ui->accept_pushButton, &QPushButton::clicked, this, &MainWindow::acceptClient);
    connect(ui->reject_pushButton, &QPushButton::clicked, this, &MainWindow::rejectClient);
    connect(ui->next_pushButton, &QPushButton::clicked, this, &MainWindow::nextDialogue);
    connect(ui->history_pushButton, &QPushButton::clicked, this, &MainWindow::openDialougeHistory);
    connect(ui->continue_pushButton, &QPushButton::clicked, this, &MainWindow::nextRound);

    //Send a full reset to the model
    connect(this, &MainWindow::resetSignal, &model, &Model::reset);

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

void MainWindow::toMainMenu(){
    ui->screens->setCurrentIndex(0);
}
void MainWindow::toSelectionScreen()
{
    ui->screens->setCurrentIndex(2);
}
void MainWindow::goToInstructions(){
    ui->screens->setCurrentIndex(3);
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

void MainWindow::ruleBookClicked(){

   ui->ruleBook_pushButton->hide();
   ui->ruleBook_pushButton->setEnabled(false);

   ui->ruleBook->show();
   ui->ruleBook->setEnabled(true);

   ui->closeRules_pushButton->show();
   ui->closeRules_pushButton->setEnabled(true);
}
void MainWindow::ruleBookClosed(){

   ui->ruleBook_pushButton->show();
   ui->ruleBook_pushButton->setEnabled(true);

   ui->ruleBook->hide();
   ui->ruleBook->setEnabled(false);

   ui->closeRules_pushButton->hide();
   ui->closeRules_pushButton->setEnabled(false);
}

void MainWindow::nextClient()
{
    dialogue_index = 0;
    client_index = ui->selectClient->currentIndex()-1;

    client_in_office = true;
    ui->newClient_pushButton->setDisabled(true);
    ui->question_pushButton->setDisabled(false);
    ui->next_pushButton->setDisabled(false);
    ui->accept_pushButton->setDisabled(false);
    ui->reject_pushButton->setDisabled(false);

    QPixmap client_img(model->clients[client_index]->image);

    int w = ui->client->width();
    int h = ui->client->height();
    ui->client->setPixmap(client_img.scaled(w,h,Qt::KeepAspectRatio));
    ui->client->show();
    ui->next_pushButton->show();
    ui->history_pushButton->show();

    ui->dialouge->setText(model->clients[client_index]->dialogue[dialogue_index]);
    ui->dialougeHistory->append("\n" + ui->dialouge->text());
    ui->dialouge->show();
}

void MainWindow::questionClient()
{
   ui->dialouge->setText(model->clients[client_index]->dialogue_q[0]);
   ui->dialougeHistory->append("\n" + ui->dialouge->text());

}

void MainWindow::checkMoneyAndReputation(){
   QString currentMoney = "Money: " + QString::number(model->getMoney());
   ui->money->setText(currentMoney);
   if(model->getMoney() < 0){
        //Implement timer that slowly fades into the next screen
        ui->screens->setCurrentIndex(4);
   }
   double reputation = model->getReputation();
   if(reputation >= 0.59 && reputation < 1.611){
        ui->reputation->setText("Reputation status:    mediocre");
   }else if(reputation >= 0.206 && reputation < 0.59){
        ui->reputation->setText("Reputation status:    bad deeds");
   }else if(reputation >= 1.611 && reputation < 4.177){
        ui->reputation->setText("Reputation status:    small famous");
   }else if(reputation >= 0.042 && reputation < 0.206){
        ui->reputation->setText("Reputation status:    notorious");
   }else if(reputation >= 4.177 && reputation < 17.45){
        ui->reputation->setText("Reputation status:    outstanding");
   }else if(reputation < 0.042){
        ui->reputation->setText("Reputation status:    everyone spurned");
   }else if (reputation >= 17.45){
        ui->reputation->setText("Reputation status:    everyone knows");
   }else{
        ui->reputation->setText("Error");
   }
}

void MainWindow::acceptClient()
{
    ui->dialouge->setText(model->clients[client_index]->dialogue_a[0]);

    // implement money/reputation
    int commission = model->clients[client_index]->payment * model->getReputation();
    if(true){ // When the user judges correctly.
        model->addMoney(commission);
        model->changeReputation(model->getReputation()*1.1);
    }else{ // When the user judges incorrectly
        model->deleteMoney(commission);
        model->changeReputation(model->getReputation()*0.9);
    }
    checkMoneyAndReputation();

}

void MainWindow::rejectClient()
{
    ui->dialouge->setText(model->clients[client_index]->dialogue_r[0]);

    // implement money/reputation
    int commission = model->clients[client_index]->payment * model->getReputation();
    if(false){ // When the user judges correctly.
        model->addMoney(commission);
        model->changeReputation(model->getReputation()*1.1);
    }else{ // When the user judges incorrectly
        model->deleteMoney(commission);
        model->changeReputation(model->getReputation()*0.9);
    }
    checkMoneyAndReputation();

}

void MainWindow::replaceClient()
{

    ui->newClient_pushButton->setDisabled(false);
    ui->question_pushButton->setDisabled(true);
    ui->accept_pushButton->setDisabled(true);
    ui->reject_pushButton->setDisabled(true);

    model->clients.removeAt(client_index);

    ui->selectClient->removeTab(client_index+1);
    ui->client->clear();
    changeTab(ui->selectClient->currentIndex());
    // No current clients
    // client_index = -1;

    if (model->unusedClients.empty())
    {
        return;
    }

    clientTab *newClient = new clientTab(*model->unusedClients.at(0));
    //newClient.addClient(*model->currentClients.at(0));
    ui->selectClient->addTab(newClient,QIcon(QString("")), model->unusedClients.at(0)->name);
    model->clients.append(model->unusedClients[0]);
    model->unusedClients.removeAt(0);
}

void MainWindow::displayOutcome()
{

}

void MainWindow::openDialougeHistory()
{
    //Hide drop down
    if (ui->dialougeHistory->isVisible()){
        ui->dialougeHistory->hide();
        ui->history_pushButton->setText("V");
    }
    else{
        ui->dialougeHistory->show();
        ui->history_pushButton->setText("^");
    }
}

void MainWindow::nextDialogue()
{
    if (dialogue_index + 2 > model->clients[client_index]->dialogue.size())
    {
        return;
    }

    dialogue_index++;
    ui->dialouge->setText(model->clients[client_index]->dialogue[dialogue_index]);
}

void MainWindow::clientChosen(int ClientID)
{
    qDebug() << "client chosen";
}

/**
 * @brief Displays client image sent by the SelectClient class
 * @param index
 */
void MainWindow::selectClientDisplay(){
    ui->screens->setCurrentIndex(1);

    client_index = ui->selectClient->currentIndex()-1;

    ui->client->show();
    QPixmap client = model->clients.at(client_index)->image;
    int w = ui->client->width();
    int h = ui->client->height();
    ui->client->setPixmap(client.scaled(w,h,Qt::KeepAspectRatio));


    nextClient();
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

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::nextRound()
{

    ui->screens->setCurrentIndex(1);

    replaceClient();
    ui->newClient_pushButton->setDisabled(false);
    ui->question_pushButton->setDisabled(true);
    ui->accept_pushButton->setDisabled(true);
    ui->reject_pushButton->setDisabled(true);
    ui->next_pushButton->setDisabled(true);

    ui->dialouge->hide();
    ui->dialouge->clear();
    ui->dialougeHistory->hide();
    ui->dialougeHistory->clear();

    ui->next_pushButton->hide();
    ui->history_pushButton->hide();



    //Reset dialouge

}


void MainWindow::on_continue_pushButton_clicked()
{
    model->restart();
    QString currentMoney = "Money: " + QString::number(model->getMoney());
    ui->money->setText(currentMoney);
    ui->reputation->setText("");
}

