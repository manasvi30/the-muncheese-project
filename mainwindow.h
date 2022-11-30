#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

#include <QDialog>
#include <rating.h>>

QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QDialog
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();



private slots:
    void on_pushButton_menu1_clicked();

    void on_pushButton_menu2_clicked();

    void on_pushButton_menu3_clicked();

    void on_pushButton_menu4_clicked();

    void on_pushButton_menu5_clicked();

    void on_pushButton_menu6_clicked();

    void on_pushButton_menu7_clicked();

    void  on_pushButton_view_clicked();


    void on_pushButton_pay_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_confirm_clicked();

    void on_pushButton_on_clicked();

    void on_pushButton_sam_clicked();

    void on_pushButton_ff_clicked();

    void on_pushButton_nach_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_car_clicked();

    void on_pushButton_spagetti_clicked();

    void on_pushButton_steak_clicked();

    void on_pushButton_naan_clicked();

    void on_pushButton_bibim_clicked();

    void on_pushButton_cali_clicked();

    void on_pushButton_wings_clicked();

    void on_pushButton_hot_clicked();

    void on_pushButton_salmon_clicked();

    void on_pushButton_adobo_clicked();

    void on_pushButton_curry_clicked();

    void on_pushButton_taco_clicked();
    void on_pushButton_red_clicked();
    void on_pushButton_cheese_clicked();
    void on_pushButton_chocolate_clicked();
    void on_pushButton_black_clicked();
    void on_pushButton_brownie_clicked();
    void on_pushButton_cookies_clicked();
    void on_pushButton_butter_clicked();
    void on_pushButton_vanilla_clicked();
    void on_pushButton_strawberry_clicked();
    void on_pushButton_choc_clicked();


    void on_pushButton_cup_clicked();
    void on_pushButton_chocoo_clicked();

    void on_pushButton_stra_clicked();

    void on_pushButton_van_clicked();

    void on_pushButton_oreo_clicked();

    void on_pushButton_vir_clicked();

    void on_pushButton_lemon_clicked();

    void on_pushButton_blood_clicked();

    void on_pushButton_pina_clicked();

    void on_pushButton_coke_clicked();

    void on_pushButton_fanta_clicked();

    void on_pushButton_slice_clicked();

    void on_pushButton_dew_clicked();

    void on_pushButton_rice_clicked();

    void on_pushButton_fish_clicked();

    void on_pushButton_hot_2_clicked();

    void on_pushButton_dough_clicked();

    void on_pushButton_tart_clicked();

    void on_pushButton_salad_clicked();

    void on_pushButton_pho_clicked();

    void on_pushButton_dump_clicked();

    void on_pushButton_egg_clicked();

    void on_pushButton_wrap_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();





    void on_pushButton_ok_clicked();

    void on_pushButton_EXIT_clicked();

    void on_listWidget_cart_currentRowChanged(int currentRow);

    void on_pushButton_review_clicked();

private:
    Ui::mainwindow *ui;
    rating *rating;
    int nSelected ;
};
#endif // MAINWINDOW_H
