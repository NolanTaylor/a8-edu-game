#ifndef CLIENTTAB_H
#define CLIENTTAB_H

#include <QWidget>
#include "client.h"

namespace Ui {
class clientTab;
}

class clientTab : public QWidget
{
    Q_OBJECT

public:
    explicit clientTab(Client &client, QWidget *parent = nullptr);
    ~clientTab();
    void addClient(Client &client);


private:
    Ui::clientTab *ui;
};

#endif // CLIENTTAB_H
