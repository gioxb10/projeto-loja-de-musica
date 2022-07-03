#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabela2->horizontalHeader()->setVisible(true);
    ui->tabela2->setRowCount(4);
    QStringList títulos;
    ui->tabela2->setHorizontalHeaderLabels(títulos);
    ui->tabela2->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tabela2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tabela2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tabela2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tabela2->verticalHeader()->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget->setHidden(0);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentIndex(2);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
}

