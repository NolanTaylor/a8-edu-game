#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QVector>
#include "client.h"

class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = nullptr);
    QVector<Client*> clients; //Pool of current clients
    std::map<int, Client> unusedClients; //Select from this pool of not yet used clients
    int money, reputation;

signals:

private:
    void fillClients();
};

#endif // MODEL_H
