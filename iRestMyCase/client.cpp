#include "client.h"

Client::Client(QObject *parent)
    : QObject{parent}, name{"Mr.White"}, ID{0}, viabililty{0.5}, payment{1000}
{
    QPixmap clientImg(":/resources/img/client1.png");
    this->image = clientImg;
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
