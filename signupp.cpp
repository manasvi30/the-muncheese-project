#include "signupp.h"
#include "ui_signupp.h"
#include <regex>
#include<QMessageBox>

signupp::signupp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signupp)
{
    ui->setupUi(this);


    QPixmap pix(":/image/Images/White Brown Minimalist Healthy Diet Guide Presentation.jpg");
    ui->label->setPixmap(pix);


    QSqlDatabase my=QSqlDatabase::addDatabase("QSQLITE");
    my.setDatabaseName("C:/Users/HP/OneDrive/Documents/Project/the-muncheese-project/the-muncheese-project/login.db");

    if(!my.open())
         ui->label_7->setText("Failed to open the database");
    else
         ui->label_7->setText("Connected...");

}

signupp::~signupp()
{
    delete ui;
}

void signupp::on_pushButton_signup_clicked()
{

    QString fullname = ui ->txt_name_6->text();
    QString email = ui ->txt_email_6->text();
    QString username = ui ->txt_user_6->text();
    QString password = ui ->txt_password_6->text();
    QString confirm  = ui ->txt_confirm_6->text();
    QString pattern="(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+";
    QRegularExpression re("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    QRegularExpressionMatch match = re.match(email);
    bool hasMatch = match.hasMatch();


    if(password != confirm){

          QMessageBox::information(this,"Inserted","Password and confirm password must be same");
    }
    else if(fullname=="" && username == "" && email =="" ){
                  QMessageBox::information(this,"Inserted","Every boxes must be filled");
             }
    else if(!hasMatch)
    {

         QMessageBox::information(this,"Inserted","email must contain . and @");
    }


    else{

    //Run our inster query
    QSqlQuery qry;
    qry.prepare("INSERT INTO signup(fullname,email,username,password)"
                "VALUES( :fullname, :email, :username, :password)");

    qry.bindValue(":fullname",fullname);
    qry.bindValue(":email",email);
    qry.bindValue(":username",username);
    qry.bindValue(":password",password);




    if(qry.exec()){
        QMessageBox::information(this,"Inserted","Data inserted sucessfully");
    }
    else{
        QMessageBox::information(this, "Not Inserted", "Data is not inserted");
    }

}
    if(ui->checkBox->isChecked()){
        QMessageBox::information(this, "Sign up","You are signed up. You can use this login for future use. For now we will login for you.");
        hide();
                mainwindow = new class mainwindow(this);
                mainwindow->show();
    }
    else{
       QMessageBox::information(this,"Sign up","You must agree the policy to continue.");}

}





void signupp::on_checkBox_stateChanged(int arg1)
{
    if(arg1){ }
    else{
        QMessageBox::information(this,"Sign up","You must agree the policy to continue.");
    }
}

