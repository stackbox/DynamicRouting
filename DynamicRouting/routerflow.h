#ifndef ROUTERFLOW_H
#define ROUTERFLOW_H



#include <QVector>

/*

class FlowWindow
{
public:
    FlowWindow();

    int getLiner();

    QVector <int>  flowRecord;


};

*/

struct FlowWindow
{
    QVector <int>  flowRecord;
    int            val;
};



class RouterFlow
{
public:
    RouterFlow();
    RouterFlow(int id);
    void        update(int id);
    int         getFlowValue(int dest);

private:

    FlowWindow  slideFlow[5];
 //  int         val[5];

};

#endif // ROUTERFLOW_H
