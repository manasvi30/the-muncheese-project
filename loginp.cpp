#include "loginp.h"
#include "ui_loginp.h"
#include<QMessageBox>

loginp::loginp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginp)
{
    ui->setupUi(this);
    QPixmap pix(":/image/Images/login.jpg");
    ui->label_pic1->setPixmap(pix);

    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/HP/OneDrive/Documents/Project/the-muncheese-project/the-muncheese-project/login.db");

//    QString username = ui-> lineEdit_username->text();
//    QString password = ui-> lineEdit_password->text();


    if(!mydb.open())
         ui->label_7->setText("Failed to open the database");
    else
         ui->label_7->setText("Connected....");




}

loginp::~loginp()
{
    delete ui;
}

void loginp::on_pushButton_log_clicked()
{


}


void loginp::on_pushButton_clicked()
{
    hide();
    signup = new signupp(this);
    signup->show();

}



void loginp::on_pushButton_2_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    QSqlQuery query(QSqlDatabase::database("QSQLITE"));

    query.prepare(QString("SELECT * FROM signup WHERE username = :username AND password = :password"));

    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if(!query.exec()){
        QMessageBox::information(this,"Failed", "Query Failed to execute");
    }
    else{
        while(query.next()){
            QString usernameFromDB = query.value(3).toString();
            QString passwordFromDB = query.value(4).toString();

            if(usernameFromDB == username && passwordFromDB == password){
               QMessageBox::information(this, "Success", "Login Success");
               hide();
                       mainwindow = new class mainwindow(this);
                       mainwindow->show();
            }else{
                QMessageBox::information(this,"Failed","Login Failed");
            }

        }
     }
}

