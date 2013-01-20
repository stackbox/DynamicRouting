#ifndef ROUTERTABLE_H
#define ROUTERTABLE_H
#define LOCAL -1

struct RouterTableItem
{
    int         dest;
    int         out;
    int         val;

};

class RouterTable
{
public:
    RouterTable();
    void        setTableItem (int dest,  int out,  int val);
    void        setTableOut  (int dest,  int out);
    void        setTableVal  (int dest,  int val);

    int         getTableOut  (int dest);
    int         getTableVal  (int dest);

private:
    struct RouterTableItem items[5];
};

#endif // ROUTERTABLE_H
