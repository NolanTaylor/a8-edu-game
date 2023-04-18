#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QPixmap>

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
    Client(const Client&);
    Client& operator=(const Client&);
    QString name;
    int ID;
    //Parse through a text file for each character
    std::vector<QString> dialougeOptions;
    double viabililty;
    int payment;
    QPixmap image;

signals:

};

#endif // CLIENT_H
