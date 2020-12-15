#include "automobiles.h"
#include "ui_automobiles.h"
#include <QFile>

Automobiles::Automobiles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Automobiles)
{
    ui->setupUi(this);
    setWindowTitle("Automobiles");
    QFile inFile("C:/Users/user/Documents/KinMel/product_database/Automobiles.txt");
    inFile.open(QFile::ReadOnly | QFile::Text);
    ui->label->setText(inFile.readAll());
    inFile.close();
}
Automobiles::~Automobiles()
{
    delete ui;
}
