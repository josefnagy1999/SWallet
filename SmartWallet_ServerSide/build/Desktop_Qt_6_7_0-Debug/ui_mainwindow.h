/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QFrame *nationalID_frame_2;
    QLabel *nationalID_label_2;
    QLabel *user_NationalID_2;
    QFrame *Balance_frame_2;
    QLabel *Balance_label_2;
    QLabel *user_balance_2;
    QFrame *phoneNumber_frame_2;
    QLabel *phoneNumber_label_2;
    QLabel *user_phone_Number_2;
    QFrame *fullName_frame_2;
    QLabel *fullName_label_2;
    QLabel *user_fullName_2;
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Clients_label;
    QListWidget *Clients_list;
    QPushButton *pushButton;
    QPushButton *Update_Button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 30, 461, 331));
        nationalID_frame_2 = new QFrame(groupBox);
        nationalID_frame_2->setObjectName("nationalID_frame_2");
        nationalID_frame_2->setGeometry(QRect(10, 160, 431, 51));
        nationalID_frame_2->setFrameShape(QFrame::StyledPanel);
        nationalID_frame_2->setFrameShadow(QFrame::Raised);
        nationalID_label_2 = new QLabel(nationalID_frame_2);
        nationalID_label_2->setObjectName("nationalID_label_2");
        nationalID_label_2->setGeometry(QRect(20, 10, 81, 31));
        user_NationalID_2 = new QLabel(nationalID_frame_2);
        user_NationalID_2->setObjectName("user_NationalID_2");
        user_NationalID_2->setGeometry(QRect(130, 10, 271, 31));
        Balance_frame_2 = new QFrame(groupBox);
        Balance_frame_2->setObjectName("Balance_frame_2");
        Balance_frame_2->setGeometry(QRect(90, 270, 251, 51));
        Balance_frame_2->setFrameShape(QFrame::StyledPanel);
        Balance_frame_2->setFrameShadow(QFrame::Raised);
        Balance_label_2 = new QLabel(Balance_frame_2);
        Balance_label_2->setObjectName("Balance_label_2");
        Balance_label_2->setGeometry(QRect(10, 10, 61, 31));
        user_balance_2 = new QLabel(Balance_frame_2);
        user_balance_2->setObjectName("user_balance_2");
        user_balance_2->setGeometry(QRect(80, 10, 151, 31));
        phoneNumber_frame_2 = new QFrame(groupBox);
        phoneNumber_frame_2->setObjectName("phoneNumber_frame_2");
        phoneNumber_frame_2->setGeometry(QRect(10, 40, 431, 51));
        phoneNumber_frame_2->setFrameShape(QFrame::StyledPanel);
        phoneNumber_frame_2->setFrameShadow(QFrame::Raised);
        phoneNumber_label_2 = new QLabel(phoneNumber_frame_2);
        phoneNumber_label_2->setObjectName("phoneNumber_label_2");
        phoneNumber_label_2->setGeometry(QRect(10, 10, 101, 31));
        user_phone_Number_2 = new QLabel(phoneNumber_frame_2);
        user_phone_Number_2->setObjectName("user_phone_Number_2");
        user_phone_Number_2->setGeometry(QRect(130, 10, 271, 31));
        fullName_frame_2 = new QFrame(groupBox);
        fullName_frame_2->setObjectName("fullName_frame_2");
        fullName_frame_2->setEnabled(true);
        fullName_frame_2->setGeometry(QRect(10, 100, 431, 51));
        fullName_frame_2->setAutoFillBackground(false);
        fullName_frame_2->setFrameShape(QFrame::StyledPanel);
        fullName_frame_2->setFrameShadow(QFrame::Raised);
        fullName_label_2 = new QLabel(fullName_frame_2);
        fullName_label_2->setObjectName("fullName_label_2");
        fullName_label_2->setGeometry(QRect(20, 10, 81, 31));
        user_fullName_2 = new QLabel(fullName_frame_2);
        user_fullName_2->setObjectName("user_fullName_2");
        user_fullName_2->setGeometry(QRect(130, 10, 271, 31));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 380, 741, 192));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(510, 49, 258, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Clients_label = new QLabel(layoutWidget);
        Clients_label->setObjectName("Clients_label");

        verticalLayout->addWidget(Clients_label);

        Clients_list = new QListWidget(layoutWidget);
        Clients_list->setObjectName("Clients_list");

        verticalLayout->addWidget(Clients_list);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        Update_Button = new QPushButton(centralwidget);
        Update_Button->setObjectName("Update_Button");
        Update_Button->setGeometry(QRect(590, 10, 88, 26));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Client Information", nullptr));
        nationalID_label_2->setText(QCoreApplication::translate("MainWindow", "National ID", nullptr));
        user_NationalID_2->setText(QString());
        Balance_label_2->setText(QCoreApplication::translate("MainWindow", "Balance", nullptr));
        user_balance_2->setText(QString());
        phoneNumber_label_2->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        user_phone_Number_2->setText(QString());
        fullName_label_2->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        user_fullName_2->setText(QString());
        Clients_label->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Show INFO", nullptr));
        Update_Button->setText(QCoreApplication::translate("MainWindow", "Update ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
