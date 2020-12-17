#ifndef APPARELS_AND_ACCESSORIES_H
#define APPARELS_AND_ACCESSORIES_H
#include <QDialog>

namespace Ui {
class Apparels_and_Accessories;
}

class Apparels_and_Accessories : public QDialog
{
    Q_OBJECT

public:
    explicit Apparels_and_Accessories(QWidget *parent = nullptr);
    ~Apparels_and_Accessories();

private:
    Ui::Apparels_and_Accessories *ui;
};

#endif // APPARELS_AND_ACCESSORIES_H
