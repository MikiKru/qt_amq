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
int moves = 3;
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
void MainWindow::on_pushButton_clicked()
{
    moves = 3;
    assignCatToBoard();
    assignRatToBoard();
    board = "_________";
}

void MainWindow::on_pb11_clicked()
{
    if(board[0] == "K"){
        ui->start->setText("KOT");
    } else if(board[0] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb11->setDisabled(true);
}

void MainWindow::on_pb12_clicked()
{
    if(board[1] == "K"){
        ui->start->setText("KOT");
    } else if(board[1] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb12->setDisabled(true);
}

void MainWindow::on_pb13_clicked()
{
    if(board[2] == "K"){
        ui->start->setText("KOT");
    } else if(board[2] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb13->setDisabled(true);
}

void MainWindow::on_pb21_clicked()
{
    if(board[3] == "K"){
        ui->start->setText("KOT");
    } else if(board[3] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb21->setDisabled(true);
}

void MainWindow::on_pb22_clicked()
{
    if(board[4] == "K"){
        ui->start->setText("KOT");
    } else if(board[4] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb22->setDisabled(true);
}

void MainWindow::on_pb23_clicked()
{
    if(board[5] == "K"){
        ui->start->setText("KOT");
    } else if(board[5] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb23->setDisabled(true);
}

void MainWindow::on_pb31_clicked()
{
    if(board[6] == "K"){
        ui->start->setText("KOT");
    } else if(board[6] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb31->setDisabled(true);
}

void MainWindow::on_pb32_clicked()
{
    if(board[7] == "K"){
        ui->start->setText("KOT");
    } else if(board[7] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb32->setDisabled(true);
}

void MainWindow::on_pb33_clicked()
{
    if(board[8] == "K"){
        ui->start->setText("KOT");
    } else if(board[8] == "R"){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb33->setDisabled(true);
}


