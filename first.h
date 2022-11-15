#ifndef FIRST_H
#define FIRST_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

#include "loginp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class first; }
QT_END_NAMESPACE

class first : public QMainWindow
{
    Q_OBJECT

public:
    first(QWidget *parent = nullptr);
    ~first();

private slots:
    void on_pushButton_new_clicked();

private:
    Ui::first *ui;
    loginp *Login;
};
#endif // FIRST_H
