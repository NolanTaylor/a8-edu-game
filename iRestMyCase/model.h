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
    QVector<Client*> unusedClients; //Select from this pool of not yet used clients

    // std::vector<std::unique_ptr<Client>> currentClients; //Pool of current clients
    // std::vector<std::unique_ptr<Client>> unusedClients; //Select from this pool of not yet used clients (rachel mode 2)

    int getMoney();
    double getReputation();
    void addMoney(int value);
    void deleteMoney(int value);
    void changeReputation(double value);
    QString getReputationStatus();
    bool update();
    void graduate();
    int getLevel();
    int getLevelMoney();
    QString getLevelStatus();

public slots:
    void reset();
signals:

private:
    int money;
    double reputation;
    int level;

    void fillClients();
    void fillUnusedClients();
};

#endif // MODEL_H
