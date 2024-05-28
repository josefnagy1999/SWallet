/********************************************************************************
** Form generated from reading UI file 'newswallet.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSWALLET_H
#define UI_NEWSWALLET_H

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
    QFrame *fullName_frame;
    QLineEdit *fullName_lineEdit;
    QLabel *fullName_label;
    QFrame *password_frame;
    QLineEdit *password_lineEdit;
    QLabel *password_label;
    QFrame *nationalID_frame;
    QLineEdit *nationalID_lineEdit;
    QLabel *nationalID_label;
    QFrame *age_frame;
    QLabel *age_label;
    QComboBox *age_comboBox;
    QFrame *phoneNumber_frame;
    QLineEdit *phoneNumber_lineEdit;
    QLabel *phoneNumber_label;
    QPushButton *create_Button;
    QPushButton *cancel_Button;

    void setupUi(QDialog *newSWallet)
    {
        if (newSWallet->objectName().isEmpty())
            newSWallet->setObjectName("newSWallet");
        newSWallet->resize(739, 490);
        registration_Box = new QGroupBox(newSWallet);
        registration_Box->setObjectName("registration_Box");
        registration_Box->setEnabled(true);
        registration_Box->setGeometry(QRect(30, 40, 481, 411));
        QFont font;
        font.setKerning(true);
        registration_Box->setFont(font);
        registration_Box->setCheckable(false);
        fullName_frame = new QFrame(registration_Box);
        fullName_frame->setObjectName("fullName_frame");
        fullName_frame->setEnabled(true);
        fullName_frame->setGeometry(QRect(20, 100, 431, 51));
        fullName_frame->setAutoFillBackground(false);
        fullName_frame->setFrameShape(QFrame::StyledPanel);
        fullName_frame->setFrameShadow(QFrame::Raised);
        fullName_lineEdit = new QLineEdit(fullName_frame);
        fullName_lineEdit->setObjectName("fullName_lineEdit");
        fullName_lineEdit->setGeometry(QRect(120, 10, 301, 31));
        fullName_lineEdit->setMouseTracking(true);
        fullName_lineEdit->setContextMenuPolicy(Qt::CustomContextMenu);
        fullName_lineEdit->setAcceptDrops(true);
        fullName_label = new QLabel(fullName_frame);
        fullName_label->setObjectName("fullName_label");
        fullName_label->setGeometry(QRect(20, 10, 81, 31));
        password_frame = new QFrame(registration_Box);
        password_frame->setObjectName("password_frame");
        password_frame->setGeometry(QRect(20, 160, 431, 51));
        password_frame->setFrameShape(QFrame::StyledPanel);
        password_frame->setFrameShadow(QFrame::Raised);
        password_lineEdit = new QLineEdit(password_frame);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setGeometry(QRect(120, 10, 301, 31));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_label = new QLabel(password_frame);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(20, 10, 81, 31));
        nationalID_frame = new QFrame(registration_Box);
        nationalID_frame->setObjectName("nationalID_frame");
        nationalID_frame->setGeometry(QRect(20, 220, 431, 51));
        nationalID_frame->setFrameShape(QFrame::StyledPanel);
        nationalID_frame->setFrameShadow(QFrame::Raised);
        nationalID_lineEdit = new QLineEdit(nationalID_frame);
        nationalID_lineEdit->setObjectName("nationalID_lineEdit");
        nationalID_lineEdit->setGeometry(QRect(120, 10, 301, 31));
        nationalID_label = new QLabel(nationalID_frame);
        nationalID_label->setObjectName("nationalID_label");
        nationalID_label->setGeometry(QRect(20, 10, 81, 31));
        age_frame = new QFrame(registration_Box);
        age_frame->setObjectName("age_frame");
        age_frame->setGeometry(QRect(20, 280, 121, 51));
        age_frame->setFrameShape(QFrame::StyledPanel);
        age_frame->setFrameShadow(QFrame::Raised);
        age_label = new QLabel(age_frame);
        age_label->setObjectName("age_label");
        age_label->setGeometry(QRect(10, 10, 31, 31));
        age_comboBox = new QComboBox(age_frame);
        age_comboBox->setObjectName("age_comboBox");
        age_comboBox->setGeometry(QRect(60, 10, 51, 31));
        phoneNumber_frame = new QFrame(registration_Box);
        phoneNumber_frame->setObjectName("phoneNumber_frame");
        phoneNumber_frame->setGeometry(QRect(20, 40, 431, 51));
        phoneNumber_frame->setFrameShape(QFrame::StyledPanel);
        phoneNumber_frame->setFrameShadow(QFrame::Raised);
        phoneNumber_lineEdit = new QLineEdit(phoneNumber_frame);
        phoneNumber_lineEdit->setObjectName("phoneNumber_lineEdit");
        phoneNumber_lineEdit->setGeometry(QRect(160, 10, 261, 31));
        phoneNumber_label = new QLabel(phoneNumber_frame);
        phoneNumber_label->setObjectName("phoneNumber_label");
        phoneNumber_label->setGeometry(QRect(10, 10, 141, 31));
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
        QWidget::setTabOrder(phoneNumber_lineEdit, fullName_lineEdit);
        QWidget::setTabOrder(fullName_lineEdit, password_lineEdit);
        QWidget::setTabOrder(password_lineEdit, nationalID_lineEdit);
        QWidget::setTabOrder(nationalID_lineEdit, age_comboBox);
        QWidget::setTabOrder(age_comboBox, create_Button);
        QWidget::setTabOrder(create_Button, cancel_Button);

        retranslateUi(newSWallet);

        QMetaObject::connectSlotsByName(newSWallet);
    } // setupUi

    void retranslateUi(QDialog *newSWallet)
    {
        newSWallet->setWindowTitle(QCoreApplication::translate("newSWallet", "New SWallet", nullptr));
        registration_Box->setTitle(QCoreApplication::translate("newSWallet", "New SWallet Registration:", nullptr));
        fullName_lineEdit->setPlaceholderText(QCoreApplication::translate("newSWallet", "First Last", nullptr));
        fullName_label->setText(QCoreApplication::translate("newSWallet", "Full Name", nullptr));
        password_lineEdit->setPlaceholderText(QCoreApplication::translate("newSWallet", "Pass", nullptr));
        password_label->setText(QCoreApplication::translate("newSWallet", "Password", nullptr));
        nationalID_label->setText(QCoreApplication::translate("newSWallet", "National ID", nullptr));
        age_label->setText(QCoreApplication::translate("newSWallet", "Age", nullptr));
        age_comboBox->setCurrentText(QString());
        age_comboBox->setPlaceholderText(QString());
        phoneNumber_lineEdit->setPlaceholderText(QCoreApplication::translate("newSWallet", "123 1234567 (Last 10 digits)", nullptr));
        phoneNumber_label->setText(QCoreApplication::translate("newSWallet", "Phone Number  +20", nullptr));
        create_Button->setText(QCoreApplication::translate("newSWallet", "Create", nullptr));
        cancel_Button->setText(QCoreApplication::translate("newSWallet", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newSWallet: public Ui_newSWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSWALLET_H
