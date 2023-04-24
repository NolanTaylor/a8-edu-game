#include "model.h"
#include <QPixmap>
#include "client.h"

Model::Model(QObject *parent)
    : QObject{parent}
{
    clients = QVector<Client*>();

    // currentClients.push_back(std::make_unique<Client>()); (rachel mode)

    fillClients();
}

void Model::fillClients()
{
    Client *client0 = new Client;
    clients.push_back(client0);
    clients[0]->name = "Steve 'Warcrime' Barkley";
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
    clients[1]->dialogue_q.push_back("Zǎo shang hǎo zhōng guó! Xiàn zài wǒ yǒu bing\nchilling. Wǒ hěn xǐ huān bing chilling");
    clients[1]->dialogue_a.push_back("Zǎo shang hǎo zhōng guó! Xiàn zài wǒ yǒu bing chilling. Wǒ hěn xǐ huān bing chilling");
    clients[1]->dialogue_r.push_back("Zhǔn bèi. Yī, èr, sān");
}

void Model::fillUnusedClients()
{
    Client *client0 = new Client;
    unusedClients.push_back(client0);
    unusedClients[0]->name = "Joe Biden";
    unusedClients[0]->image = ":/resources/img/client1.png";
    unusedClients[0]->dialogue.push_back("You've done well, but up until now I've only\nbeen using a mere 10% of my power.");
    unusedClients[0]->dialogue.push_back("Now get ready for my B-Biden BLAST!!");
    unusedClients[0]->dialogue_q.push_back("Chocolate Chocolate Chip");
    unusedClients[0]->dialogue_a.push_back("");
    unusedClients[0]->dialogue_r.push_back("");

    Client *client1 = new Client;
    unusedClients.push_back(client1);
    unusedClients[1]->name = "Xi Jinping";
    unusedClients[1]->image = ":/resources/img/client1.png";
    unusedClients[1]->dialogue.push_back("Nothing happened in Tiananmen Square on June 4th\n1989.");
    unusedClients[1]->dialogue.push_back("Those who say otherwise are spreading fake news.\nPlease help me shut down all media relating\nto Tiananmen Square.");
    unusedClients[1]->dialogue_q.push_back("");
    unusedClients[1]->dialogue_a.push_back("");
    unusedClients[1]->dialogue_r.push_back("");
}

void Model::reset()
{
    //Reset the pool
    clients.clear();
    unusedClients.clear();

    fillUnusedClients();
    fillClients();
}
