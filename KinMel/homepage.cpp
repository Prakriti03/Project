#include "homepage.h"
#include "ui_homepage.h"
#include "sellproduct.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include "apparels_and_accessories.h"
#include "automobiles.h"
#include "beauty_and_health.h"


homepage::homepage(QString actual_un,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
    ui->label_3->setText(actual_un);
}

homepage::~homepage()
{
    delete ui;
}



void homepage::on_Form_clicked()
{


    QString un=ui->label_3->text();
    sellproduct sell(un);
    sell.setModal(true);
    sell.exec();
}

void homepage::on_pushButton_2_clicked()
{
       Apparels_and_Accessories cat;
       cat.setModal(true);
       cat.exec();
}


void homepage::on_pushButton_3_clicked()
{
    Automobiles cat;
    cat.setModal(true);
    cat.exec();

}

void homepage::on_pushButton_4_clicked()
{
    Beauty_and_Health cat;
    cat.setModal(true);
    cat.exec();

}

