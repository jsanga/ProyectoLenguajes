#ifndef DECISION_H
#define DECISION_H

#include <QDialog>

namespace Ui {
class Decision;
}

class Decision : public QDialog
{
    Q_OBJECT
    
public:
    explicit Decision(QWidget *parent = 0);
    ~Decision();
    
private:
    Ui::Decision *ui;
};

#endif // DECISION_H
