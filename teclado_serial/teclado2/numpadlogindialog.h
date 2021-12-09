#ifndef NUMPADLOGINDIALOG_H
#define NUMPADLOGINDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui
{
class NumPadLogInDialog;
}
QT_END_NAMESPACE

class NumPadLogInDialog : public QDialog
{
    Q_OBJECT

public:
    NumPadLogInDialog(QWidget *parent = nullptr);
    ~NumPadLogInDialog();
protected:
#if defined (MY_DEBUG)
    void resizeEvent(QResizeEvent *e) override;
#endif
private slots:
    void on_clearPushButton_clicked();
    void on_enterPushButton_clicked();
    void onKeyWasClicked(const QString &number);
private:
    void resizeKey(QPushButton *key, const QSize &size) const;
    void connectKeys();
    Ui::NumPadLogInDialog *ui;
};
#endif // NUMPADLOGINDIALOG_H
