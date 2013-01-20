#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showtable.h"
#include "showflow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    routers[0] = new Router(0);
    routers[1] = new Router(1);
    routers[2] = new Router(2);
    routers[3] = new Router(3);
    routers[4] = new Router(4);

    connect(this->ui->action,SIGNAL(triggered()),this,SLOT(updateFlowWindow()));
    connect(this->ui->actionQuit,SIGNAL(triggered()),this,SLOT(close()));
    connect(this->ui->btnShow1,SIGNAL(clicked()),this,SLOT(slotShowTable()));
    connect(this->ui->btnShow2,SIGNAL(clicked()),this,SLOT(slotShowFlow()));
    connect(this->ui->btnCompute,SIGNAL(clicked()),this,SLOT(slotCompute()));
    connect(this->ui->btnConver,SIGNAL(clicked()),this,SLOT(slotSwitchMessage()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateFlowWindow()
{
    this->routers[0]->updateFlow(0);
    this->routers[1]->updateFlow(1);
    this->routers[2]->updateFlow(2);
    this->routers[3]->updateFlow(3);
    this->routers[4]->updateFlow(4);


    int sum;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == j) continue;
            else {
                sum = 0;
                int nowPos = i;
                while(j != nowPos)
                {
                    int nextPos = routers[nowPos]->getOut(j);
                    sum += routers[nowPos]->getFlow(nextPos);
                    nowPos = nextPos;
                }
            }
            routers[i]->setNewCost(j,sum);
        }
    }

    QMessageBox::about(NULL, "Status", QString("data has been updated!"));
}

void MainWindow::slotShowTable()
{
    int chooseID = ui->comboTable->currentIndex();
    ShowTable*  st = new ShowTable();
    for(int i = 0; i < 5; i++)
    {
        st->addItem(i,routers[chooseID]->getOut(i),routers[chooseID]->getCost(i));
    }
    st->show();
}

void MainWindow::slotShowFlow()
{
    int chooseID = ui->comboFlow->currentIndex();
    ShowFlow*   sf = new ShowFlow();

    for(int i = 0; i < 5; i++)
    {
        sf->addItem(i,routers[chooseID]->getFlow(i));
    }
    sf->show();
}

void MainWindow::slotCompute()
{
    int N = 20;

    while(N--)
    {
        this->slotSwitchMessage();
    }


    QMessageBox::about(0,"compute","compute finished!!");
}

void MainWindow::slotSwitchMessage()
{

    this->slotSwitchAtomMessage(0,1);
    this->slotSwitchAtomMessage(0,2);
    this->slotSwitchAtomMessage(1,0);
    this->slotSwitchAtomMessage(1,2);
    this->slotSwitchAtomMessage(1,4);
    this->slotSwitchAtomMessage(2,0);
    this->slotSwitchAtomMessage(2,1);
    this->slotSwitchAtomMessage(2,3);
    this->slotSwitchAtomMessage(2,4);

    this->slotSwitchAtomMessage(3,2);

    this->slotSwitchAtomMessage(4,1);
    this->slotSwitchAtomMessage(4,2);


}

void MainWindow::slotSwitchAtomMessage(int m, int n)
{
    for(int x = 0; x < 5; x++)
    {
        if(routers[m]->getCost(x) > routers[n]->getCost(x) + routers[m]->getFlow(n))
        {
            routers[m]->setNewOut(x,n);
            routers[m]->setNewCost(x,routers[n]->getCost(x) + routers[m]->getFlow(n));
        }
    }
}
