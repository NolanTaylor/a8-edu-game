#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>
#include "clienttab.h"
#include <QVector2D>

MainWindow::MainWindow(Model &model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //Make the world

    b2Vec2 gravity(0.0f, -9.81);
    mWorld = std::make_unique<b2World>(gravity);

    //Create physics objects
    //Make the ground...will stop the boxes
    b2BodyDef groundBodyDef;
    groundBodyDef.position.Set(0.0f, -10.0f); //in meters
    //Allocates body in memory
    b2Body* groundBody = mWorld->CreateBody(&groundBodyDef);
    //Make the ground fixture
    b2PolygonShape groundBox;
    groundBox.SetAsBox(50.0f, 10.0f);//From center, double x & y
    groundBody->CreateFixture(&groundBox, 0.0f); //Density = 0; will never move when collided

    //create some boxes
    Box newBox;
    QVector2D position(0.0f, 14.0f);
    QVector2D direction(15.0f, 15.0f);

    newBox.init(mWorld.get(), position, direction);

    this->model = &model;
    ui->setupUi(this);
    ui->screens->setCurrentIndex(0);
    ui->instruction_tab->setCurrentIndex(0);

    client_in_office = false;//
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

    QPixmap utahCode(":/resources/img/utah_code.jpg");
    ui->front_page->setPixmap(utahCode.scaled(ui->front_page->width(),ui->front_page->height(), Qt::KeepAspectRatio));
    ui->front_page->setAlignment(Qt::AlignCenter);

    //QPixmap pageTurn(":/resources/img/bent_page.png");
    //ui->page_turner->setPixmap(utahCode.scaled(ui->page_turner->width(),ui->page_turner->height(), Qt::KeepAspectRatio));
   // ui->page_turner->setAlignment(Qt::AlignCenter);



    for (int i = 0; i < this->model->clients.size(); i++)
    {
        clientTab *newClient = new clientTab(*this->model->clients.at(i));
        //newClient.addClient(*model->currentClients.at(0));
        ui->selectClient->addTab(newClient,QIcon(QString("")), this->model->clients.at(i)->name);
    }

//     QPixmap ruleBook(":/resources/img/tempRuleBookA8.png");
//     ui->rule_book->setPixmap(ruleBook.scaled(ui->rule_book->width(),ui->rule_book->height(), Qt::KeepAspectRatio));
//     ui->rule_book->hide();

    QPixmap ruleBook(":/resources/img/tempRuleBookP2A8.png");
    //ui->rules1->setPixmap(ruleBook.scaled(ui->ruleBook->width(), ui->ruleBook->height(), Qt::IgnoreAspectRatio));
    ui->closeRules_pushButton->hide();
    ui->closeRules_pushButton->setEnabled(false);
    ui->ruleBook->hide();
    ui->ruleBook->setEnabled(false);

    ui->page_turner->hide();
    ui->page_turner->setEnabled(false);
    ui->page_turner_2->hide();
    ui->page_turner_2->setEnabled(false);
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
        
    //Connects all the buttons to the play sound
    connect(ui->newClient_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->accept_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->reject_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->selectClient_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->next_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->continue_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->instr_nextPage_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->menu_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);
    connect(ui->question_pushButton, &QPushButton::clicked, this, &MainWindow::playClickSound);

    //hitbox implementation
//    connect(ui->ruleBook_hitBox, &QPushButton::clicked, this, &MainWindow::ruleBookHitBox);
//    connect(ui->ruleBook_hitBox_2, &QPushButton::clicked, this, &MainWindow::ruleBookHitBox);

//    connect(ui->dialouge_hitBox, &QPushButton::clicked, this, &MainWindow::on_dialouge_hitBox_clicked);
//    connect(ui->dialouge_hitBox_2, &QPushButton::clicked, this, &MainWindow::on_dialouge_hitBox_clicked);
    connect(ui->ruleBook, &QTabWidget::currentChanged, this, &MainWindow::changedTabs);

    connect(ui->title4Button, &QPushButton::clicked, this, &MainWindow::title4Clicked);
    connect(ui->title6Button, &QPushButton::clicked, this, &MainWindow::title6Clicked);
    connect(ui->title7Button, &QPushButton::clicked, this, &MainWindow::title7Clicked);
    connect(ui->title8Button, &QPushButton::clicked, this, &MainWindow::title8Clicked);
    connect(ui->title9Button, &QPushButton::clicked, this, &MainWindow::title9Clicked);
    connect(ui->title10Button, &QPushButton::clicked, this, &MainWindow::title10Clicked);
    connect(ui->title11Button, &QPushButton::clicked, this, &MainWindow::title11Clicked);
    connect(ui->title12Button, &QPushButton::clicked, this, &MainWindow::title12Clicked);

    connect(ui->page_turner, &QPushButton::clicked,this,&MainWindow::turnPage);
    connect(ui->page_turner_2, &QPushButton::clicked,this,&MainWindow::backPage);
    connect(ui->titles, &QStackedWidget::currentChanged, this, &MainWindow::titlesScreenChanged);




}

void MainWindow::playClickSound()
{
    QSoundEffect sound;
    QUrl click("qrc:/resources/img/clicknoise.wav");
    sound.setSource(click);
    sound.setLoopCount(1);
    sound.setVolume(1.0f);
    sound.play();
    QEventLoop loop;
    loop.exec();
    loop.quit();
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

   changedTabs(ui->ruleBook->currentIndex());

}
void MainWindow::ruleBookClosed(){

   ui->ruleBook_pushButton->show();
   ui->ruleBook_pushButton->setEnabled(true);

   ui->ruleBook->hide();
   ui->ruleBook->setEnabled(false);

   ui->closeRules_pushButton->hide();
   ui->closeRules_pushButton->setEnabled(false);

   ui->page_turner->hide();
   ui->page_turner->setEnabled(false);
   ui->page_turner_2->hide();
   ui->page_turner_2->setEnabled(false);
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
    ui->client->setPixmap(client_img. scaled(w,h,Qt::KeepAspectRatio));
    ui->user_desk->hide();
    ui->client->show();
    ui->next_pushButton->show();
    ui->history_pushButton->show();

    ui->dialouge->setText(model->clients[client_index]->dialogue[dialogue_index]);
    ui->dialougeHistory->append("\n" + ui->dialouge->toPlainText());
    ui->dialouge->show();
}

void MainWindow::questionClient()
{
   ui->dialouge->setText(model->clients[client_index]->dialogue_q[0]);
   ui->dialougeHistory->append("\n" + ui->dialouge->toPlainText());

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



//void MainWindow::ruleBookHitBox()
//{
//    ui->ruleBook->raise();
//}


//void MainWindow::on_dialouge_hitBox_clicked()
//{
//    ui->dialouge->raise();
//}


void MainWindow::title4Clicked()
{
   ui->ruleBook->setCurrentIndex(2);
   ui->titles->setCurrentIndex(0);
}


void MainWindow::title6Clicked()
{
    ui->ruleBook->setCurrentIndex(2);
    ui->titles->setCurrentIndex(1);
}

void MainWindow::title7Clicked()
{
    ui->ruleBook->setCurrentIndex(2);
    ui->titles->setCurrentIndex(2);
}

void MainWindow::title8Clicked()
{
    ui->ruleBook->setCurrentIndex(2);
    ui->titles->setCurrentIndex(3);
}

void MainWindow::title9Clicked()
{
    ui->ruleBook->setCurrentIndex(2);
    ui->titles->setCurrentIndex(4);
}
void MainWindow::title10Clicked()
{
    ui->ruleBook->setCurrentIndex(2);
    ui->titles->setCurrentIndex(4);
}
void MainWindow::title11Clicked()
{
    ui->ruleBook->setCurrentIndex(2);
    ui->titles->setCurrentIndex(5);
}

void MainWindow::title12Clicked()
{
    ui->ruleBook->setCurrentIndex(2);
    ui->titles->setCurrentIndex(5);
}
void MainWindow::turnPage()
{
    int nextIndex = ui->titles->currentIndex() + 1;
    if( nextIndex < ui->titles->count()){
           ui->titles->setCurrentIndex(nextIndex);

    }//Dont show the page turn if their are no other pages to turn to
}



void MainWindow::backPage()
{
    int nextIndex = ui->titles->currentIndex() - 1;
    if( nextIndex >= 0)
           ui->titles->setCurrentIndex(nextIndex);

}


void MainWindow::changedTabs(int index)
{
    if (index == 2){
        ui->page_turner->show();
        ui->page_turner->setEnabled(true);
        ui->page_turner_2->show();
        ui->page_turner_2->setEnabled(true);
    }
    else
    {
        ui->page_turner->hide();
        ui->page_turner->setEnabled(false);
        ui->page_turner_2->hide();
        ui->page_turner_2->setEnabled(false);
    }
}


void MainWindow::titlesScreenChanged(int arg1)
{
    if (arg1 == ui->titles->count()-1){
        ui->page_turner->hide();
        ui->page_turner->setEnabled(false);
    }
    else{
        ui->page_turner->show();
        ui->page_turner->setEnabled(true);
    }

    if (arg1 == 0){
        ui->page_turner_2->hide();
        ui->page_turner_2->setEnabled(false);
    }
    else{
        ui->page_turner_2->show();
        ui->page_turner_2->setEnabled(true);
    }
}

