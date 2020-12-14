#include "sellproduct.h"
#include "ui_sellproduct.h"
#include<QMessageBox>
#include<QTextStream>
#include<QFile>

#include<QLabel>


sellproduct::sellproduct(QString actual_un,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sellproduct)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Apparels & Accessories");
    ui->comboBox->addItem("Automobiles");
    ui->comboBox->addItem("Beauty & Health");
    ui->comboBox->addItem("Books & Learning");
    ui->comboBox->addItem("Computer & Peripherals");
    ui->comboBox->addItem("Electronics");
    ui->comboBox->addItem("Garments");
    ui->comboBox->addItem("Home,Furnishing & Appliances");
    ui->comboBox->addItem("Music Instruments");
    ui->comboBox->addItem("Pets & Pet Care");
    ui->comboBox->addItem("Sports and Fitness");
    ui->comboBox->addItem("Toys and Video Games");
    ui->label_8->setText(actual_un);

}

sellproduct::~sellproduct()
{
    delete ui;
}


void sellproduct::on_pushButton_clicked()
{
    QString p_username=ui->label_8->text();
    QString p_price=ui->lineEdit_3->text();
    QString p_name=ui->lineEdit->text();
    QString nego;
    QString usage;
    QString p_description=ui->lineEdit_2->text();
    if (ui->radioButton->isChecked())
        nego = "Negotiable";
    else
        nego = "Non-negotiable";
    if(ui->radioButton_3->isChecked())
        usage = "Used";
    else
        usage = "Unused";
    QString p_category=ui->comboBox->currentText();
    if(p_name==NULL || p_description==NULL || p_price==NULL)
        QMessageBox::warning(this,"title","Fill in the * blanks");
    QFile inFile("C:/Users/user/Documents/KinMel/user_database/"+p_username+".txt");
    if(inFile.open(QFile::ReadOnly | QFile::Text))
    {
        QTextStream in(&inFile);
        QString un,pw,email,num ;
        in >> un>>pw>>email>>num;
    QFile outFile("C:/Users/user/Documents/KinMel/product_database/"+p_category+".txt");


    if(outFile.open(QFile::WriteOnly | QFile::Append))
    {
        QTextStream out(&outFile);
        out<<"Product Details:-"<<'\n'<<"Name of product:"<<p_name<<'\n'
           <<"Description:"<<p_description<<'\n'<<"Price:"<<p_price<<'\n'
           <<nego<<'\n'<<usage<<'\n';
        out<<"Seller's Details:-"<<'\n'<<"Username:"<<p_username<<'\n'<<
             "Email:"<<email<<'\n'<<"Phone no.:"<<num<<'\n'<<'\n';

     }
    outFile.flush();
    outFile.close();
   }
}





