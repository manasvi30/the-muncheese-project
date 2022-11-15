#include "first.h"
#include "ui_first.h"

first::first(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::first)
{
    ui->setupUi(this);

    QSqlDatabase my=QSqlDatabase::addDatabase("QSQLITE");
    my.setDatabaseName("C:/Users/HP/sqlite3/login.db");

    if(!my.open())
         ui->label->setText("Failed to open the database");
    else
         ui->label->setText("Connected");

}

first::~first()
{
    delete ui;
}


void first::on_pushButton_new_clicked()
{
 hide();
 Login = new loginp(this);
 Login->show();
}

