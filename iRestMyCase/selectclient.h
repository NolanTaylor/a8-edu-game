#ifndef SELECTCLIENT_H
#define SELECTCLIENT_H

#include <QWidget>

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
    void addNewClient();

private slots:
    void on_pickClient_pushButton_clicked();
    void on_manila_tabBarClicked(int index);

signals:
    void clientChosen(int clientID);
private:
    Ui::SelectClient *ui;
};

#endif // SELECTCLIENT_H
