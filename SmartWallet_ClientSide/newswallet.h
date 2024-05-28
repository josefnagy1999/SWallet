#ifndef NEWSWALLET_H
#define NEWSWALLET_H
#include "client.h"
#include "clientmanager.h"
#include <QDialog>

namespace Ui {
class newSWallet;
}

class newSWallet : public QDialog
{
    Q_OBJECT

public:
    explicit newSWallet(QWidget *parent = nullptr);
    void fill_age_comboBox();
    bool validData();
    void fill_client_info(Client &c);
    void NSWallet_ServerResponse(QByteArray data);
    ~newSWallet();

private slots:
    void on_cancel_Button_clicked();
    void on_create_Button_clicked();

private:
    Ui::newSWallet *ui;
    ClientManager *clientM;
};

#endif // NEWSWALLET_H
