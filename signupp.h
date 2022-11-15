#ifndef SIGNUPP_H
#define SIGNUPP_H

#include <QDialog>

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>


namespace Ui {
class signupp;
}

class signupp : public QDialog
{
    Q_OBJECT

public:
    explicit signupp(QWidget *parent = nullptr);
    ~signupp();

private slots:
    void on_pushButton_signup_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::signupp *ui;
};

#endif // SIGNUPP_H
