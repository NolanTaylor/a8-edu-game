#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->screens->setCurrentIndex(0);

    client_in_office = false;
    client_index = 0;
    dialogue_index = 0;

    ui->newClient_pushButton->setDisabled(false);
    ui->accept_pushButton->setDisabled(true);
    ui->reject_pushButton->setDisabled(true);

    ui->dialouge->hide();

    QPixmap client(":/resources/img/suitManA8.png"); //Add path
    int w = ui->client->width();
    int h = ui->client->height();
    ui->client->setPixmap(client.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap desk(":/resources/img/tempDesk2A8.png");
    ui->user_desk->setPixmap(desk.scaled(ui->user_desk->width(),ui->user_desk->height(), Qt::IgnoreAspectRatio));

//    QPixmap ruleBook(":/resources/img/tempRuleBookA8.png");
//    ui->rule_book->setPixmap(ruleBook.scaled(ui->rule_book->width(),ui->rule_book->height(), Qt::KeepAspectRatio));
//    ui->rule_book->hide();

    QPixmap ruleBook(":/resources/img/tempRuleBookP2A8.png");
    ui->rules1->setPixmap(ruleBook.scaled(ui->tabWidget->width(), ui->tabWidget->height(), Qt::IgnoreAspectRatio));
    ui->closeRules_pushButton->hide();
    ui->closeRules_pushButton->setEnabled(false);
    ui->tabWidget->hide();
    ui->tabWidget->setEnabled(false);
    //ui->tab_3->setT;

    connect(ui->ruleBook_pushButton, &QPushButton::clicked, this, &MainWindow::ruleBookClicked);
    connect(ui->closeRules_pushButton, &QPushButton::clicked, this, &MainWindow::ruleBookClosed);

    connect(ui->start_menu, &StartMenu::restartGameSignal, this, &MainWindow::restartGame);
    connect(ui->menu_pushButton, &QPushButton::clicked, this, &MainWindow::toMainMenu);
    connect(ui->newClient_pushButton, &QPushButton::clicked, this, &MainWindow::toClientSelection);

    connect(ui->question_pushButton, &QPushButton::clicked, this, &MainWindow::questionClient);
    connect(ui->accept_pushButton, &QPushButton::clicked, this, &MainWindow::acceptClient);
    connect(ui->reject_pushButton, &QPushButton::clicked, this, &MainWindow::rejectClient);
    connect(ui->next_pushButton, &QPushButton::clicked, this, &MainWindow::nextDialogue);
}
/**
 * @brief Visually restarts the game
 */
void MainWindow::restartGame(){

    ui->client->hide();

    ui->screens->setCurrentIndex(1);
    ui->dialouge->hide();

    ui->tabWidget->hide();
    ui->tabWidget->setEnabled(false);
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
void MainWindow::ruleBookClicked(){

   ui->ruleBook_pushButton->hide();
   ui->ruleBook_pushButton->setEnabled(false);

  // ui->rule_book->show();
   ui->tabWidget->show();
   ui->tabWidget->setEnabled(true);

   ui->closeRules_pushButton->show();
   ui->closeRules_pushButton->setEnabled(true);
}
void MainWindow::ruleBookClosed(){

   ui->ruleBook_pushButton->show();
   ui->ruleBook_pushButton->setEnabled(true);

   //ui->rule_book->hide();
   ui->tabWidget->hide();
   ui->tabWidget->setEnabled(false);

   ui->closeRules_pushButton->hide();
   ui->closeRules_pushButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// goes to next client for now
void MainWindow::toClientSelection()
{
    qDebug() << "next client";

    client_in_office = true;
    ui->newClient_pushButton->setDisabled(true);
    ui->accept_pushButton->setDisabled(false);
    ui->reject_pushButton->setDisabled(false);

    QPixmap client_img(m.clients[client_index]->image);

    int w = ui->client->width();
    int h = ui->client->height();
    ui->client->setPixmap(client_img.scaled(w,h,Qt::KeepAspectRatio));
    ui->client->show();

    qDebug() << m.clients[1]->dialogue[0];
    qDebug() << m.clients[0]->image;

    ui->dialouge->setText(m.clients[client_index]->dialogue[dialogue_index]);
    ui->dialouge->show();
}


void MainWindow::questionClient()
{
   ui->dialouge->setText(m.clients[client_index]->dialogue_q[0]);
}

void MainWindow::acceptClient()
{
    ui->dialouge->setText(m.clients[client_index]->dialogue_a[0]);

    ui->newClient_pushButton->setDisabled(false);
    ui->accept_pushButton->setDisabled(true);
    ui->reject_pushButton->setDisabled(true);

    // implement money/reputation
}

void MainWindow::rejectClient()
{
    ui->dialouge->setText(m.clients[client_index]->dialogue_r[0]);

    ui->newClient_pushButton->setDisabled(false);
    ui->accept_pushButton->setDisabled(true);
    ui->reject_pushButton->setDisabled(true);

    // implement money/reputation
}

void MainWindow::nextDialogue()
{
    if (dialogue_index + 2 > m.clients[client_index]->dialogue.size())
    {
        return;
    }

    dialogue_index++;
    ui->dialouge->setText(m.clients[client_index]->dialogue[dialogue_index]);
}

void MainWindow::clientChosen(int ClientID)
{
    qDebug() << "client chosen";
}

/**
 * @brief Displays client image sent by the SelectClient class
 * @param index
 */
void MainWindow::selectClientDisplay(int index)
{

}

