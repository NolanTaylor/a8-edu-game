#include "model.h"
#include <QPixmap>
#include "client.h"

Model::Model(QObject *parent)
    : QObject{parent}
{
    //Unique pointers and shared pointers<<
    //Only move unique pointer you can't copy
    //
    currentClients.push_back(std::make_unique<Client>());
}
