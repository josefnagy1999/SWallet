#include "servermanager.h"
#include "client.h"
#include <QMessageBox>
#include <dbmanager.h>
ServerManager::ServerManager(ushort port,QObject *parent)
    : QObject{parent}
{
    setupServer(port);
    client = Client();
    DB = new DBManager();
}
void Message (QString msg){
    QMessageBox msgbx;
    msgbx.setText(msg);
    msgbx.exec();
}
void ServerManager::newClientConnectionRecieved()
{
    QTcpSocket * client = server->nextPendingConnection();
    clients.append(client);
    // Give ID to the client
    int id = clients.length();
    client->setProperty("id",id);
    //Message(id,"here1");
    connect(client, &QTcpSocket::disconnected,this,&ServerManager::onClientDisconnected);
    emit newClientConnected(client);
    connect(client, &QTcpSocket::readyRead, this, [client, this](){
        dataRecieved(client);
    });
}

void ServerManager::onClientDisconnected()
{
    auto client = qobject_cast<QTcpSocket *>(sender());
    clients.removeOne(client);
    emit ClientDisconnected(client);

}

void ServerManager::dataRecieved(QTcpSocket * curClientSock)
{
    auto data = curClientSock->readAll();
    QString DataAsString = QString(data);
    QList<QString> qs = DataAsString.split("\n");
    qDebug()<< "ServerSide : "<< qs[0];
    if (qs[0]== "NEW USER"){
        qs.removeFirst();
        client.fill_client_info(qs,client);
        if(DB->insertNewSWallet(client))
            curClientSock->write("Accepted");
        else
            curClientSock->write("Rejected");
    }else if (qs[0] == "Deposit"){
        qDebug()<<"Processing Depo";
        qs = DB->makeDeposit(qs[1],qs[2]);
        if(qs.size()){
            curClientSock->write("Approved\n");
            curClientSock->write(qs[0].toUtf8() + '\n');
        }else{
            curClientSock->write("Rejected");
        }

    }else if (qs[0] == "Withdraw"){
        qs = DB->makeWithdraw(qs[1],qs[2]);
        if(qs.size()){
            curClientSock->write("Approved\n");
            curClientSock->write(qs[0].toUtf8() + '\n');
        }else{
            curClientSock->write("Rejected");
        }
    }else if(qs[0] == "Login"){
        if(DB->checkCredentials(qs[1].toInt(),qs[2])){
            curClientSock->write("Accepted");
        }else
             curClientSock->write("Rejected");
    }else if(qs[0] == "Fetch"){
        //qs[1] = Phone Number
        qs = DB->fetch_UserData(qs[1].toInt());
        if(qs.size()){
            qDebug()<<"Fetching...";
            curClientSock->write("Success\n");
            curClientSock->write(qs[0].toUtf8() + '\n');
            curClientSock->write(qs[1].toUtf8()+ '\n');
            curClientSock->write(qs[2].toUtf8() + '\n');
        }else{
            curClientSock->write("Fail");
        }
    }
    //Message(data);
}
void ServerManager::setupServer(ushort port)
{
    server = new QTcpServer(this);
    connect(server, &QTcpServer::newConnection,this, &ServerManager::newClientConnectionRecieved);
    server->listen(QHostAddress::Any, port);
}
