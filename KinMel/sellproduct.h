#ifndef SELLPRODUCT_H
#define SELLPRODUCT_H

#include <QDialog>
#include "delete_product.h"

namespace Ui {
class sellproduct;
}

class sellproduct : public QDialog
{
    Q_OBJECT
    int i;
    QString p_username;
    QString p_price; //int
    QString p_name;
    QString nego;
    QString usage;
    QString p_description;

public:
    explicit sellproduct(QString,QWidget *parent = nullptr);
    sellproduct();
    ~sellproduct();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sellproduct *ui;
    friend delete_product;
};
//sellproduct prod;
#endif // SELLPRODUCT_H
