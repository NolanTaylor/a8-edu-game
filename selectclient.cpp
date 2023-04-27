#include "selectclient.h"
#include "ui_selectclient.h"

SelectClient::SelectClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectClient)
{
    ui->setupUi(this);

    ui->manila->setCurrentIndex(0);

    ui->pickClient_pushButton->hide();
    ui->pickClient_pushButton->setEnabled(false);

    QPixmap client(":/resources/img/suitManA8.png");//Add path
    int w = ui->client1->width();
    int h = ui->client1->height();
    ui->client1->setPixmap(client.scaled(w,h,Qt::IgnoreAspectRatio));

    connect(ui->manila, &QTabWidget::tabBarClicked, this, &SelectClient::tabBarClicked);
    connect(ui->pickClient_pushButton, &QPushButton::clicked, this, &SelectClient::pickClient);

}

/**
 * @brief Visually adds a new client to the list
 */
void SelectClient::addNewClients(Client &client){
    //Add a new tab
    ui->manila->addTab(new QWidget, client.name);
    int w = ui->client1->width();
    int h = ui->client1->height();
    ui->client1->setPixmap(client.image.scaled(w,h,Qt::IgnoreAspectRatio));
}


void SelectClient::pickClient()
{

    emit clientChosen(ui->manila->currentIndex()-1); //Front page is 0
}

/**
 * @brief Hide the select button depending if user is one the front page.
 * @param index
 */
void SelectClient::tabBarClicked(int index)
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
SelectClient::~SelectClient()
{
    delete ui;
}
