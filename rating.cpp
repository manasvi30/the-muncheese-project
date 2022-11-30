#include "rating.h"
#include "ui_rating.h"
#include <QMessageBox>

rating::rating(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rating)
{
    ui->setupUi(this);
}

rating::~rating()
{
    delete ui;
}

void rating::on_pushButton_clicked()
{
    if(ui->radioButton1->isChecked())
    {
        QMessageBox::information(0,"thank you","thank you for your rating");
    }
    if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(0,"thank you","thank you for your rating");
    }
    if(ui->radioButton_3->isChecked())
    {
        QMessageBox::information(0,"thank you","thank you for your rating");
    }
    if(ui->radioButton_4->isChecked())
    {
        QMessageBox::information(0,"thank you","thank you for your rating");
    }
    if(ui->radioButton_5->isChecked())
    {
        QMessageBox::information(0,"thank you","thank you for your rating");
    }

}

