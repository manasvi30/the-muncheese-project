#include "first.h"
#include "ui_first.h"

first::first(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::first)
{
    ui->setupUi(this);
    QPixmap pix(":/image/Images/11.png");
    ui->label->setPixmap(pix);
}

first::~first()
{
    delete ui;
}

void first::on_pushButton_clicked()
{
    hide();
    loginp = new class loginp(this);
    loginp->show();
}

