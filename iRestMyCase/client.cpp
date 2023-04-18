#include "client.h"

Client::Client(QObject *parent)
    : QObject{parent}, name{"Mr.White"}, ID{0}, viabililty{0.5}, payment{1000}
{
    QPixmap clientImg(":/resources/img/client1.png");
    this->image = clientImg;
}

Client::Client (QString name, int ID, double viability, int payment, QPixmap image, QObject *parent)
    :QObject{parent},ID{ID}, name{name}, viabililty{viability},payment{payment}, image{image}
{
    //Parse throught the dialouge and add to vector (maybe change to map)
    //The 3rd from last index will hold the end of this clients information dialouge
    //The next two index will hold the Reject dialouge and Accept dialouge, respectfully
}

