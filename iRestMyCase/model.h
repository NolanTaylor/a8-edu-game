#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "client.h"

class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = nullptr);
    std::map<int, Client> currentClients; //Pool of current clients
    std::map<int, Client> unusedClients; //Select from this pool of not yet used clients
    int money, reputation;

signals:

};

#endif // MODEL_H
