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
    Client (QString name, int ID, bool viability, int payment, QPixmap image, QObject *parent = nullptr);
    QString name;
    int ID;
    QString explanationAccept;
    QString explanationReject;
    //Parse through a text file for each character
    QVector<QString> dialogue;

    bool viabililty;
    int payment;
    QString image;

signals:

};

#endif // CLIENT_H
