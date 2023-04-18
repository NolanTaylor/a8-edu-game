#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include "client.h"

class Model : public QObject
{
    Q_OBJECT
private:
    int money;
    double reputation;
public:
    explicit Model(QObject *parent = nullptr);
    std::map<int, Client> currentClients; //Pool of current clients
    std::map<int, Client> unusedClients; //Select from this pool of not yet used clients
    int money, reputation;
    void addMoney(int value);
    void deleteMoney(int value);
    void addReputation(double value);
    void deleteReputation(double value);

signals:

};

#endif // MODEL_H
