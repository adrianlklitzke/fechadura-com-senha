#include "numpadlogindialog.h"
#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>

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
    MainWindow window;
    window.show();

    return a.exec();
}
