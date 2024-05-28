#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H

#include "client.h"
#include <QObject>
#include <QTcpSocket>
class ClientManager : public QObject
{
    Q_OBJECT
public:
    explicit ClientManager(QHostAddress ip = QHostAddress::LocalHost, ushort port = 4500,
                           QObject *parent = nullptr);
    void connectToServer();
    void DisconnectFromServer();
    void sendMessage(QString msg);
    void sendClientInfo(Client c);
    void sendcredentials(QString Phone_Number, QString Password);
signals:
    void connected();
    void disconnected();
    void dataRecieved(QByteArray data);
private slots:
    void readReady();

private:
    QTcpSocket * socket;
    QHostAddress ip;
    ushort port;
};

#endif // CLIENTMANAGER_H
