#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>
#include <QGridLayout>
#include <QTextEdit>

namespace Ui {
class Tablero;
}

class Tablero : public QMainWindow
{
    Q_OBJECT

public:
    explicit Tablero(QWidget *parent = 0);
    ~Tablero();

private slots:
    void on_pushButton_clicked();


private:
    void initGui();
    Ui::Tablero *ui;
    QTextEdit *numberTextEdit[9];
};

#endif // TABLERO_H


/*#ifndef TABLERO_H
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

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tablero *ui;
};

#endif // TABLERO_H
*/
