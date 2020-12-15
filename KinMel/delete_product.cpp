#include "delete_product.h"
#include "ui_delete_product.h"
#include <QFile>
#include "sellproduct.h"
#include <QPointer>

delete_product::delete_product(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_product)
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

}

delete_product::~delete_product()
{
    delete ui;
}

void delete_product::on_pushButton_clicked()
{
    /*QString code=ui->lineEdit->text();
    QString category=ui->comboBox->currentText();
    QFile inFile("C:/Users/user/Documents/KinMel/product_database/"+category+".txt");
    if(inFile.open(QFile::ReadOnly | QFile::Text))
    {


    int k,j;
    k=0;

    //inFile.seekg(0,ios::beg);
    //while(inFile.read((char *)&prod[k],sizeof(prod[k])))
    //{
    //++k;
    //}
    while (!inFile.atEnd())
    {
       QString line = inFile.readLine();
       if(line==NULL)
        k++;
    }
    j=k;
    inFile.close();
    if(inFile.open(QFile::WriteOnly | QFile::Text))
    {
        for(k=0;k<j;k++)
        {
            if(code==prod.i)
    {
    inFile.write((char *)&prod,sizeof(prod));
    }
    }

    //cout<<"Record Deleted!!!"<<endl;
    inFile.close();
    //break;
    Aa
            QFile inputFile(fileName);
            if (inputFile.open(QIODevice::ReadOnly))
            {
               QTextStream in(&inputFile);
               while (!in.atEnd())
               {
                  QString line = in.readLine();
                  ...
               }
               inputFile.close();
            }*/

}


