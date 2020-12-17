#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include<signuppage.h>
#include<mainwindow.h>

#include <QDialog>

namespace Ui {
class homepage;
}

class homepage : public QDialog
{
    Q_OBJECT

public:
    explicit homepage(QString,QWidget *parent = nullptr);
    ~homepage();

private slots:


    void on_Form_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_clicked();

private:
    Ui::homepage *ui;
};

#endif // HOMEPAGE_H
