#include "clienthomepage.h"
#include "qmessagebox.h"
#include "ui_clienthomepage.h"

clientHomePage::clientHomePage(int Phone_number,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::clientHomePage)
{
    ui->setupUi(this);
    Phone_Number = Phone_number;
    clientM = new ClientManager();
    clientM->connectToServer();
    requestUserData();
    ui->Amount_lineEdit->setText("0");
}

clientHomePage::~clientHomePage()
{
    clientM->DisconnectFromServer();
    delete ui;
}

void clientHomePage::requestUserData()
{
    clientM->sendMessage("Fetch\n");
    clientM->sendMessage(QString::number(Phone_Number));
    qDebug() << "Requesting User Data";
    connect(clientM,&ClientManager::dataRecieved, this ,&clientHomePage::receivedUserData,Qt::UniqueConnection);
}

void clientHomePage::receivedUserData(QByteArray data)
{
    QString DataAsString = QString(data);
    QList<QString> qs = DataAsString.split("\n");
    qDebug() << "receivedUserData" << qs[0];
    if(qs[0] == "Success"){
        // 0 = Full Name, 1 = National ID, 2 = Balance
        ui->user_phone_Number->setText( QString::number(Phone_Number));
        ui->user_fullName->setText( qs[1]);
        ui->user_NationalID->setText( qs[2]);
        ui->user_balance->setText( qs[3]);
    }else{
        QMessageBox::critical(this , "Fetch" , "Error Fetching data.");
    }
    disconnect(clientM,NULL,NULL,NULL);
}

void clientHomePage::on_deposit_Button_clicked()
{
    QString Amount = ui->Amount_lineEdit->text();
    qDebug() << "Deposit " + Amount;
    // Serialize Data
    // Needs Delay but works fine for now
    clientM->sendMessage("Deposit\n");
    clientM->sendMessage(QString::number(Phone_Number) + '\n');
    clientM->sendMessage(Amount+'\n');
    connect(clientM,&ClientManager::dataRecieved, this ,&clientHomePage::receivedNewBalance,Qt::UniqueConnection);
}


void clientHomePage::on_withdraw_Button_clicked()
{
    QString Amount = ui->Amount_lineEdit->text();
    qDebug() << "Withdraw " + Amount;
    // Serialize Data
    // Needs Delay but works fine for now
    clientM->sendMessage("Withdraw\n");
    clientM->sendMessage(QString::number(Phone_Number) + '\n');
    clientM->sendMessage(Amount+'\n');
    connect(clientM,&ClientManager::dataRecieved, this ,&clientHomePage::receivedNewBalance,Qt::UniqueConnection);
    }

void clientHomePage::receivedNewBalance(QByteArray data)
{
    // Deserialization of dataStream
    QString DataAsString = QString(data);
    QList<QString> qs = DataAsString.split("\n");
    qDebug() << "receivedNew Balance" << qs[0];
     // 0 Status
    if(qs[0] == "Approved"){
        // 1 = Balance
        ui->user_balance->setText(qs[1]);
        QMessageBox::information(this , "Transaction" , "Transaction Compelete.");
    }else{
        QMessageBox::critical(this , "Transaction" , "Couldn't Compelete Transaction.");
    }
    disconnect(clientM,NULL,NULL,NULL);
    ui->Amount_lineEdit->setText("0");
}


