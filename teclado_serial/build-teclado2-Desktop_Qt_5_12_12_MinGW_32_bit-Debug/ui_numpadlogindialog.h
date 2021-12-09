/********************************************************************************
** Form generated from reading UI file 'numpadlogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPADLOGINDIALOG_H
#define UI_NUMPADLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <dunumerickeypushbutton.h>

QT_BEGIN_NAMESPACE

class Ui_NumPadLogInDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    DuNumericKeyPushButton *setePushButton;
    DuNumericKeyPushButton *quatroPushButton;
    DuNumericKeyPushButton *umPushButton;
    QPushButton *clearPushButton;
    QVBoxLayout *verticalLayout_2;
    DuNumericKeyPushButton *oitoPushButton;
    DuNumericKeyPushButton *cincoPushButton;
    DuNumericKeyPushButton *doisPushButton;
    DuNumericKeyPushButton *zeroPushButton;
    QVBoxLayout *verticalLayout_3;
    DuNumericKeyPushButton *novePushButton;
    DuNumericKeyPushButton *seisPushButton;
    DuNumericKeyPushButton *tresPushButton;
    QPushButton *enterPushButton;

    void setupUi(QDialog *NumPadLogInDialog)
    {
        if (NumPadLogInDialog->objectName().isEmpty())
            NumPadLogInDialog->setObjectName(QString::fromUtf8("NumPadLogInDialog"));
        NumPadLogInDialog->resize(522, 657);
        layoutWidget = new QWidget(NumPadLogInDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 50, 381, 551));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout_4->addWidget(lcdNumber);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        setePushButton = new DuNumericKeyPushButton(layoutWidget);
        setePushButton->setObjectName(QString::fromUtf8("setePushButton"));

        verticalLayout->addWidget(setePushButton);

        quatroPushButton = new DuNumericKeyPushButton(layoutWidget);
        quatroPushButton->setObjectName(QString::fromUtf8("quatroPushButton"));

        verticalLayout->addWidget(quatroPushButton);

        umPushButton = new DuNumericKeyPushButton(layoutWidget);
        umPushButton->setObjectName(QString::fromUtf8("umPushButton"));

        verticalLayout->addWidget(umPushButton);

        clearPushButton = new QPushButton(layoutWidget);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));

        verticalLayout->addWidget(clearPushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        oitoPushButton = new DuNumericKeyPushButton(layoutWidget);
        oitoPushButton->setObjectName(QString::fromUtf8("oitoPushButton"));

        verticalLayout_2->addWidget(oitoPushButton);

        cincoPushButton = new DuNumericKeyPushButton(layoutWidget);
        cincoPushButton->setObjectName(QString::fromUtf8("cincoPushButton"));

        verticalLayout_2->addWidget(cincoPushButton);

        doisPushButton = new DuNumericKeyPushButton(layoutWidget);
        doisPushButton->setObjectName(QString::fromUtf8("doisPushButton"));

        verticalLayout_2->addWidget(doisPushButton);

        zeroPushButton = new DuNumericKeyPushButton(layoutWidget);
        zeroPushButton->setObjectName(QString::fromUtf8("zeroPushButton"));

        verticalLayout_2->addWidget(zeroPushButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        novePushButton = new DuNumericKeyPushButton(layoutWidget);
        novePushButton->setObjectName(QString::fromUtf8("novePushButton"));

        verticalLayout_3->addWidget(novePushButton);

        seisPushButton = new DuNumericKeyPushButton(layoutWidget);
        seisPushButton->setObjectName(QString::fromUtf8("seisPushButton"));

        verticalLayout_3->addWidget(seisPushButton);

        tresPushButton = new DuNumericKeyPushButton(layoutWidget);
        tresPushButton->setObjectName(QString::fromUtf8("tresPushButton"));

        verticalLayout_3->addWidget(tresPushButton);

        enterPushButton = new QPushButton(layoutWidget);
        enterPushButton->setObjectName(QString::fromUtf8("enterPushButton"));

        verticalLayout_3->addWidget(enterPushButton);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(NumPadLogInDialog);

        QMetaObject::connectSlotsByName(NumPadLogInDialog);
    } // setupUi

    void retranslateUi(QDialog *NumPadLogInDialog)
    {
        NumPadLogInDialog->setWindowTitle(QApplication::translate("NumPadLogInDialog", "Senha", nullptr));
        setePushButton->setText(QApplication::translate("NumPadLogInDialog", "7", nullptr));
        quatroPushButton->setText(QApplication::translate("NumPadLogInDialog", "4", nullptr));
        umPushButton->setText(QApplication::translate("NumPadLogInDialog", "1", nullptr));
        clearPushButton->setText(QApplication::translate("NumPadLogInDialog", "CLEAR", nullptr));
        oitoPushButton->setText(QApplication::translate("NumPadLogInDialog", "8", nullptr));
        cincoPushButton->setText(QApplication::translate("NumPadLogInDialog", "5", nullptr));
        doisPushButton->setText(QApplication::translate("NumPadLogInDialog", "2", nullptr));
        zeroPushButton->setText(QApplication::translate("NumPadLogInDialog", "0", nullptr));
        novePushButton->setText(QApplication::translate("NumPadLogInDialog", "9", nullptr));
        seisPushButton->setText(QApplication::translate("NumPadLogInDialog", "6", nullptr));
        tresPushButton->setText(QApplication::translate("NumPadLogInDialog", "3", nullptr));
        enterPushButton->setText(QApplication::translate("NumPadLogInDialog", "ENTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumPadLogInDialog: public Ui_NumPadLogInDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPADLOGINDIALOG_H
