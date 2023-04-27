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
    void equalMoney(int value);
    void deleteMoney(int value);
    void changeReputation(double value);
    void restart();
    QString getReputationStatus();

    bool promote_pushButton();
    void graduate();
    int getLevel();
    void deleteLevel();
    int getLevelMoney();
    QString getLevelStatus();


public slots:
    void reset();
signals:
    void gameOver();
private:
    int money;
    double reputation;

    void fillClients();
    void fillUnusedClients();

    int level;
};

#endif // MODEL_H
