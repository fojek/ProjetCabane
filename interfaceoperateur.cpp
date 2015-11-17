#include "interfaceoperateur.h"
#include "ui_interfaceoperateur.h"
#include "global.hpp"
#include <stdio.h>
#include <QTime>

InterfaceOperateur::InterfaceOperateur(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InterfaceOperateur)
{
    ui->setupUi(this);
    refreshHMI = new QTimer(this);
    refreshHMI->setInterval(50);
    timerCount = 0;

    connect(refreshHMI, SIGNAL(timeout()), this, SLOT(timerTimeout()));
}

InterfaceOperateur::~InterfaceOperateur()
{
    delete ui;
}

void InterfaceOperateur::on_pushButton_6_clicked()
{
    ui->Pompe3Statut->setStyleSheet("QLabel { background-color : green; }");
    ui->Pompe3Statut->setText("En marche");
    digitalWrite (0, HIGH) ;
}

void InterfaceOperateur::on_pushButton_5_clicked()
{
    ui->Pompe3Statut->setStyleSheet("QLabel { background-color : red; }");
    ui->Pompe3Statut->setText("Arret");
    digitalWrite (0,  LOW) ;
}

void InterfaceOperateur::on_pushButton_10_clicked()
{
    refreshHMI->start();
}

void InterfaceOperateur::on_pushButton_9_clicked()
{
    printf("State : %i\n", digitalRead(ECHO));
}

void InterfaceOperateur::timerTimeout()
{
    --timerCount;
    if (timerCount <= 0)
    {
        refreshHMI->stop();
        refreshHMI->start();
        ui->Bassin2->setValue(bassin2Level);
    }
}
