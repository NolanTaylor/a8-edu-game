#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap client(":/resources/img/suitManA8.png");//Add path
    int w = ui->client->width();
    int h = ui->client->height();
    ui->client->setPixmap(client.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap desk(":/resources/img/tempDesk2A8.png");
    ui->user_desk->setPixmap(desk.scaled(ui->user_desk->width(),ui->user_desk->height(), Qt::IgnoreAspectRatio));

    QPixmap ruleBook(":/resources/img/tempRuleBookA8.png");
    ui->rule_book->setPixmap(ruleBook.scaled(ui->rule_book->width(),ui->rule_book->height(), Qt::KeepAspectRatio));
    ui->rule_book->hide();
    ui->closeRules_pushButton->hide();
    ui->closeRules_pushButton->setEnabled(false);

    connect(ui->ruleBook_pushButton, &QPushButton::clicked, this, &MainWindow::ruleBookClicked);
    connect(ui->closeRules_pushButton, &QPushButton::clicked, this, &MainWindow::ruleBookClosed);

}
void MainWindow::ruleBookClicked(){

   ui->ruleBook_pushButton->hide();
   ui->ruleBook_pushButton->setEnabled(false);

   ui->rule_book->show();

   ui->closeRules_pushButton->show();
   ui->closeRules_pushButton->setEnabled(true);
}
void MainWindow::ruleBookClosed(){

   ui->ruleBook_pushButton->show();
   ui->ruleBook_pushButton->setEnabled(true);

   ui->rule_book->hide();

   ui->closeRules_pushButton->hide();
   ui->closeRules_pushButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

