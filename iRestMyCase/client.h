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
    Client (QString name, int ID, double viability, int payment, QPixmap image, QObject *parent = nullptr);
    QString name;
    int ID;
    //Parse through a text file for each character
    QVector<QString> dialogue;
    QVector<QString> dialogue_q; // dialogue when questioned
    QVector<QString> dialogue_a; // dialogue when accepted
    QVector<QString> dialogue_r; // dialogue when rejected
    double viabililty;
    int payment;
    QString image;

signals:

};

#endif // CLIENT_H
