#include "mainwindow.h"
#include "qmessagebox.h"
#include "ui_mainwindow.h"
#include "newswallet.h"
#include "clienthomepage.h"
#include "QStyle"
#include <QApplication>
#include <QScreen>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clientM = new ClientManager();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_newWallet_Button_clicked()
{
    this->hide();
    newSWallet nWallet;
    nWallet.setModal(true);
    nWallet.exec();
    this->show();
}

void MainWindow::on_SignIn_Button_clicked()
{
    clientM->connectToServer();
    clientM->sendcredentials(ui->phoneNumber_lineEdit->text(),ui->password_lineEdit->text());
    connect(clientM, &ClientManager::dataRecieved, this , &MainWindow::SigninResponse,Qt::UniqueConnection);
    ///////////////

}
void MainWindow::SigninResponse(QByteArray data)
{
    if(data == "Accepted"){
        // Create a class of the client and pass it to home page
        clientHomePage chomepage(ui->phoneNumber_lineEdit->text().toInt());
        this->hide();
        //QMessageBox::critical(this,"Login" , "Welcome!");
        chomepage.setModal(true);
        chomepage.exec();
        this->show();

    }else{
        QMessageBox::critical(this,"Login" , "Wrong Credentials");
    }
}
/*

*/
