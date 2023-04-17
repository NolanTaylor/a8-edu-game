#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dialouge->hide();

    QPixmap client(":/resources/img/suitManA8.png");//Add path
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


void MainWindow::toClientSelection()
{
   ui->screens->setCurrentIndex(2);
}


void MainWindow::questionClient()
{
   ui->dialouge->show();
   ui->dialouge->setText("Hello this is a dialouge box!");
}

