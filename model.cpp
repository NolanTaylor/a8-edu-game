#include "model.h"
#include <QPixmap>
#include "client.h"
#include <QTimer>

Model::Model(QObject *parent)
    : QObject{parent}
{
    clients = QVector<Client*>();
    money = 0;
    reputation = 1.00;
    // currentClients.push_back(std::make_unique<Client>()); (rachel mode)

    fillClients();

    //Adding a timer
    // connect(timer, &QTimer::timeout, this, &Model::characterAnimationOnTick);

}

void Model::fillClients()
{
    Client *client0 = new Client;
    clients.push_back(client0);

    clients[0]->name = "Carl Ford";
    clients[0]->image = ":/resources/img/carwithgolfball.png";
    clients[0]->dialogue.push_back("Last year this golf ball here hit my windshield and has been there ever since!");
    clients[0]->dialogue.push_back("And to top it all off he's not even paying rent");
    clients[0]->viabililty = false;
    clients[0]->explanationAccept = "Lets take a quick peek at section 13.24.050 and \nhow soon you need to apply for reimbursement";
    clients[0]->explanationReject = "Yep! According to Section 13.24.050 for No Fault Golf Ball Claims it needs to be filed in 90 days.";

    Client *client1 = new Client;
    clients.push_back(client1);
    clients[1]->name = "Po Driver";
    clients[1]->image = ":/resources/img/client1.png";
    clients[1]->dialogue.push_back("I was driving to work on Monday morning and got rear-ended by a guy who said I was going too slow");
    clients[1]->dialogue.push_back("I was going 20 mph in a 35 mph and so were all the other cars.");
    clients[1]->viabililty = true;
    clients[1]->explanationAccept = "Congrats! Looking at Sections 11.16.020 and 11.16.030 it is legal and at times required to slow down below the speed limit!";
    clients[1]->explanationReject = "You suck! Lets look at Sections 11.16.020 and 11.16.030 and see how \nat times it is allowed to slow down for safety and school zones";
}

void Model::fillUnusedClients()
{
    Client *client2 = new Client;
    unusedClients.push_back(client2);
    unusedClients[0]->name = "Jawn Lohnson";
    unusedClients[0]->image = ":/resources/img/carwithgolfball.png";
    unusedClients[0]->dialogue.push_back("The stupid neighbor got out of the house and tore me up!");
    unusedClients[0]->dialogue.push_back("He said he was looking for his tennis ball that got lost but I don't believe him");
    unusedClients[0]->dialogue.push_back("This is blatant assault and reckless conduct on the property of another!");
    unusedClients[0]->viabililty = true;
    unusedClients[0]->explanationAccept = "That's correct! According to Section 8.06.030 a trespassing animal is liable for all the damages";
    unusedClients[0]->explanationReject = "Unfortunately that was the wrong choice! Stupid! \nAccording to Section 8.06.030 a trespassing animal is liable for all the damages";

    Client *client3 = new Client;
    unusedClients.push_back(client3);
    unusedClients[1]->name = "Garfield Lasagna";
    unusedClients[1]->image = ":/resources/img/carwithgolfball.png";
    unusedClients[1]->dialogue.push_back("I hate orange cats! All of them");
    unusedClients[1]->dialogue.push_back("lasagna");
    unusedClients[1]->dialogue.push_back("I see that cat walking around all the time this is a clear case of a public nuissance animal!");
    unusedClients[1]->dialogue.push_back("meow");
    unusedClients[1]->dialogue.push_back("Please help me sue all orange cats!");
    unusedClients[1]->viabililty = false;
    unusedClients[1]->explanationAccept = "Hmmmmm... that's not quite right bud! Not liking orange cats and seeing them does not mean it is a nuisance (but i agree) \nTake a look at Section 8.06.010";
    unusedClients[1]->explanationReject = "That's right! There is no case there because the orange cat walking around does not make it a nuisance.\nThis checks out with Section 8.06.010";

//    Client *client4 = new Client;
//    unusedClients.push_back(client4);
//    unusedClients[4]->name = "Spin 'Apache Attack Helicopter' Jim";
//    unusedClients[4]->image = ":/resources/img/carwithgolfball.png";
//    unusedClients[4]->dialogue.push_back("I was minding me own business in the park, spinning around like a uhh..");
//    unusedClients[4]->dialogue.push_back("Anyways its legal to spin around! Whats the big idea!");
//    unusedClients[4]->dialogue.push_back("It's not my fault that guy was in the way when i was going mach 6 spinning at 4000 rpm");
//    unusedClients[4]->dialogue.push_back("Its not my fault so help me not get sued!");
//    unusedClients[4]->viabililty = true;
//    unusedClients[4]->explanationAccept = "incorrect!";
//    unusedClients[4]->explanationReject = "Yep! As cool as this kid is he still committed a Class B misdemeanor according to the section 4.020.69";

//    Client *client5 = new Client;
//    unusedClients.push_back(client5);
//    unusedClients[5]->name = "Gertrude Chutes";
//    unusedClients[5]->image = ":/resources/img/carwithgolfball.png";
//    unusedClients[5]->dialogue.push_back("I went parachute jumping and a police officer said it was illegal.");
//    unusedClients[5]->dialogue.push_back("I told him I had it approved by the mayor and the papers to show it");
//    unusedClients[5]->dialogue.push_back("But the police officer didnt believe me so I want to sue!");
//    unusedClients[5]->dialogue.push_back("Im not going back!");
//    unusedClients[5]->viabililty = false;
//    unusedClients[5]->explanationAccept = "Correct! Expressed permission from the mayor allows you to parachute \naccording to Section 9.20.010";
//    unusedClients[5]->explanationReject = "Try again! Take a look at Section 9.20.010";

//    Client *client6 = new Client;
//    unusedClients.push_back(client6);
//    unusedClients[6]->name = "Randy Methheadson";
//    unusedClients[6]->image = ":/resources/img/carwithgolfball.png";
//    unusedClients[6]->dialogue.push_back("Pardon the last name! The only drugs I take are Nyquil Cold and Flu Nighttime Relief Liquid and Dayquil cough, cold, and flu, medicine for daytime relief!");
//    unusedClients[6]->dialogue.push_back("Speaking of Nyquil Cold and Flu Nighttime Relief Liquid, I accidentally drank some Nyquil Cold and Flu Nighttime Relief Liquid instead of the usual Dayquil cough, cold, and flu, medicine for daytime relief.");
//    unusedClients[6]->dialogue.push_back("I was drowsy from the doxylamine, a sedating antihistamine, but not coughing thanks to the dextromethorphan, a cough suppressant.");
//    unusedClients[6]->dialogue.push_back("I ended up rear ending someone on a Monday morning in a school zone while driving to buy some more Nyquil Cold and Flu Nighttime Relief Liquid and Dayquil cough, cold, and flu, medicine for daytime relief.");
//    unusedClients[5]->dialogue.push_back("They were going really slow! 20 in a 35 can you believe it!");
//    unusedClients[6]->viabililty = false;
//    unusedClients[6]->explanationAccept = "Correct! Expressed permission from the mayor allows you to parachute \naccording to Section 9.20.010";
//    unusedClients[6]->explanationReject = "Try again! Take a look at Section 9.20.010";

}

void Model::reset()
{
    //Reset the pool
    clients.clear();
    unusedClients.clear();

    fillUnusedClients();
    fillClients();
}

int Model::getMoney(){
    return this->money;
}

double Model::getReputation(){
    return this->reputation;
}

void Model::addMoney(int value){
    money += value;
}

void Model::equalMoney(int value){
    money = value;
}

void Model::deleteMoney(int value){
    money -= value;
}

void Model::changeReputation(double value){
    reputation = value;
}

void Model::restart(){
    money = 0;
    reputation = 1;
//    int iNum = clients.count();
//    for(int i = 0; i < iNum; i++){
//        delete(clients.takeAt(0));
//    }
}

QString Model::getReputationStatus(){
    if(reputation >= 0.59 && reputation < 1.61){
        return "Reputation status:    mediocre";
    }else if(reputation >= 0.21 && reputation < 0.59){
        return "Reputation status:    bad deeds";
    }else if(reputation >= 1.61 && reputation < 4.18){
        return "Reputation status:    small famous";
    }else if(reputation >= 0.04 && reputation < 0.21){
        return "Reputation status:    notorious";
    }else if(reputation >= 4.18 && reputation < 17.45){
        return "Reputation status:    outstanding";
    }else if(reputation < 0.04){
        return "Reputation status:    everyone spurned";
    }else if (reputation >= 17.45){
        return "Reputation status:    everyone knows";
    }else{
        return "Error";
    }
}

bool Model::update(){
    switch (level) {
    case 0:
        if(money > 10000){
            money -= 10000;
            level++;
            return true;
        }else{

        }
        break;
    case 1:
        if(money > 35000){
            money -= 35000;
            level++;
            return true;
        }
        break;
    case 2:
        if(money > 200000){
            money -= 200000;
            level++;
            return true;
        }
        break;
    case 3:
        if(money > 1500000){
            money -= 1500000;
            graduate();
            return true;
        }
        break;
    }
    return false;
}

void Model::graduate(){

}

int Model::getLevel(){
    return this->level;
}

int Model::getLevelMoney(){
    switch(level){
    case 0:
        return 10000;
        break;
    case 1:
        return 35000;
        break;
    case 2:
        return 200000;
        break;
    case 3:
        return 1500000;
        break;
    case 4:
        return INT_MAX;
    }
    return 0;
}

QString Model::getLevelStatus(){
    switch(level){
    case 0:
        return "Apprentice lawyer";
        break;
    case 1:
        return "junior lawyer";
        break;
    case 2:
        return "Intermediate Lawyer";
        break;
    case 3:
        return "senior lawyer";
        break;
    case 4:
        return "Graduate";
    }
    return 0;
}

void Model::deleteLevel(){
    level -= 1;
}
