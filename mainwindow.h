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

private slots:
    void on_pb11_clicked();

    void on_pb12_clicked();

    void on_pb13_clicked();

    void on_pb21_clicked();

    void on_pb22_clicked();

    void on_pb23_clicked();

    void on_pb31_clicked();

    void on_pb32_clicked();

    void on_pb33_clicked();

    void on_start_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
