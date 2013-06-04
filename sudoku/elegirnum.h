#ifndef ELEGIRNUM_H
#define ELEGIRNUM_H

#include <QDialog>

namespace Ui {
class ElegirNum;
}

class ElegirNum : public QDialog
{
    Q_OBJECT
    
public:
    explicit ElegirNum(QWidget *parent = 0);
    ~ElegirNum();
    
private:
    Ui::ElegirNum *ui;
};

#endif // ELEGIRNUM_H
