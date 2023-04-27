#include "clienttab.h"
#include "ui_clienttab.h"


clientTab::clientTab(Client &client, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientTab)
{
    ui->setupUi(this);

    QPixmap client_image(client.image);
    ui->client_image->setPixmap(client_image.scaled(200,200,Qt::KeepAspectRatio));

    ui->textBrowser->setText(client.name + "\nDate of Birth: 1977\nPayment: " + QString::number(client.payment));

}
void clientTab::addClient(Client &client){
   QPixmap client_image(client.image);
   ui->client_image->setPixmap(client_image);

   ui->textBrowser->setText(client.name + "\nDate of Birth: 1977\nPayment: " + QString::number(client.payment));
}


clientTab::~clientTab()
{
    delete ui;
}
