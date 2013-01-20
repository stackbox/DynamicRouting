#ifndef ROUTER_H
#define ROUTER_H

#include "routertable.h"
#include "routerflow.h"



class Router
{
public:
    Router();
    Router(int id);
   // void            initTable(int id);

    void        setNewItem  (int x,  int newOut,  int newVal);
    void        setNewOut   (int x,  int newOut);
    void        setNewCost  (int x,  int newVal);

    int         getOut(int dest);
    int         getCost(int dest);

    void        updateFlow(int id);
    int         getFlow(int dest);



private:
    int             id;
    RouterTable     table;
    RouterFlow      *flow;
};

#endif // ROUTER_H
