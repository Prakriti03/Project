#include "delete_product.h"
#include "ui_delete_product.h"
#include <QFile>
#include "sellproduct.h"
#include <QPointer>
#include <QTextStream>
#include <QMessageBox>

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
    QString code=ui->lineEdit->text();
    QString category=ui->comboBox->currentText();
    QFile inFile("C:/Users/user/Documents/KinMel/product_database/"+category+".txt");
    int k=0;
    QString a[400];
    if(inFile.open(QFile::ReadOnly | QFile::Text))
    {
        while(!inFile.atEnd())
        {
            QString line = inFile.readLine();
            a[k]=line;
            k=k+1;
        }
    }
    inFile.close();
    QFile outFile("C:/Users/user/Documents/KinMel/product_database/"+category+".txt");
    if(outFile.open(QFile::WriteOnly | QFile ::Text))
    {
        int j=0;
        while(j<k) //  for code number line
        {
            if(a[j]!="Code no.:"+code+'\n')
            {
                for(int i=j;i<j+12;i++)
                {
                    QTextStream out(&outFile);
                    out<<a[i];
                }
            }
            j=j+12;
        }
    }
    outFile.flush();
    outFile.close();
    hide();
}


