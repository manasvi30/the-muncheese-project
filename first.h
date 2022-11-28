#ifndef FIRST_H
#define FIRST_H

#include <QDialog>
#include "loginp.h"

namespace Ui {
class first;
}

class first : public QDialog
{
    Q_OBJECT

public:
    explicit first(QWidget *parent = nullptr);
    ~first();

private slots:
    void on_pushButton_clicked();

private:
    Ui::first *ui;
    loginp *loginp;
};

#endif // FIRST_H
