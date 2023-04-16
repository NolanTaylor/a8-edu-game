#include "pickclients.h"
#include "ui_pickclients.h"

PickClients::PickClients(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PickClients)
{
    ui->setupUi(this);
}

PickClients::~PickClients()
{
    delete ui;
}
