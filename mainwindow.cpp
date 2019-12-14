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
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 0){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 0){
        ui->lblMovesValue->setText("PRZEGRANA");
    }
    ui->pb11->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}

void MainWindow::on_pb12_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 1){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 1){
        ui->lblMovesValue->setText("PRZEGRANA");
    }
    ui->pb12->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}

void MainWindow::on_pb13_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 2){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 2){
        ui->lblMovesValue->setText("PRZEGRANA");
    }
    ui->pb13->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}

void MainWindow::on_pb21_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 3){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 3){
        ui->lblMovesValue->setText("PRZEGRANA");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb21->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}

void MainWindow::on_pb22_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 4){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 4){
        ui->lblMovesValue->setText("PRZEGRANA");
    } else {
        ui->start->setText("NIC");
    }
    ui->pb22->setDisabled(true);
}

void MainWindow::on_pb23_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 5){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 5){
        ui->lblMovesValue->setText("PRZEGRANA");
    }
    ui->pb23->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}



void MainWindow::on_pb31_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 6){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 6){
        ui->lblMovesValue->setText("PRZEGRANA");
    }
    ui->pb31->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}

void MainWindow::on_pb32_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 7){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 7){
        ui->lblMovesValue->setText("PRZEGRANA");
    }
    ui->pb32->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}

void MainWindow::on_pb33_clicked()
{
    moves --;
    ui->lblMovesValue->setText(QString::number(moves));
    if(cat == 8){
        ui->lblMovesValue->setText("WYGRANA");
    } else if(rat == 8){
        ui->lblMovesValue->setText("PRZEGRANA");
    }
    ui->pb33->setDisabled(true);
    if(moves == 0){
      ui->lblMovesValue->setText("PRZEGRANA");
    }
}


void MainWindow::on_start_clicked()
{
    moves = 3;
    assignCatToBoard();
    assignRatToBoard();
    ui->pb11->setDisabled(false);
    ui->pb12->setDisabled(false);
    ui->pb13->setDisabled(false);
    ui->pb21->setDisabled(false);
    ui->pb22->setDisabled(false);
    ui->pb23->setDisabled(false);
    ui->pb31->setDisabled(false);
    ui->pb32->setDisabled(false);
    ui->pb33->setDisabled(false);
}

