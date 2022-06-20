#ifndef CLIENTES_H
#define CLIENTES_H

#include <QDialog>

namespace Ui {
class clientes;
}

class clientes : public QDialog
{
    Q_OBJECT

public:
    explicit clientes(QWidget *parent = nullptr);
    ~clientes();

private:
    Ui::clientes *ui;
};

#endif // CLIENTES_H
