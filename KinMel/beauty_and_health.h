#ifndef BEAUTY_AND_HEALTH_H
#define BEAUTY_AND_HEALTH_H

#include <QDialog>

namespace Ui {
class Beauty_and_Health;
}

class Beauty_and_Health : public QDialog
{
    Q_OBJECT

public:
    explicit Beauty_and_Health(QWidget *parent = nullptr);
    ~Beauty_and_Health();

private:
    Ui::Beauty_and_Health *ui;
};

#endif // BEAUTY_AND_HEALTH_H
