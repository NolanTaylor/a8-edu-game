#include "model.h"

Model::Model(QObject *parent)
    : QObject{parent}
{
    clients = QVector<Client>();

    fillClients();
}

void Model::fillClients()
{
    clients.push_back(Client());
    clients[0].name = "Joe Biden";
    clients[0].image = QPixmap(":/resources/img/client1.png");
}
