#include "showtable.h"
#include "ui_showtable.h"

ShowTable::ShowTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowTable)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(5);

}

ShowTable::~ShowTable()
{
    delete ui;

}

void ShowTable::addItem(int dest, int out, int val)
{
    ui->tableWidget->setItem(dest,0,new QTableWidgetItem(QString("Router")+QString::number(dest)));
    ui->tableWidget->setItem(dest,1,new QTableWidgetItem(QString::number(out)));
    ui->tableWidget->setItem(dest,2,new QTableWidgetItem(QString::number(val)));
}
