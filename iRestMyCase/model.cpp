#include "model.h"
#include <QPixmap>
#include "client.h"

Model::Model(QObject *parent)
    : QObject{parent}
{
    clients = QVector<Client*>();
    money = 0;
    reputation = 0;

    // currentClients.push_back(std::make_unique<Client>()); (rachel mode)

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

int Model::getMoney(){
    return this->money;
}

void Model::addMoney(int value){
    money += value;
}

void Model::deleteMoney(int value){
    money -= value;
    if(money <= 0){
        //game over
    }
}

void Model::addReputation(double value){
    reputation += value;
//    if(){
//        // Check if the reputation has reached the requirements of the next stage, and if so, promote
//    }
}

void Model::deleteReputation(double value){
    reputation -= value;
    if(reputation <= 0){
        //Check if there is a upper level, if not game over
    }
}
