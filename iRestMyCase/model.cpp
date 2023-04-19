#include "model.h"

Model::Model(QObject *parent)
    : QObject{parent}
{
    clients = QVector<Client*>();

    fillClients();
}

void Model::fillClients()
{
    Client *client0 = new Client;
    clients.push_back(client0);
    clients[0]->name = "Joe Biden";
    clients[0]->image = ":/resources/img/client1.png";
    clients[0]->dialogue.push_back("i drafted 12yo children into the armenian genocide\nin 1916, but it was an accident i swear! please help\nme file a court case against NATO");
    clients[0]->dialogue.push_back("geneva conventions, schmeneva conventions. please\nsir think of all the money we'll make!");
    clients[0]->dialogue_q.push_back("like i said sir, it was an accident, an honest\nmistake. anybody would have done the same in my\nsituation.");
    clients[0]->dialogue_a.push_back("i promise sir, you won't regret this!");
    clients[0]->dialogue_r.push_back("you're making a huge mistake!");

    Client *client1 = new Client;
    clients.push_back(client1);
    clients[1]->name = "Zhong Xina";
    clients[1]->image = ":/resources/img/client2.png";
    clients[1]->dialogue.push_back("bing chilling");
}
