#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "servermanager.h"
#include <QMainWindow>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void newClientConnected(QTcpSocket * client);
    void ClientDisconnected(QTcpSocket * client);
    void on_pushButton_clicked();

    void on_Update_Button_clicked();

private: // Fields
    Ui::MainWindow *ui;
    ServerManager * server ;
private: // Methods
    void setupServer();
    void displayClientsList();
    void setClientInfo(QString, QList<QString>);
};
#endif // MAINWINDOW_H
