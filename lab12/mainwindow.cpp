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


void MainWindow::on_add_clicked()
{
    ui->res->setText(QString::number(ui->inp1->text().toDouble() + ui->inp2->text().toDouble()));

}

void MainWindow::on_min_clicked()
{
    ui->res->setText(QString::number(ui->inp1->text().toDouble() - ui->inp2->text().toDouble()));
}

void MainWindow::on_mul_clicked()
{
    ui->res->setText(QString::number(ui->inp1->text().toDouble() * ui->inp2->text().toDouble()));
}

void MainWindow::on_div_clicked()
{
    ui->res->setText(QString::number(ui->inp1->text().toDouble() / ui->inp2->text().toDouble()));
}

void MainWindow::on_sin_clicked()
{
    ui->res->setText(QString::number(qSin(ui->inp1->text().toDouble())));
}
