#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "router.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);




    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    Router*  routers[5];


public slots:
  //  void            slotSwitchMessage();
  //  void            slotSwitchAtomMessage();
    void updateFlowWindow();
    void slotShowTable();
    void slotShowFlow();
    void slotCompute();
    void slotSwitchMessage();
    void slotSwitchAtomMessage(int m,int n);
};

#endif // MAINWINDOW_H
