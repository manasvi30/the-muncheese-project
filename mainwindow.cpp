#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <string>
#include <QString>
#include <QMessageBox>
#include <iostream>



void addvalues(int Id,QString Category,QString Item,int Price);
mainwindow::mainwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);

    QPixmap pix(":/image/Images/1.png");
    ui->label->setPixmap(pix);
    QPixmap pia(":/image/Images/mainn.png");
    ui->label_2->setPixmap(pia);
    QPixmap pib(":/image/Images/3 (2).png");
    ui->label_3->setPixmap(pib);
    QPixmap pic(":/image/Images/3 (1).png");
    ui->label_4->setPixmap(pic);
    QPixmap pid(":/image/Images/dess.png");
    ui->label_5->setPixmap(pid);
    QPixmap pie(":/image/Images/drinky.png");
    ui->label_6->setPixmap(pie);
    QPixmap pig(":/image/Images/bestu.png");
    ui->label_7->setPixmap(pig);
    QPixmap pii(":/image/Images/yy.png");
    ui->label_8->setPixmap(pii);
    QPixmap pik(":/image/Images/CART.png");
    ui->label_9->setPixmap(pik);
    QPixmap pil(":/image/Images/PAY.png");
    ui->label_10->setPixmap(pil);
    QPixmap pim(":/image/Images/RR.png");
    ui->label_11->setPixmap(pim);






    //connecting database stuffs
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Acer/Desktop/database/cart.db");
     if (!db.open())
         ui->label_database->setText("FAILED TO CONNECT");
     else
         ui->label_database->setText("connected");


    QString query="CREATE TABLE menuu("
            "Id integer,"
            "Category VARCHAR(20),"
            "Item VARCHAR(20),"
            "Price integer;";
     QSqlQuery qry;
     if(!qry.exec(query))
     {
         qDebug()<<"error creating a table";

}
     addvalues(1,"main","dumplings",200);
    db.close();



    //location
    ui->comboBox1->addItem("online");
            ui->comboBox1->addItem("pay during delivery");
            ui->comboBox2->addItem("koteshwor");
            ui->comboBox2->addItem("banepa");
            ui->comboBox2->addItem("bhaisepati");
            ui->comboBox2->addItem("bhaktapur");
            ui->comboBox2->addItem("tinkune");
            ui->comboBox2->addItem("tokha");
            ui->comboBox2->addItem("kapan");
            ui->comboBox2->addItem("sanepa");
ui->comboBox2->addItem("boudha");
ui->comboBox2->addItem("New road");
ui->comboBox2->addItem("jawalakhel");
ui->comboBox2->addItem("kumariparti");
ui->comboBox2->addItem("hatiiban");
ui->comboBox2->addItem("maitighar");
ui->comboBox2->addItem("thapathali");
}
struct itemprice
{
    std::string itemame;
    int itemprice;
};
int total=0;
int totall=0;

std::vector<itemprice> v;
mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_pushButton_menu1_clicked()
{
    ui->stackedWidget1->setCurrentIndex(1);
}


void mainwindow::on_pushButton_menu2_clicked()
{
    ui->stackedWidget1->setCurrentIndex(2);
}


void mainwindow::on_pushButton_menu3_clicked()
{
    ui->stackedWidget1->setCurrentIndex(3);
}



void mainwindow::on_pushButton_menu4_clicked()
{
    ui->stackedWidget1->setCurrentIndex(4);
}


void mainwindow::on_pushButton_menu5_clicked()
{
    ui->stackedWidget1->setCurrentIndex(5);
}



void mainwindow::on_pushButton_menu6_clicked()
{
    ui->stackedWidget1->setCurrentIndex(6);
}


void mainwindow::on_pushButton_menu7_clicked()
{
    ui->stackedWidget1->setCurrentIndex(7);
}

//adding items and price
void mainwindow::on_pushButton_view_clicked()
{
    ui->stackedWidget1->setCurrentIndex(8);

        ui->stackedWidget1->setCurrentIndex(8);
        std::string str;
        for(int i=0;i < int (v.size());i++)
        {
             str=std::to_string(i+1) +"\t"+v[i].itemame +"\t\t" + std::to_string(v[i].itemprice);
        ui->listWidget_cart->addItem(str.c_str());
        total += v[i].itemprice;
    }
        str = std::to_string(total);
        ui->total->setText(str.c_str());



}

//adding for delivery
void mainwindow::on_pushButton_pay_clicked()
{
    ui->stackedWidget1->setCurrentIndex(9);
    std::string str2;
    int delivery = 150;
    str2 = std::to_string(delivery);
    ui->label_delivery->setText(str2.c_str());
    std::string str3;
    totall= total + delivery;
    str3= std::to_string(totall);
    ui->label_totall->setText(str3.c_str());


}


void mainwindow::on_pushButton_back_clicked()
{
    ui->stackedWidget1->setCurrentIndex(0);
}



void mainwindow::on_pushButton_confirm_clicked()
{
    ui->stackedWidget1->setCurrentIndex(10);


}


void mainwindow::on_pushButton_on_clicked()
{
      itemprice ip;
ip.itemame= "onion rings";
ip.itemprice= 200;
v.push_back(ip);
}


void mainwindow::on_pushButton_sam_clicked()
{

   itemprice ip;
ip.itemame= "samosa";
ip.itemprice= 50;
v.push_back(ip);
}



void mainwindow::on_pushButton_ff_clicked()
{
    itemprice ip;
    ip.itemame= "french fries";
    ip.itemprice= 300;
    v.push_back(ip);
}



void mainwindow::on_pushButton_nach_clicked()
{
    itemprice ip;
    ip.itemame= "nachos";
    ip.itemprice= 350;
    v.push_back(ip);
}


void mainwindow::on_pushButton_11_clicked()
{
    itemprice ip;
    ip.itemame= "garlic bread";
    ip.itemprice= 180;
    v.push_back(ip);
}



void mainwindow::on_pushButton_car_clicked()
{

    itemprice ip;
ip.itemame= "carbonara";
ip.itemprice= 360;
v.push_back(ip);

}
void mainwindow::on_pushButton_spagetti_clicked()
{
    itemprice ip;
    ip.itemame= "spagetti";
    ip.itemprice= 300;
    v.push_back(ip);
}


void mainwindow::on_pushButton_steak_clicked()
{
    itemprice ip;
    ip.itemame= "steak";
    ip.itemprice= 600;
    v.push_back(ip);
}


void mainwindow::on_pushButton_naan_clicked()
{
    itemprice ip;
    ip.itemame= "naan";
    ip.itemprice= 50;
    v.push_back(ip);
}



void mainwindow::on_pushButton_bibim_clicked()
{
    itemprice ip;
    ip.itemame= "bibimbab";
    ip.itemprice= 350;
    v.push_back(ip);
}


void mainwindow::on_pushButton_cali_clicked()
{
    itemprice ip;
    ip.itemame= "cali roll";
    ip.itemprice= 4000;
    v.push_back(ip);
}


void mainwindow::on_pushButton_wings_clicked()
{
    itemprice ip;
    ip.itemame= "wings";
    ip.itemprice= 350;
    v.push_back(ip);
}


void mainwindow::on_pushButton_hot_clicked()
{
    itemprice ip;
    ip.itemame= "hot dog";
    ip.itemprice= 200;
    v.push_back(ip);
}


void mainwindow::on_pushButton_salmon_clicked()
{
    itemprice ip;
    ip.itemame= "salmon";
    ip.itemprice= 500;
    v.push_back(ip);
}


void mainwindow::on_pushButton_adobo_clicked()
{
    itemprice ip;
    ip.itemame= "adobo";
    ip.itemprice= 250;
    v.push_back(ip);
}


void mainwindow::on_pushButton_curry_clicked()
{
    itemprice ip;
    ip.itemame= "curry";
    ip.itemprice= 400;
    v.push_back(ip);
}


void mainwindow::on_pushButton_taco_clicked()
{
    itemprice ip;
    ip.itemame= "taco";
    ip.itemprice= 200;
    v.push_back(ip);
}
void mainwindow::on_pushButton_red_clicked()
{
    itemprice ip;
    ip.itemame= "red velvet";
    ip.itemprice= 180;
    v.push_back(ip);
}


void mainwindow::on_pushButton_cheese_clicked()
{
    itemprice ip;
    ip.itemame= "cheese cake";
    ip.itemprice= 150;
    v.push_back(ip);
}
void mainwindow::on_pushButton_chocolate_clicked()
{

    itemprice ip;
    ip.itemame= "chocolate cake";
    ip.itemprice= 160;
    v.push_back(ip);
}


void mainwindow::on_pushButton_black_clicked()
{

    itemprice ip;
    ip.itemame= "black forest";
    ip.itemprice= 200;
    v.push_back(ip);
}
void mainwindow::on_pushButton_vanilla_clicked()
{

    itemprice ip;
    ip.itemame= "vanilla icecream";
    ip.itemprice= 90;
    v.push_back(ip);
}


void mainwindow::on_pushButton_strawberry_clicked()
{

    itemprice ip;
    ip.itemame= "strawberry icecream";
    ip.itemprice= 90;
    v.push_back(ip);
}


void mainwindow::on_pushButton_choc_clicked()
{

    itemprice ip;
    ip.itemame= "chocolate icecream";
    ip.itemprice= 80;
    v.push_back(ip);
}


void mainwindow::on_pushButton_butter_clicked()
{
    itemprice ip;
    ip.itemame= "butterscotch";
    ip.itemprice= 80;
    v.push_back(ip);
}



void mainwindow::on_pushButton_cookies_clicked()
{
    itemprice ip;
    ip.itemame= "chocolate chip cookies";
    ip.itemprice= 50;
    v.push_back(ip);
}


void mainwindow::on_pushButton_brownie_clicked()
{
    itemprice ip;
    ip.itemame= "brownie";
    ip.itemprice= 145;
    v.push_back(ip);
}

void mainwindow::on_pushButton_cup_clicked()
{
    itemprice ip;
    ip.itemame= "cupcake";
    ip.itemprice= 50;
    v.push_back(ip);
}
void mainwindow::on_pushButton_chocoo_clicked()
{
    itemprice ip;
    ip.itemame= "chocolate milkshake";
    ip.itemprice= 300;
    v.push_back(ip);
}


void mainwindow::on_pushButton_stra_clicked()
{
    itemprice ip;
    ip.itemame= "strawberry milkshake";
    ip.itemprice= 280;
    v.push_back(ip);
}


void mainwindow::on_pushButton_van_clicked()
{
    itemprice ip;
    ip.itemame= "vanila milshake";
    ip.itemprice= 300;
    v.push_back(ip);
}


void mainwindow::on_pushButton_oreo_clicked()
{
    itemprice ip;
    ip.itemame= "oreo shake";
    ip.itemprice= 290;
    v.push_back(ip);
}



void mainwindow::on_pushButton_vir_clicked()
{
    itemprice ip;
    ip.itemame= "mojito";
    ip.itemprice= 180;
    v.push_back(ip);
}


void mainwindow ::on_pushButton_lemon_clicked()
{
    itemprice ip;
    ip.itemame= "lemonade";
    ip.itemprice= 200;
    v.push_back(ip);
}



void mainwindow::on_pushButton_blood_clicked()
{
    itemprice ip;
    ip.itemame= "bloody marry";
    ip.itemprice= 175;
    v.push_back(ip);
}


void mainwindow::on_pushButton_pina_clicked()
{
    itemprice ip;
    ip.itemame= "pina colada";
    ip.itemprice= 200;
    v.push_back(ip);
}


void mainwindow::on_pushButton_coke_clicked()
{
    itemprice ip;
    ip.itemame= "coke";
    ip.itemprice= 50;
    v.push_back(ip);
}


void mainwindow ::on_pushButton_fanta_clicked()
{
    itemprice ip;
    ip.itemame= "fanta";
    ip.itemprice= 50;
    v.push_back(ip);
}


void mainwindow::on_pushButton_slice_clicked()
{
    itemprice ip;
    ip.itemame= "slice";
    ip.itemprice= 50;
    v.push_back(ip);
}


void mainwindow::on_pushButton_dew_clicked()
{
    itemprice ip;
    ip.itemame= "Mountain Dew";
    ip.itemprice= 50;
    v.push_back(ip);
}



void mainwindow::on_pushButton_rice_clicked()
{
    itemprice ip;
    ip.itemame= "fried rice";
    ip.itemprice= 250;
    v.push_back(ip);
}


void mainwindow::on_pushButton_fish_clicked()
{
    itemprice ip;
    ip.itemame= "fish and chips";
    ip.itemprice= 600;
    v.push_back(ip);
}


void mainwindow::on_pushButton_hot_2_clicked()
{
    itemprice ip;
    ip.itemame= "hot wings";
    ip.itemprice= 400;
    v.push_back(ip);
}



void mainwindow::on_pushButton_dough_clicked()
{
    itemprice ip;
    ip.itemame= "doughnut";
    ip.itemprice= 80;
    v.push_back(ip);
}



void mainwindow::on_pushButton_tart_clicked()
{
    itemprice ip;
    ip.itemame= "chocolate tart";
    ip.itemprice= 300;
    v.push_back(ip);
}


void mainwindow::on_pushButton_salad_clicked()
{
    itemprice ip;
    ip.itemame= "salad";
    ip.itemprice= 180;
    v.push_back(ip);
}


void mainwindow::on_pushButton_pho_clicked()
{
    itemprice ip;
    ip.itemame= "pho";
    ip.itemprice= 400;
    v.push_back(ip);
}




void mainwindow::on_pushButton_dump_clicked()
{
    itemprice ip;
    ip.itemame= "dumplings";
    ip.itemprice= 200;
    v.push_back(ip);
}



void mainwindow::on_pushButton_egg_clicked()
{
    itemprice ip;
    ip.itemame= "egg roll";
    ip.itemprice= 200;
    v.push_back(ip);
}



void mainwindow::on_pushButton_wrap_clicked()
{
    itemprice ip;
    ip.itemame= "wrap";
    ip.itemprice= 190;
    v.push_back(ip);
}

//deleting of items in cart
void mainwindow::on_pushButton_del_clicked()
{
   QListWidgetItem *it = ui->listWidget_cart->takeItem(nSelected);
   delete it;
   std::string str1;
   for(int i=0;i < int (v.size());i++)
   {
         ui->listWidget_cart->addItem(str1.c_str());
        total =total-(v[nSelected].itemprice);
   }

   str1 = std::to_string(total);
   ui->total->setText(str1.c_str());

}


void mainwindow::on_listWidget_cart_currentRowChanged(int currentRow)
{
    nSelected = currentRow;
}


void mainwindow::on_pushButton_clicked()
{
    ui->stackedWidget1->setCurrentIndex(1);
}


void mainwindow::on_pushButton_5_clicked()
{
    ui->stackedWidget1->setCurrentIndex(4);
}


void mainwindow::on_pushButton_4_clicked()
{
    ui->stackedWidget1->setCurrentIndex(5);

}


void mainwindow::on_pushButton_3_clicked()
{
    ui->stackedWidget1->setCurrentIndex(6);
}


void mainwindow::on_pushButton_6_clicked()
{
     ui->stackedWidget1->setCurrentIndex(7);
}






//exit of the program
void mainwindow::on_pushButton_ok_clicked()
{

    QString location = ui->lineEdit_street->text();
    QString street = ui->lineEdit_phone->text();
     if (location =="  " && street =="  " )
     {
          QMessageBox::warning(this,"locationn","you have not enterd your data");

     }
     else{

         QMessageBox::information(this,"locationn","location is entered");
          ui->textEdit_1->insertPlainText("your order will be delivered within 30 mins..........");




     }

}


void mainwindow::on_pushButton_EXIT_clicked()
{
    close();

}


void addvalues(int Id,QString Category,QString Item,int Price)
{
    QSqlQuery qry;
   qry.prepare("INSERT INTO mennu("

                            "Id ,"
                           "Category,"
                           "Item ,"
                           "Price)"
               "VALUES(?,?,?,?);");
              qry.addBindValue(Id);
   qry.addBindValue(Category);
   qry.addBindValue(Item);
   qry.addBindValue(Price);
    if (!qry.exec())
    {
        qDebug()<<"error adding the value";
    }



}
