#include "showflow.h"
#include "ui_showflow.h"

ShowFlow::ShowFlow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowFlow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(5);
}

ShowFlow::~ShowFlow()
{
    delete ui;
}

void ShowFlow::addItem(int dest, int cost)
{
    ui->tableWidget->setItem(dest,0,new QTableWidgetItem(QString("Router")+QString::number(dest)));
    ui->tableWidget->setItem(dest,1,new QTableWidgetItem(QString::number(cost)));
}
