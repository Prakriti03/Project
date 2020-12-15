#include "beauty_and_health.h"
#include "ui_beauty_and_health.h"
#include <QFile>

Beauty_and_Health::Beauty_and_Health(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Beauty_and_Health)
{
    ui->setupUi(this);
    setWindowTitle("Beauty & Health");
    QFile inFile("C:/Users/user/Documents/KinMel/product_database/Beauty & Health.txt");
    inFile.open(QFile::ReadOnly | QFile::Text);
    ui->label->setText(inFile.readAll());
    inFile.close();
}

Beauty_and_Health::~Beauty_and_Health()
{
    delete ui;
}
