#include "newswallet.h"
#include "ui_newswallet.h"
#include "client.h"
#include "QMessageBox"
#include <QRegularExpression>
newSWallet::newSWallet(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::newSWallet)
{
    ui->setupUi(this);
    fill_age_comboBox();
    clientM = new ClientManager();
    clientM->connectToServer();
}
void newSWallet::fill_age_comboBox(){
    for (int i = 18 ; i < 150 ; ++i)
        ui->age_comboBox->addItem(QString::number(i));
}
bool newSWallet::validData(){
    QMessageBox Qmsgbx;
    /*QRegularExpression re("^[1-9]*");  // a digit (\d), zero or more times (*)
    QRegularExpressionMatch match = re.match(ui->phoneNumber_lineEdit->text());
    */
    //qDebug()<< ui->phoneNumber_lineEdit->text().toLong();
    //if (re.exactMatch(somestr))
    if(ui->phoneNumber_lineEdit->text().size()!= 10 || !(ui->phoneNumber_lineEdit->text().toULong())){
        Qmsgbx.setText("Enter Phone Number or A valid one");
        Qmsgbx.exec();
    }
    else if (!ui->fullName_lineEdit->text().size()){
        Qmsgbx.setText("Please, Enter Your Full Name");
        Qmsgbx.exec();
    }
    else if (!ui->nationalID_lineEdit->text().size()){
        Qmsgbx.setText("Please, Enter Your National ID");
        Qmsgbx.exec();
    }else if(!ui->password_lineEdit->text().size()){
        Qmsgbx.setText("Please, Enter Your Password");
        Qmsgbx.exec();
    }else{
        return true;
    }
    return false;
}
void newSWallet::fill_client_info(Client &c){
    c.set_phoneNumber(ui->phoneNumber_lineEdit->text().toInt());
    c.set_fullName(ui->fullName_lineEdit->text());
    c.set_password(ui->password_lineEdit->text());
    c.set_national_ID(ui->nationalID_lineEdit->text().toInt());
    c.set_age(ui->age_comboBox->currentText().toInt());
}
newSWallet::~newSWallet()
{
    delete ui;
}
void newSWallet::on_create_Button_clicked()
{

    if(newSWallet::validData()){
        //Check with server
        Client c;
        newSWallet::fill_client_info(c);

        // Sending server a message
        clientM->sendMessage("NEW USER\n");
        clientM->sendClientInfo(c);
        // Recieve a Message from server
        connect(clientM, &ClientManager::dataRecieved, this, &newSWallet::NSWallet_ServerResponse,Qt::UniqueConnection);
    }
}
void newSWallet::on_cancel_Button_clicked()
{
    this->close();
}

void newSWallet::NSWallet_ServerResponse(QByteArray data){
    //qDebug() << data;
    QMessageBox Qmsgbx;
    if(data == "Accepted"){
        Qmsgbx.setText("Congratulations! You can now Enjoy Your New SWallet ");
        Qmsgbx.exec();
        clientM->DisconnectFromServer();
        this->close();
    }
    else{
    Qmsgbx.setText("Something Went Wrong!");
    Qmsgbx.exec();
    }
    disconnect(clientM,NULL,NULL,NULL);
}
