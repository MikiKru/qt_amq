#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <cstdlib>
#include "time.h"
#include <QList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}

static QString board = "_________";
int cat = 0;
int rat = 0;
void assignCatToBoard(){
    srand(time(NULL));
    int cat = rand() % 10;
}
void assignRatToBoard(){
    srand(time(NULL));
    do{
    int rat = rand() % 10;
    }while(cat == rat);
}


void MainWindow::on_pb11_clicked()
{
assignCatToBoard();
}

void MainWindow::on_pb12_clicked()
{

}

void MainWindow::on_pb13_clicked()
{

}

void MainWindow::on_pb21_clicked()
{

}

void MainWindow::on_pb22_clicked()
{

}

void MainWindow::on_pb23_clicked()
{

}

void MainWindow::on_pb31_clicked()
{

}

void MainWindow::on_pb32_clicked()
{

}

void MainWindow::on_pb33_clicked()
{

}
