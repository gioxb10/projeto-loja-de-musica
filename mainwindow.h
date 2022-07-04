#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

 namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void iniciar( void );

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_tableWidget_2_cellActivated(int row, int column);

    void on_tabela1_cellActivated(int row, int column);

    void on_btn_carregardados_clicked();

    void on_btn_carregardadosguita_clicked();

    void on_tabela2_cellActivated(int row, int column);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
