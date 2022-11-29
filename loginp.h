#ifndef LOGINP_H
#define LOGINP_H

#include <QDialog>

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


#include "signupp.h"


namespace Ui {
class loginp;
}

class loginp : public QDialog
{
    Q_OBJECT

public:
    explicit loginp(QWidget *parent = nullptr);
    ~loginp();

private slots:
    void on_pushButton_log_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::loginp *ui;
    signupp *signup;
    mainwindow *mainwindow;
};

#endif // LOGINP_H
