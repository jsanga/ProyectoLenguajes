#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class MenuPrincipal;
}

class MenuPrincipal : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MenuPrincipal(QWidget *parent = 0);
    ~MenuPrincipal();
    
private:
    Ui::MenuPrincipal *ui;
};

#endif // MENUPRINCIPAL_H
