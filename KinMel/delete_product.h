#ifndef DELETE_PRODUCT_H
#define DELETE_PRODUCT_H

#include <QDialog>

namespace Ui {
class delete_product;
}

class delete_product : public QDialog
{
    Q_OBJECT

public:
    explicit delete_product(QWidget *parent = nullptr);
    ~delete_product();

private slots:
    void on_pushButton_clicked();

private:
    Ui::delete_product *ui;
};

#endif // DELETE_PRODUCT_H
