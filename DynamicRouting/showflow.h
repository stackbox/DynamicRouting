#ifndef SHOWFLOW_H
#define SHOWFLOW_H

#include <QWidget>

namespace Ui {
class ShowFlow;
}

class ShowFlow : public QWidget
{
    Q_OBJECT
    
public:
    explicit ShowFlow(QWidget *parent = 0);
    void addItem(int dest, int cost);
    ~ShowFlow();
    
private:
    Ui::ShowFlow *ui;
};

#endif // SHOWFLOW_H
