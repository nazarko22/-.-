#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int b[3][3] ={ {1,2 ,3}, {4, 5, 6}, {7,8,9,}};
    double s = 0;
    for (int i(0); i < 3; i++)
    {
        s += a * x(b, i);
    }

    ui->result->setText(QString::number(s));
}

double MainWindow::x(int b[3][3], int i)
{
    double p1 = 1, p2 = 1;
    for (int j(0); j < 3; j++)
    {
        p1 *= a + b[i][j];
        p2 *= b[i][j] + c;
    }
    return p1 / (p2 + 1);
}
