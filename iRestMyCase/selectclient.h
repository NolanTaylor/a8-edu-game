#ifndef SELECTCLIENT_H
#define SELECTCLIENT_H

#include <QWidget>
#include "client.h"

namespace Ui {
class SelectClient;
}

class SelectClient : public QWidget
{
    Q_OBJECT

public:
    explicit SelectClient(QWidget *parent = nullptr);
    ~SelectClient();
public slots:
    void pickClient();
    void tabBarClicked(int index);
    void addNewClients(Client &client);

signals:
    void clientChosen(int clientID);
private:
    Ui::SelectClient *ui;
};

#endif // SELECTCLIENT_H
