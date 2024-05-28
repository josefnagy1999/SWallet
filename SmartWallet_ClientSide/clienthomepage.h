#ifndef CLIENTHOMEPAGE_H
#define CLIENTHOMEPAGE_H

#include "clientmanager.h"
#include <QDialog>

namespace Ui {
class clientHomePage;
}

class clientHomePage : public QDialog
{
    Q_OBJECT

public:
    explicit clientHomePage(int Phone_number,QWidget *parent = nullptr);
    ~clientHomePage();
private slots:
    void on_deposit_Button_clicked();

    void on_withdraw_Button_clicked();

private: // Methods
    void requestUserData();
    void receivedUserData(QByteArray data);
    void receivedNewBalance(QByteArray data);
private:
    Ui::clientHomePage *ui;
    int Phone_Number;
    ClientManager * clientM;
};

#endif // CLIENTHOMEPAGE_H
