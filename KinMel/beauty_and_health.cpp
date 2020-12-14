#include "beauty_and_health.h"
#include "ui_beauty_and_health.h"

Beauty_and_Health::Beauty_and_Health(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Beauty_and_Health)
{
    ui->setupUi(this);
}

Beauty_and_Health::~Beauty_and_Health()
{
    delete ui;
}
