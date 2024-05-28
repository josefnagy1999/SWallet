#ifndef SERVERMANAGER_H
#define SERVERMANAGER_H

#include "client.h"
#include "dbmanager.h"
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
class ServerManager : public QObject
{
    Q_OBJECT
public:
    explicit ServerManager(ushort port = 4500 ,QObject *parent = nullptr);
private slots:
    void newClientConnectionRecieved();
    void onClientDisconnected();
    void dataRecieved(QTcpSocket * client);
signals:
    void newClientConnected(QTcpSocket * client);
    void ClientDisconnected(QTcpSocket * client);
private: // Fields
    QTcpServer * server;
    QList<QTcpSocket *> clients;
    QTcpSocket * clientSocket;
    Client client;

private: //Methods
    void setupServer(ushort port);
    void setupDB();
public:
    DBManager * DB;

};

#endif // SERVERMANAGER_H
