#include "client.h"

Client::Client(QObject *parent)
    : QObject{parent}
{

}

Client::Client(const Client&)
{

}

Client& Client::operator=(const Client& rhs)
{
    name = rhs.name;
    image = rhs.image;

    return *this;
}
