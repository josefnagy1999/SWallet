#include "clientmanager.h"

ClientManager::ClientManager(QHostAddress ip, ushort port, QObject *parent)
    : QObject{parent},
        ip (ip),
        port(port)
{
    socket = new QTcpSocket (this);
    connect(socket, &QTcpSocket::connected, this,&ClientManager::connected);
    connect(socket, &QTcpSocket::disconnected, this,&ClientManager::disconnected);
    connect(socket, &QTcpSocket::readyRead, this,&ClientManager::readReady);
}

void ClientManager::connectToServer()
{
    socket->connectToHost(ip,port);
}

void ClientManager::DisconnectFromServer()
{
    socket->disconnectFromHost();
}

void ClientManager::sendMessage(QString msg)
{
    socket->write(msg.toUtf8());
}
void ClientManager::sendClientInfo(Client c){
    socket->write(QString::number(c.get_phoneNumber()).toUtf8() +'\n');
    socket->write(c.get_fullName().toUtf8()+'\n');
    socket->write(c.get_password().toUtf8()+'\n');
    socket->write(QString::number(c.get_national_ID()).toUtf8()+'\n');
    socket->write(QString::number(c.get_age()).toUtf8()+'\n');

}

void ClientManager::sendcredentials(QString Phone_Number, QString Password)
{
    socket->write("Login\n");
    socket->write(Phone_Number.toUtf8() +'\n');
    socket->write(Password.toUtf8()+'\n');
}
void ClientManager::readReady()
{
    auto data = socket->readAll();
    emit dataRecieved(data);
}

