#include "selectclient.h"
#include "ui_selectclient.h"
#include <QDebug>

SelectClient::SelectClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectClient)
{
    ui->setupUi(this);

    ui->manila->setCurrentIndex(0);

    ui->pickClient_pushButton->hide();
    ui->pickClient_pushButton->setEnabled(false);

    QPixmap client(":/resources/img/suitManA8.png"); //Add path
    int w = ui->client1->width();
    int h = ui->client1->height();
    ui->client1->setPixmap(client.scaled(w,h,Qt::IgnoreAspectRatio));

    connect(ui->manila, &QTabWidget::tabBarClicked, this, &SelectClient::on_manila_tabBarClicked);

}

/**
 * @brief Visually adds a new client to the list
 */
void SelectClient::addNewClient()
{

}

SelectClient::~SelectClient()
{
    delete ui;
}

void SelectClient::on_pickClient_pushButton_clicked()
{
    qDebug() << "emit signal";
    emit clientChosen(ui->manila->currentIndex());
}

/**
 * @brief Hide the select button depending if user is one the front page.
 * @param index
 */
void SelectClient::on_manila_tabBarClicked(int index)
{
    if (index > 0){
        ui->pickClient_pushButton->show();
        ui->pickClient_pushButton->setEnabled(true);
    }
    else{
        ui->pickClient_pushButton->hide();
        ui->pickClient_pushButton->setEnabled(false);
    }
}

