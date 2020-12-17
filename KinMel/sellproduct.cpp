#include "sellproduct.h"
#include "ui_sellproduct.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>

sellproduct::sellproduct(QString actual_un,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sellproduct)
{
    ui->setupUi(this);
    setWindowTitle("Form");
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
    p_username=ui->label_8->text();
    p_price=ui->lineEdit_3->text(); //int
    p_name=ui->lineEdit->text();
    p_description=ui->lineEdit_2->text();
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
        QMessageBox::warning(this,"Message","Fill in the * blanks");
    else
    {
        QFile inFile("C:/Users/user/Documents/KinMel/user_database/"+p_username+".txt");
        if(inFile.open(QFile::ReadOnly | QFile::Text))
        {
            QTextStream in(&inFile);
            QString un,pw,email,num;
            in>>un>>pw>>email>>num;
            QFile cin_File("C:/Users/user/Documents/KinMel/product_database/counter.txt");
            if(cin_File.open(QFile::ReadOnly | QFile::Text))
            {
                QTextStream in(&cin_File);
                in>>i;
                QFile outFile("C:/Users/user/Documents/KinMel/product_database/"+p_category+".txt");
                if(outFile.open(QFile::WriteOnly | QFile::Append))
                {
                    QTextStream out(&outFile);
                    out<<"Code no.:"<<i<<'\n'<<"Product Details:-"<<'\n'<<"Name of product:"<<p_name<<'\n'
                    <<"Description:"<<p_description<<'\n'<<"Price:"<<p_price<<'\n'
                    <<nego<<'\n'<<usage<<'\n';
                    out<<"Seller's Details:-"<<'\n'<<"Username:"<<p_username<<'\n'<<
                    "Email:"<<email<<'\n'<<"Phone no.:"<<num<<'\n'<<'\n';
                }
                outFile.flush();
                outFile.close();
            }
            cin_File.close();
            QFile cout_File("C:/Users/user/Documents/KinMel/product_database/counter.txt");
            if(cout_File.open(QFile::WriteOnly | QFile::Text))
            {
                QTextStream out(&cout_File);
                out<<i+1;
            }
            cout_File.flush();
            cout_File.close();
   }
   inFile.close();
   QString s = QString::number(i);
   QMessageBox::information(this,"Message","Form submission successful.Your product code is "+s);
   hide();
  }
}




