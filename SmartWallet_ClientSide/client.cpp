#include "client.h"
#include <QString>
Client::Client() {}
void Client::set_fullName(QString fullName){
    this->fullName = fullName;
}
QString Client::get_fullName(){
    return this->fullName;
}
void Client::set_password(QString password){
    this->password = password;
}
QString Client::get_password(){
    return this->password;
}
void Client::set_age(int age){
    this->age = age;
}
int Client::get_age(){
    return this->age;
}
void Client::set_national_ID(int national_ID){
    this->national_ID = national_ID;
}
int Client::get_national_ID(){
    return this->national_ID;
}
void Client::set_phoneNumber(int phoneNumber){
    this->phoneNumber = phoneNumber;
}
int Client::get_phoneNumber(){
    return this->phoneNumber;
}
