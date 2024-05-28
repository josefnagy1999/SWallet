#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clientmanager.h"
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
    void SigninResponse(QByteArray data);
private slots:
    void on_newWallet_Button_clicked();

    void on_SignIn_Button_clicked();

private:
    Ui::MainWindow *ui;
    ClientManager * clientM;
};
#endif // MAINWINDOW_H
