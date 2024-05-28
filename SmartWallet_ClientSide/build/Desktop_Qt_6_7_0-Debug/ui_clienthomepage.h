/********************************************************************************
** Form generated from reading UI file 'clienthomepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTHOMEPAGE_H
#define UI_CLIENTHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_clientHomePage
{
public:
    QPushButton *deposit_Button;
    QGroupBox *informationBox;
    QFrame *fullName_frame;
    QLabel *fullName_label;
    QLabel *user_fullName;
    QFrame *nationalID_frame;
    QLabel *nationalID_label;
    QLabel *user_NationalID;
    QFrame *phoneNumber_frame;
    QLabel *phoneNumber_label;
    QLabel *user_phone_Number;
    QFrame *Balance_frame;
    QLabel *Balance_label;
    QLabel *user_balance;
    QPushButton *withdraw_Button;
    QFrame *Amount_frame;
    QLabel *Amount_label;
    QLineEdit *Amount_lineEdit;

    void setupUi(QDialog *clientHomePage)
    {
        if (clientHomePage->objectName().isEmpty())
            clientHomePage->setObjectName("clientHomePage");
        clientHomePage->resize(877, 547);
        deposit_Button = new QPushButton(clientHomePage);
        deposit_Button->setObjectName("deposit_Button");
        deposit_Button->setGeometry(QRect(540, 260, 131, 51));
        deposit_Button->setAutoFillBackground(false);
        deposit_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);\n"
"color: black;"));
        informationBox = new QGroupBox(clientHomePage);
        informationBox->setObjectName("informationBox");
        informationBox->setEnabled(true);
        informationBox->setGeometry(QRect(40, 50, 481, 411));
        QFont font;
        font.setKerning(true);
        informationBox->setFont(font);
        informationBox->setCheckable(false);
        fullName_frame = new QFrame(informationBox);
        fullName_frame->setObjectName("fullName_frame");
        fullName_frame->setEnabled(true);
        fullName_frame->setGeometry(QRect(20, 100, 431, 51));
        fullName_frame->setAutoFillBackground(false);
        fullName_frame->setFrameShape(QFrame::StyledPanel);
        fullName_frame->setFrameShadow(QFrame::Raised);
        fullName_label = new QLabel(fullName_frame);
        fullName_label->setObjectName("fullName_label");
        fullName_label->setGeometry(QRect(20, 10, 81, 31));
        user_fullName = new QLabel(fullName_frame);
        user_fullName->setObjectName("user_fullName");
        user_fullName->setGeometry(QRect(130, 10, 271, 31));
        nationalID_frame = new QFrame(informationBox);
        nationalID_frame->setObjectName("nationalID_frame");
        nationalID_frame->setGeometry(QRect(20, 160, 431, 51));
        nationalID_frame->setFrameShape(QFrame::StyledPanel);
        nationalID_frame->setFrameShadow(QFrame::Raised);
        nationalID_label = new QLabel(nationalID_frame);
        nationalID_label->setObjectName("nationalID_label");
        nationalID_label->setGeometry(QRect(20, 10, 81, 31));
        user_NationalID = new QLabel(nationalID_frame);
        user_NationalID->setObjectName("user_NationalID");
        user_NationalID->setGeometry(QRect(130, 10, 271, 31));
        phoneNumber_frame = new QFrame(informationBox);
        phoneNumber_frame->setObjectName("phoneNumber_frame");
        phoneNumber_frame->setGeometry(QRect(20, 40, 431, 51));
        phoneNumber_frame->setFrameShape(QFrame::StyledPanel);
        phoneNumber_frame->setFrameShadow(QFrame::Raised);
        phoneNumber_label = new QLabel(phoneNumber_frame);
        phoneNumber_label->setObjectName("phoneNumber_label");
        phoneNumber_label->setGeometry(QRect(10, 10, 101, 31));
        user_phone_Number = new QLabel(phoneNumber_frame);
        user_phone_Number->setObjectName("user_phone_Number");
        user_phone_Number->setGeometry(QRect(130, 10, 271, 31));
        Balance_frame = new QFrame(informationBox);
        Balance_frame->setObjectName("Balance_frame");
        Balance_frame->setGeometry(QRect(110, 290, 251, 51));
        Balance_frame->setFrameShape(QFrame::StyledPanel);
        Balance_frame->setFrameShadow(QFrame::Raised);
        Balance_label = new QLabel(Balance_frame);
        Balance_label->setObjectName("Balance_label");
        Balance_label->setGeometry(QRect(10, 10, 61, 31));
        user_balance = new QLabel(Balance_frame);
        user_balance->setObjectName("user_balance");
        user_balance->setGeometry(QRect(80, 10, 151, 31));
        withdraw_Button = new QPushButton(clientHomePage);
        withdraw_Button->setObjectName("withdraw_Button");
        withdraw_Button->setGeometry(QRect(690, 260, 131, 51));
        withdraw_Button->setAutoFillBackground(false);
        withdraw_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 51, 59);\n"
"color: black;"));
        Amount_frame = new QFrame(clientHomePage);
        Amount_frame->setObjectName("Amount_frame");
        Amount_frame->setGeometry(QRect(560, 180, 251, 51));
        Amount_frame->setFrameShape(QFrame::StyledPanel);
        Amount_frame->setFrameShadow(QFrame::Raised);
        Amount_label = new QLabel(Amount_frame);
        Amount_label->setObjectName("Amount_label");
        Amount_label->setGeometry(QRect(10, 10, 61, 31));
        Amount_lineEdit = new QLineEdit(Amount_frame);
        Amount_lineEdit->setObjectName("Amount_lineEdit");
        Amount_lineEdit->setGeometry(QRect(90, 10, 113, 26));

        retranslateUi(clientHomePage);

        QMetaObject::connectSlotsByName(clientHomePage);
    } // setupUi

    void retranslateUi(QDialog *clientHomePage)
    {
        clientHomePage->setWindowTitle(QCoreApplication::translate("clientHomePage", "Home Page", nullptr));
        deposit_Button->setText(QCoreApplication::translate("clientHomePage", "Deposit", nullptr));
        informationBox->setTitle(QCoreApplication::translate("clientHomePage", "SWallet Information", nullptr));
        fullName_label->setText(QCoreApplication::translate("clientHomePage", "Full Name", nullptr));
        user_fullName->setText(QCoreApplication::translate("clientHomePage", "TextLabel", nullptr));
        nationalID_label->setText(QCoreApplication::translate("clientHomePage", "National ID", nullptr));
        user_NationalID->setText(QCoreApplication::translate("clientHomePage", "TextLabel", nullptr));
        phoneNumber_label->setText(QCoreApplication::translate("clientHomePage", "Phone Number", nullptr));
        user_phone_Number->setText(QCoreApplication::translate("clientHomePage", "TextLabel", nullptr));
        Balance_label->setText(QCoreApplication::translate("clientHomePage", "Balance", nullptr));
        user_balance->setText(QCoreApplication::translate("clientHomePage", "TextLabel", nullptr));
        withdraw_Button->setText(QCoreApplication::translate("clientHomePage", "Withdraw", nullptr));
        Amount_label->setText(QCoreApplication::translate("clientHomePage", "Amount", nullptr));
        Amount_lineEdit->setPlaceholderText(QCoreApplication::translate("clientHomePage", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientHomePage: public Ui_clientHomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTHOMEPAGE_H
