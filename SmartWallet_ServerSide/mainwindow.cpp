#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupServer();
    displayClientsList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newClientConnected(QTcpSocket *client)
{

    /*int  id = client->property("id").toInt();
    ui->Clients_list->addItem(QString::number(id));*/
}

void MainWindow::ClientDisconnected(QTcpSocket *client)
{
    client->disconnectFromHost();
    /*int  id = client->property("id").toInt();
    for(int i = 0 ; i < ui->Clients_list->count();++i){
        if (ui->Clients_list->item(i)->text().toInt() == id){
            ui->Clients_list->takeItem(i);
            break;
        }
    }*/
}



void MainWindow::setupServer()
{
    server = new ServerManager();
    connect(server,&ServerManager::newClientConnected, this , &MainWindow::newClientConnected);
    connect(server,&ServerManager::ClientDisconnected, this , &MainWindow::ClientDisconnected);
}

void MainWindow::displayClientsList()
{
    QList<QString> ClientsList = server->DB->GetClients();
    ui->Clients_list->clear();
    for(auto client : ClientsList){
        ui->Clients_list->addItem(client);
    }
}


void MainWindow::on_pushButton_clicked()
{
    if(!ui->Clients_list->selectedItems().empty())
    {
        QString ClientPN = ui->Clients_list->currentItem()->text();
        QList<QString>clientInfo =server->DB->fetch_UserData(ClientPN.toInt());
        setClientInfo(ClientPN,clientInfo);
        QSqlQueryModel * model = server->DB->fetch_UserTransactions(ClientPN);
        ui->tableView->setModel(model);
    }else{
        qDebug()<<"SELECT CLIENT";
    }
}
void MainWindow::setClientInfo(QString Phone_Number,QList<QString>clientInfo)
{
    // -1 Phone Number, 0 = FullName , 1 = NationalID, 3 = Balance
    ui->user_phone_Number_2->setText(Phone_Number);
    ui->user_fullName_2->setText(clientInfo[0]);
    ui->user_NationalID_2->setText(clientInfo[1]);
    ui->user_balance_2->setText(clientInfo[2]);
}



void MainWindow::on_Update_Button_clicked()
{
    displayClientsList();
}

