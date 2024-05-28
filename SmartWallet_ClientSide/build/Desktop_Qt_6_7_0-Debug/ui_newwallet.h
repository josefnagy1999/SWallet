/********************************************************************************
** Form generated from reading UI file 'newwallet.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWALLET_H
#define UI_NEWWALLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newSWallet
{
public:
    QGroupBox *registration_Box;
    QFrame *userName_frame;
    QLineEdit *user_Name_lineEdit;
    QLabel *userName_label;
    QFrame *password_frame;
    QLineEdit *password_lineEdit;
    QLabel *password_label;
    QFrame *nationalID_frame;
    QLineEdit *nationalID_lineEdit;
    QLabel *nationalID_label;
    QFrame *age_frame;
    QLabel *age_label;
    QComboBox *age_comboBox;
    QPushButton *create_Button;
    QPushButton *cancel_Button;

    void setupUi(QDialog *newSWallet)
    {
        if (newSWallet->objectName().isEmpty())
            newSWallet->setObjectName("newSWallet");
        newSWallet->resize(716, 485);
        registration_Box = new QGroupBox(newSWallet);
        registration_Box->setObjectName("registration_Box");
        registration_Box->setGeometry(QRect(60, 50, 451, 411));
        userName_frame = new QFrame(registration_Box);
        userName_frame->setObjectName("userName_frame");
        userName_frame->setGeometry(QRect(20, 50, 401, 51));
        userName_frame->setFrameShape(QFrame::StyledPanel);
        userName_frame->setFrameShadow(QFrame::Raised);
        user_Name_lineEdit = new QLineEdit(userName_frame);
        user_Name_lineEdit->setObjectName("user_Name_lineEdit");
        user_Name_lineEdit->setGeometry(QRect(90, 10, 301, 31));
        userName_label = new QLabel(userName_frame);
        userName_label->setObjectName("userName_label");
        userName_label->setGeometry(QRect(10, 10, 81, 31));
        password_frame = new QFrame(registration_Box);
        password_frame->setObjectName("password_frame");
        password_frame->setGeometry(QRect(20, 110, 401, 51));
        password_frame->setFrameShape(QFrame::StyledPanel);
        password_frame->setFrameShadow(QFrame::Raised);
        password_lineEdit = new QLineEdit(password_frame);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setGeometry(QRect(90, 10, 301, 31));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_label = new QLabel(password_frame);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(10, 10, 81, 31));
        nationalID_frame = new QFrame(registration_Box);
        nationalID_frame->setObjectName("nationalID_frame");
        nationalID_frame->setGeometry(QRect(20, 170, 401, 51));
        nationalID_frame->setFrameShape(QFrame::StyledPanel);
        nationalID_frame->setFrameShadow(QFrame::Raised);
        nationalID_lineEdit = new QLineEdit(nationalID_frame);
        nationalID_lineEdit->setObjectName("nationalID_lineEdit");
        nationalID_lineEdit->setGeometry(QRect(90, 10, 301, 31));
        nationalID_label = new QLabel(nationalID_frame);
        nationalID_label->setObjectName("nationalID_label");
        nationalID_label->setGeometry(QRect(10, 10, 81, 31));
        age_frame = new QFrame(registration_Box);
        age_frame->setObjectName("age_frame");
        age_frame->setGeometry(QRect(20, 230, 121, 51));
        age_frame->setFrameShape(QFrame::StyledPanel);
        age_frame->setFrameShadow(QFrame::Raised);
        age_label = new QLabel(age_frame);
        age_label->setObjectName("age_label");
        age_label->setGeometry(QRect(10, 10, 31, 31));
        age_comboBox = new QComboBox(age_frame);
        age_comboBox->setObjectName("age_comboBox");
        age_comboBox->setGeometry(QRect(60, 10, 51, 31));
        create_Button = new QPushButton(newSWallet);
        create_Button->setObjectName("create_Button");
        create_Button->setGeometry(QRect(550, 170, 131, 51));
        create_Button->setAutoFillBackground(false);
        create_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);\n"
"color: black;"));
        cancel_Button = new QPushButton(newSWallet);
        cancel_Button->setObjectName("cancel_Button");
        cancel_Button->setGeometry(QRect(550, 240, 131, 51));
        cancel_Button->setAutoFillBackground(false);
        cancel_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 51, 59);\n"
"color: black;"));

        retranslateUi(newSWallet);

        QMetaObject::connectSlotsByName(newSWallet);
    } // setupUi

    void retranslateUi(QDialog *newSWallet)
    {
        newSWallet->setWindowTitle(QCoreApplication::translate("newSWallet", "New SWallet", nullptr));
        registration_Box->setTitle(QCoreApplication::translate("newSWallet", "New SWallet Registration:", nullptr));
        userName_label->setText(QCoreApplication::translate("newSWallet", "User Name", nullptr));
        password_label->setText(QCoreApplication::translate("newSWallet", "Password", nullptr));
        nationalID_label->setText(QCoreApplication::translate("newSWallet", "National ID", nullptr));
        age_label->setText(QCoreApplication::translate("newSWallet", "Age", nullptr));
        age_comboBox->setCurrentText(QString());
        age_comboBox->setPlaceholderText(QString());
        create_Button->setText(QCoreApplication::translate("newSWallet", "Create", nullptr));
        cancel_Button->setText(QCoreApplication::translate("newSWallet", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newSWallet: public Ui_newSWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWALLET_H
