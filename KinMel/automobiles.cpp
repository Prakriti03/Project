#include "automobiles.h"
#include "ui_automobiles.h"

Automobiles::Automobiles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Automobiles)
{
    ui->setupUi(this);
}

Automobiles::~Automobiles()
{
    delete ui;
}
