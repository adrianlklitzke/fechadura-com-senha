/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *abrir_PushButton;
    QPushButton *fechar_PushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(552, 657);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::RichText);

        verticalLayout->addWidget(label);

        abrir_PushButton = new QPushButton(Widget);
        abrir_PushButton->setObjectName(QString::fromUtf8("abrir_PushButton"));

        verticalLayout->addWidget(abrir_PushButton);

        fechar_PushButton = new QPushButton(Widget);
        fechar_PushButton->setObjectName(QString::fromUtf8("fechar_PushButton"));

        verticalLayout->addWidget(fechar_PushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Bem Vindo</span></p></body></html>", nullptr));
        abrir_PushButton->setText(QApplication::translate("Widget", "ABRIR PORTA", nullptr));
        fechar_PushButton->setText(QApplication::translate("Widget", "FECHAR PORTA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
