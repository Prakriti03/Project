#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QDialog>

namespace Ui {
class signuppage;
}

class signuppage : public QDialog
{
    Q_OBJECT

public:
    explicit signuppage(QWidget *parent = nullptr);
    ~signuppage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::signuppage *ui;
};

#endif // SIGNUPPAGE_H
