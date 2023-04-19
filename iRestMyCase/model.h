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

    //std::map<int, Client> currentClients; //Pool of current clients
    //std::map<int, Client> unusedClients; //Select from this pool of not yet used clients (rachel mode)

    QVector<Client*> clients; //Pool of current clients
    std::map<int, Client> unusedClients; //Select from this pool of not yet used clients

    // std::vector<std::unique_ptr<Client>> currentClients; //Pool of current clients
    // std::vector<std::unique_ptr<Client>> unusedClients; //Select from this pool of not yet used clients (rachel mode 2)

    int getMoney();
    void addMoney(int value);
    void deleteMoney(int value);
    void addReputation(double value);
    void deleteReputation(double value);

public slots:
signals:

private:
    void fillClients();
    int money;
    double reputation;
};

#endif // MODEL_H
