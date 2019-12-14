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

int cat = 0;
int rat = 0;
int moves = 3;
void assignCatToBoard(){
    srand(time(NULL));
    cat = rand() % 10;
}
void assignRatToBoard(){
    srand(time(NULL));
    do{
    rat = rand() % 10;
    }while(cat == rat);
}



void MainWindow::on_pb11_clicked()
{
    if(cat == 0){
        ui->start->setText("KOT");
    } else if(rat == 0){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb11->setDisabled(true);
}

void MainWindow::on_pb12_clicked()
{
    if(cat == 1){
        ui->start->setText("KOT");
    } else if(rat == 1){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb12->setDisabled(true);
}

void MainWindow::on_pb13_clicked()
{
    if(cat == 2){
        ui->start->setText("KOT");
    } else if(rat == 2){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb13->setDisabled(true);
}

void MainWindow::on_pb21_clicked()
{
    if(cat == 3){
        ui->start->setText("KOT");
    } else if(rat == 3){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb21->setDisabled(true);
}

void MainWindow::on_pb22_clicked()
{
    if(cat == 4){
        ui->start->setText("KOT");
    } else if(rat == 4){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb22->setDisabled(true);
}

void MainWindow::on_pb23_clicked()
{
    if(cat == 5){
        ui->start->setText("KOT");
    } else if(rat == 5){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb23->setDisabled(true);
}

void MainWindow::on_pb31_clicked()
{
    if(cat == 6){
        ui->start->setText("KOT");
    } else if(rat == 6){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb31->setDisabled(true);
}

void MainWindow::on_pb32_clicked()
{
    if(cat == 7){
        ui->start->setText("KOT");
    } else if(rat == 7){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb32->setDisabled(true);
}

void MainWindow::on_pb33_clicked()
{
    if(cat == 8){
        ui->start->setText("KOT");
    } else if(rat == 8){
        ui->start->setText("SZCZUR");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb33->setDisabled(true);
}


void MainWindow::on_start_clicked()
{
    moves = 3;
    assignCatToBoard();
    assignRatToBoard();
}
void MainWindow::on_pbStart_clicked()
{
    moves = 3;
    assignCatToBoard();
    assignRatToBoard();
}
void MainWindow::on_pushButton_clicked()
{
    moves = 3;
    assignCatToBoard();
    assignRatToBoard();
}
