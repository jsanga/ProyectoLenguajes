#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>

namespace Ui {
class Tablero;
}

class Tablero : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Tablero(QWidget *parent = 0);
    ~Tablero();
    
private:
    Ui::Tablero *ui;
};

#endif // TABLERO_H
