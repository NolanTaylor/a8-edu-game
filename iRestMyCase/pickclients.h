#ifndef PICKCLIENTS_H
#define PICKCLIENTS_H

#include <QWidget>

namespace Ui {
class PickClients;
}

class PickClients : public QWidget
{
    Q_OBJECT

public:
    explicit PickClients(QWidget *parent = nullptr);
    ~PickClients();

private:
    Ui::PickClients *ui;
};

#endif // PICKCLIENTS_H
