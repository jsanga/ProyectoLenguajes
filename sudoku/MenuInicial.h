#ifndef MENUINICIAL_H
#define MENUINICIAL_H

#include <QMainWindow>

namespace Ui {
class MenuInicial;
}

class MenuInicial : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MenuInicial(QWidget *parent = 0);
    ~MenuInicial();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::MenuInicial *ui;
};

#endif // MENUINICIAL_H
