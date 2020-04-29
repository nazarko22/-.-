#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double x (int [3][3], int);
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    double a = 0.98,
            c = 1.1;
};
#endif // MAINWINDOW_H
