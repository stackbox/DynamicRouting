#include "routertable.h"

RouterTable::RouterTable()
{
}

void RouterTable::setTableItem(int dest, int out, int val)
{
    this->setTableOut(dest,  out);
    this->setTableVal(dest,  val);
}

void RouterTable::setTableOut(int dest, int out)
{
    items[dest].dest     =      dest;
    items[dest].out      =      out;
}

void RouterTable::setTableVal(int dest, int val)
{
    items[dest].dest     =      dest;
    items[dest].val      =      val;
}


int RouterTable::getTableOut(int dest)
{
    return items[dest].out;
}

int RouterTable::getTableVal(int dest)
{
    return items[dest].val;
}
