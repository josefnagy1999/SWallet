#ifndef DBMANAGER_H
#define DBMANAGER_H
#include "client.h"
#include <QtSql>
#include <QtDebug>
class DBManager
{
public:
    DBManager();
    bool insertNewSWallet(Client client);
    bool checkCredentials(int Phone_Number, QString Password);
    QList<QString> fetch_UserData(int Phone_Number);
    QList<QString> makeDeposit(QString Phone_Number, QString Amount);
    QList<QString> makeWithdraw(QString Phone_Number, QString Amount);
    QList<QString> GetClients();
    QSqlQueryModel * fetch_UserTransactions(QString);
private: // Fields
    QSqlDatabase db;
private: // Methods
    void openConnection();
};

#endif // DBMANAGER_H
