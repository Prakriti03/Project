#ifndef SELLPRODUCT_H
#define SELLPRODUCT_H

#include <QDialog>

namespace Ui {
class sellproduct;
}

class sellproduct : public QDialog
{
    Q_OBJECT

public:
    explicit sellproduct(QString,QWidget *parent = nullptr);
    ~sellproduct();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sellproduct *ui;
};

#endif // SELLPRODUCT_H
