#include "clientes.h"
#include "ui_clientes.h"

clientes::clientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clientes)
{
    ui->setupUi(this);
}

clientes::~clientes()
{
    delete ui;
}
