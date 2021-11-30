#include "numpadlogindialog.h"
#include "ui_numpadlogindialog.h"

#if defined(MY_DEBUG)
#include <QDebug>
#include <QResizeEvent>
#endif

#define PASSWORD 12345

NumPadLogInDialog::NumPadLogInDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NumPadLogInDialog)
{
    ui->setupUi(this);
    resizeKey(ui->enterPushButton, QSize(100, 100));
    resizeKey(ui->clearPushButton, QSize(100, 100));
    resize(560, 618);
    connectKeys();
}

NumPadLogInDialog::~NumPadLogInDialog()
{
    delete ui;
}

#if defined(MY_DEBUG)
void NumPadLogInDialog::resizeEvent(QResizeEvent *e)
{
    qDebug() << e->size();
    QDialog::resizeEvent(e);
}
#endif

void NumPadLogInDialog::on_clearPushButton_clicked()
{
    ui->lcdNumber->display(0);
}


void NumPadLogInDialog::on_enterPushButton_clicked()
{
    const double password = ui->lcdNumber->value();
    if (password == PASSWORD) {
        accept();
        return;
    }
    reject();
}

void NumPadLogInDialog::onKeyWasClicked(const QString &number)
{
    ui->lcdNumber->display(QString::number(ui->lcdNumber->value())+number);
}

void NumPadLogInDialog::resizeKey(QPushButton *key, const QSize &size) const
{
    key->setMaximumSize(size);
    key->setMaximumSize(size);
}

void NumPadLogInDialog::connectKeys()
{
    connect(ui->zeroPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->umPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->doisPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->tresPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->quatroPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->cincoPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->seisPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->setePushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->oitoPushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);
    connect(ui->novePushButton,&DuNumericKeyPushButton::keyWasClicked,this, &NumPadLogInDialog::onKeyWasClicked);

}

