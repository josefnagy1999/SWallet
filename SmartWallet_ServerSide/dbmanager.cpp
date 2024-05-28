#include "dbmanager.h"
#include <QMessageBox>
DBManager::DBManager() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath() + "/SWallets");
    openConnection();
}

bool DBManager::insertNewSWallet(Client client)
{
    QSqlQuery query;
    query.prepare("Select Phone_Number From Users WHERE Phone_Number = ?");
    query.addBindValue(client.get_phoneNumber());
    query.exec();
    //qDebug()<<query.size();
    if(query.next()){
        qDebug()<<"User already exists";
        return false;
    }
    else{
        query.prepare("INSERT INTO Users(Phone_Number,Full_Name,Password,National_ID,Age) Values(:PN,:FN,:PASS,:N_ID,:AGE)");
        query.bindValue(":PN",client.get_phoneNumber());
        query.bindValue(":FN",client.get_fullName());
        query.bindValue(":PASS",client.get_password());
        query.bindValue(":N_ID",client.get_national_ID());
        query.bindValue(":AGE",client.get_age());
        if(query.exec()){
            qDebug()<<query.lastError();
            return true;
        }else
            return false;
    }

}

bool DBManager::checkCredentials(int Phone_Number, QString Password)
{
    qDebug()<<Phone_Number<<'\n';
    qDebug()<<Password <<'\n';
    QSqlQuery query;
    query.prepare("SELECT Phone_Number ,Password From Users Where Phone_Number = ?");
    query.addBindValue(Phone_Number);
    query.exec();
    qDebug()<<query.record();
    if(query.next()){
        qDebug() << query.value(0).toString();
        if(query.value(1).toString() == Password)
        {
            qDebug() <<"Success";
            return true;
        }
    }
    return false;
}

QList<QString> DBManager::fetch_UserData(int Phone_Number)
{
    qDebug()<<"Fetch "<<Phone_Number<<'\n';
    QSqlQuery query;
    query.prepare("SELECT * From Users Where Phone_Number = ?");
    query.addBindValue(Phone_Number);
    query.exec();
    qDebug()<<query.record();
    QList<QString> data;
    if(query.next()){
            data.append(query.value("Full_Name").toString());
            data.append(query.value("National_ID").toString());
            data.append(query.value("Balance").toString());
            //qDebug() <<"Success";
    }
    return data;

}

QList<QString> DBManager::makeDeposit(QString Phone_Number, QString Amount)
{
    qDebug()<<"Deposit "<<Phone_Number<<'\n';
    QSqlQuery query;
    QList<QString> data;
    query.prepare("UPDATE Users SET Balance= Balance +"+ Amount +" WHERE Phone_Number= "+ Phone_Number);
    if(query.exec()){
            query.prepare("SELECT Balance From Users Where Phone_Number = ?");
            query.addBindValue(Phone_Number);
            query.exec();
            if(query.next()){
                qDebug()<<query.value("Balance").toString();
                data.append(query.value("Balance").toString());
                data.append("Deposit");
            }
            query.prepare("Insert into Transactions(Phone_Number, Type, Amount,Time) Values(:PN , :Type , :Amount, :Time)");
            query.bindValue(":PN", Phone_Number);
            query.bindValue(":Type", "Deposit");
            query.bindValue(":Amount", Amount);
            query.bindValue(":Time",QDateTime::currentDateTime().toString());
            query.exec();
            qDebug() << query.lastError() << "DEPOOOOO";
    }

    return data;
}

QList<QString> DBManager::makeWithdraw(QString Phone_Number, QString Amount)
{
    qDebug()<<"Withdraw "<<Phone_Number<<'\n';
    QSqlQuery query;
    QList<QString> data;
    query.prepare("SELECT Balance From Users Where Phone_Number = ?");
    query.addBindValue(Phone_Number);
    if(query.exec() && query.next()){
        double curBalance = query.value("Balance").toDouble();
        if(curBalance- Amount.toDouble() >= 0 ){
            query.prepare("UPDATE Users SET Balance= Balance -"+ Amount +" WHERE Phone_Number= "+ Phone_Number);
            query.exec();
            data.append(QString::number(curBalance- Amount.toDouble()));
            data.append("Withdraw");
            query.prepare("Insert into Transactions(Phone_Number, Type, Amount, Time) Values(:PN , :Type , :Amount, :Time)");
            query.bindValue(":PN", Phone_Number);
            query.bindValue(":Type", "Withdraw");
            query.bindValue(":Amount", Amount);
            query.bindValue(":Time",QDateTime::currentDateTime().toString());
            query.exec();
            qDebug() << query.lastError() << "Withooo";
        }

    }
    return data;
}

QList<QString> DBManager::GetClients()
{
    qDebug()<<"GetClients ";
    QSqlQuery query;
    QList<QString> data;
    query.prepare("SELECT Phone_Number From Users");
    query.exec();
    qDebug()<< query.lastError();
    while(query.next()){
        qDebug()<<query.value("Phone_Number").toString();
        data.append(query.value("Phone_Number").toString());

    }
    return data;
}

QSqlQueryModel *DBManager::fetch_UserTransactions(QString Phone_Number)
{
    QSqlQueryModel * Model = new QSqlQueryModel();
    qDebug()<<"GetClientTransactions";
    QSqlQuery query;
    query.prepare("SELECT * From Transactions Where Phone_Number = " + Phone_Number);
    query.exec();
    Model->setQuery(query);
    return Model;
}

void DBManager::openConnection()
{
    QMessageBox qmsbx;
    qmsbx.setWindowTitle("Database Status");
    if(QFileInfo::exists(db.databaseName())){
        if(db.open()){
            qmsbx.setText("Connection to Database is Successful");
            qmsbx.setIcon(QMessageBox::Information);
        }else
        {
            qmsbx.setText("Connection to Database is Unsuccessful");
            qmsbx.setIcon(QMessageBox::Critical);
        }

    }else{
        qmsbx.setText("Database doesn't Exists");
        qmsbx.setIcon(QMessageBox::Critical);
    }
    qmsbx.exec();
    // Fun insert
    /*int id = 50;
    QSqlDatabase::database().transaction();
    QSqlQuery query(db);
    query.prepare("Insert into test(ID) values(:ID)");
    query.bindValue(":ID",id);
    query.exec();
    qDebug() << query.lastError();
    QSqlDatabase::database().commit();
    db.close();*/
    //
}
