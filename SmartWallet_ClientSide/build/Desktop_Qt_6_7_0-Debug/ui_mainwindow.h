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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SignIn_Button;
    QPushButton *newWallet_Button;
    QFrame *phoneNumber_frame;
    QLineEdit *phoneNumber_lineEdit;
    QLabel *phoneNumber_label;
    QFrame *frame;
    QLineEdit *password_lineEdit;
    QLabel *password_label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(859, 374);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SignIn_Button = new QPushButton(centralwidget);
        SignIn_Button->setObjectName("SignIn_Button");
        SignIn_Button->setGeometry(QRect(540, 130, 181, 61));
        SignIn_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);\n"
"color: rgb(61, 56, 70);"));
        newWallet_Button = new QPushButton(centralwidget);
        newWallet_Button->setObjectName("newWallet_Button");
        newWallet_Button->setGeometry(QRect(540, 210, 181, 61));
        newWallet_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);\n"
"color: rgb(61, 56, 70);"));
        phoneNumber_frame = new QFrame(centralwidget);
        phoneNumber_frame->setObjectName("phoneNumber_frame");
        phoneNumber_frame->setGeometry(QRect(80, 110, 301, 81));
        phoneNumber_frame->setFrameShape(QFrame::NoFrame);
        phoneNumber_frame->setFrameShadow(QFrame::Raised);
        phoneNumber_lineEdit = new QLineEdit(phoneNumber_frame);
        phoneNumber_lineEdit->setObjectName("phoneNumber_lineEdit");
        phoneNumber_lineEdit->setGeometry(QRect(10, 40, 261, 26));
        phoneNumber_label = new QLabel(phoneNumber_frame);
        phoneNumber_label->setObjectName("phoneNumber_label");
        phoneNumber_label->setGeometry(QRect(10, 10, 101, 18));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(80, 200, 301, 81));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        password_lineEdit = new QLineEdit(frame);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setGeometry(QRect(10, 40, 261, 26));
        password_lineEdit->setEchoMode(QLineEdit::Password);
        password_label = new QLabel(frame);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(10, 10, 66, 18));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SWallet", nullptr));
        SignIn_Button->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        newWallet_Button->setText(QCoreApplication::translate("MainWindow", "New SWallet", nullptr));
        phoneNumber_label->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        password_label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
