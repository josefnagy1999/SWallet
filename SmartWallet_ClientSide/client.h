#ifndef CLIENT_H
#define CLIENT_H
#include <QString>
class Client
{
private:
    QString fullName,password;
    int age, national_ID, phoneNumber;
public:
    Client();
    void set_fullName(QString fullName);
    QString get_fullName();
    void set_password(QString password);
    QString get_password();
    void set_age(int age);
    int get_age();
    void set_national_ID(int national_ID);
    int get_national_ID();
    void set_phoneNumber(int phoneNumber);
    int get_phoneNumber();
};

#endif // CLIENT_H

