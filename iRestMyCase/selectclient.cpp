#include "selectclient.h"
#include "ui_selectclient.h"

SelectClient::SelectClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectClient)
{
    ui->setupUi(this);

    QPixmap client(":/resources/img/suitManA8.png");//Add path
    int w = ui->client1->width();
    int h = ui->client1->height();
    ui->client1->setPixmap(client.scaled(w,h,Qt::IgnoreAspectRatio));
}

/**
 * @brief Visually adds a new client to the list
 */
void SelectClient::addNewClient(){

}
SelectClient::~SelectClient()
{
    delete ui;
}
