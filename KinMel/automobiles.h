#ifndef AUTOMOBILES_H
#define AUTOMOBILES_H

#include <QDialog>

namespace Ui {
class Automobiles;
}

class Automobiles : public QDialog
{
    Q_OBJECT

public:
    explicit Automobiles(QWidget *parent = nullptr);
    ~Automobiles();

private:
    Ui::Automobiles *ui;
};

#endif // AUTOMOBILES_H
