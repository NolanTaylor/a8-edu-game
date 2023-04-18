#include "model.h"

Model::Model(QObject *parent)
    : QObject{parent}
{

}

Model::addMoney(int value){
    money += value;
}

Model::deleteMoney(int value){
    money -= value;
    if(money <= 0){
        //game over
    }
}

Model::addReputation(double value){
    reputation += value;
    if(){
        // Check if the reputation has reached the requirements of the next stage, and if so, promote
    }
}

Model::deleteReputation(double value){
    reputation -= value;
    if(reputation <= 0){
        //Check if there is a upper level, if not game over
    }
}
