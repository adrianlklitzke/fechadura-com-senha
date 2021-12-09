#include "numpadlogindialog.h"
#include "mainwindow.h"
#include "Widget.h"
#include "ui_Widget.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QApplication>
#include <QMessageBox>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    NumPadLogInDialog numPadLogIn;
    int numPadLogInResult;
    do {
        numPadLogInResult = numPadLogIn.exec();
        if (numPadLogInResult == QDialog::Rejected) {
            QMessageBox::warning(&numPadLogIn,
                "Advertencia", "Senha incorreta");
        }
    }while(numPadLogInResult == QDialog::Rejected);

    Widget w;
    w.show();


    return a.exec();
}
