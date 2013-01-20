#include "router.h"

Router::Router()
{
}

Router::Router(int id)
{
    this->id = id;
    this->flow = new RouterFlow(id);

    switch(id)
    {
    case 0:
        this->setNewItem(0,LOCAL,0);
        this->setNewItem(1,1,50);
        this->setNewItem(2,2,50);
        this->setNewItem(3,2,100);
        this->setNewItem(4,1,100);


        break;


    case 1:
        this->setNewItem(0,0,50);
        this->setNewItem(1,LOCAL,0);
        this->setNewItem(2,2,50);
        this->setNewItem(3,2,100);
        this->setNewItem(4,4,50);
        break;


    case 2:

        this->setNewItem(0,0,50);
        this->setNewItem(1,1,50);
        this->setNewItem(2,LOCAL,0);
        this->setNewItem(3,3,50);
        this->setNewItem(4,4,50);
        break;


    case 3:
        this->setNewItem(0,2,100);
        this->setNewItem(1,2,100);
        this->setNewItem(2,2,50);
        this->setNewItem(3,LOCAL,0);
        this->setNewItem(4,2,100);
        break;

    case 4:
        this->setNewItem(0,2,100);
        this->setNewItem(1,1,50);
        this->setNewItem(2,2,50);
        this->setNewItem(3,2,100);
        this->setNewItem(4,LOCAL,0);
        break;

    }
}

int Router::getOut(int dest)
{
    return this->table.getTableOut(dest);
}

int Router::getCost(int dest)
{
    return this->table.getTableVal(dest);
}

void Router::setNewItem(int x, int newOut, int newVal)
{
    table.setTableItem(x,newOut,newVal);
}

void Router::setNewCost(int x, int newVal)
{
    table.setTableVal(x,newVal);
}

void Router::setNewOut(int x, int newOut)
{
    table.setTableOut(x,newOut);
}


void Router::updateFlow(int id)
{
    this->flow->update(id);
}

int Router::getFlow(int dest)
{
    return this->flow->getFlowValue(dest);
}
