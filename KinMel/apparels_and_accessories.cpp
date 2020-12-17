#include "apparels_and_accessories.h"
#include "ui_apparels_and_accessories.h"
#include <QFile>
#include <QTextStream>
#include <QLabel>

Apparels_and_Accessories::Apparels_and_Accessories(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Apparels_and_Accessories)
{
    ui->setupUi(this);
    setWindowTitle("Apparels & Accessories");
    QFile inFile("C:/Users/user/Documents/KinMel/product_database/Apparels & Accessories.txt");
    inFile.open(QFile::ReadOnly | QFile::Text);
    ui->label->setText(inFile.readAll());
    inFile.close();
}
Apparels_and_Accessories::~Apparels_and_Accessories()
{
    delete ui;
}
