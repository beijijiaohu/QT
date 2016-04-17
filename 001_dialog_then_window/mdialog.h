#ifndef MDIALOG_H
#define MDIALOG_H

#include <QDialog>

namespace Ui {
class MDialog;
}

class MDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MDialog(QWidget *parent = 0);
    ~MDialog();

private:
    Ui::MDialog *ui;
};

#endif // MDIALOG_H
