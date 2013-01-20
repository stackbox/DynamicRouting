#ifndef SHOWTABLE_H
#define SHOWTABLE_H

#include <QWidget>

namespace Ui {
class ShowTable;
}

class ShowTable : public QWidget
{
    Q_OBJECT
    
public:
    explicit ShowTable(QWidget *parent = 0);
    void addItem(int dest, int out, int val);

    ~ShowTable();
    
private:
    Ui::ShowTable *ui;
};

#endif // SHOWTABLE_H
