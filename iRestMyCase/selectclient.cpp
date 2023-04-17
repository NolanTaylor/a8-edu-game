#include "selectclient.h"
#include "ui_selectclient.h"

SelectClient::SelectClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectClient)
{
    ui->setupUi(this);
}

SelectClient::~SelectClient()
{
    delete ui;
}
