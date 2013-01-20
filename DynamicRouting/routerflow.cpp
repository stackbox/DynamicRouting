#include "routerflow.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <QMessageBox>
#include <string>
#include <QFile>
#include <QTextStream>

using namespace std;
/*
FlowWindow::FlowWindow()
{
    for(int i = 0; i < 30; i++)
    {
        flowRecord.push_back(50);
    }
}
*/

RouterFlow::RouterFlow()
{
}

RouterFlow::RouterFlow(int id)
{
    switch(id)
    {

    case 0:
        slideFlow[0].val = -1;
        slideFlow[1].val = 50;
        slideFlow[2].val = 50;
        slideFlow[3].val = -1;
        slideFlow[4].val = -1;



        break;

    case 1:
        slideFlow[0].val = 50;
        slideFlow[1].val = -1;
        slideFlow[2].val = 50;
        slideFlow[3].val = -1;
        slideFlow[4].val = 50;

        break;

    case 2:
        slideFlow[0].val = 50;
        slideFlow[1].val = 50;
        slideFlow[2].val = -1;
        slideFlow[3].val = 50;
        slideFlow[4].val = 50;

        break;

     case 3:
        slideFlow[0].val = -1;
        slideFlow[1].val = -1;
        slideFlow[2].val = 50;
        slideFlow[3].val = -1;
        slideFlow[4].val = -1;

        break;

     case 4:
        slideFlow[0].val = -1;
        slideFlow[1].val = -1;
        slideFlow[2].val = 50;
        slideFlow[3].val = -1;
        slideFlow[4].val = -1;

        break;



    }
}

void RouterFlow::update(int id)
{
    switch(id)
    {
    case 0:
    {


        //ifstream fin0("C:\\Users\\lenovo\\Desktop\\DynamicRouting\\DynamicRouting-Release\\release\\data\\flow0.txt");
        ifstream fin0("data\\flow0.txt");
        string s0 ;
        getline(fin0,s0);


        istringstream strin0(s0);
        QMessageBox::about(NULL, "Status", QString::QString(s0.c_str()));
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin0 >> tmp;
            this->slideFlow[1].flowRecord.push_back(tmp);
        }
        getline(fin0,s0);
        strin0.str(s0);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin0 >> tmp;
            this->slideFlow[2].flowRecord.push_back(tmp);
        }

        fin0.close();

        int sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[1].flowRecord.begin(); iter != slideFlow[1].flowRecord.end();iter++)
        {
            sum +=  *iter;
        }

        slideFlow[1].val = sum/30;

        sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[2].flowRecord.begin(); iter != slideFlow[2].flowRecord.end();iter++)
        {
            sum += *iter;
        }

        slideFlow[2].val = sum/30;



/*

         QFile file0(":/data/data/flow0.txt");

         if(!file0.open(QIODevice::ReadOnly | QIODevice::Text)) {
             QMessageBox::about(NULL, "About Me", "My blog is www.awuit.com.");
             }
         QTextStream fin0(&file0);

         QString temp;
         temp = fin0.readLine();
         QMessageBox::about(NULL, "Status", temp);

        */

        break;
    }

    case 1:
    {
        ifstream fin1("data\\flow1.txt");
        string s1;
        getline(fin1,s1);
        istringstream strin1(s1);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin1 >> tmp;
            this->slideFlow[0].flowRecord.push_back(tmp);
        }
        getline(fin1,s1);
        strin1.str(s1);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin1 >> tmp;
            this->slideFlow[2].flowRecord.push_back(tmp);
        }
        getline(fin1,s1);
        strin1.str(s1);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin1 >> tmp;
            this->slideFlow[4].flowRecord.push_back(tmp);
        }
        fin1.close();

        int sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[0].flowRecord.begin(); iter != slideFlow[0].flowRecord.end();iter++)
        {
            sum +=  *iter;
        }

        slideFlow[0].val = sum/30;

        sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[2].flowRecord.begin(); iter != slideFlow[2].flowRecord.end();iter++)
        {
            sum += *iter;
        }

        slideFlow[2].val = sum/30;

        sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[4].flowRecord.begin(); iter != slideFlow[4].flowRecord.end();iter++)
        {
            sum += *iter;
        }

        slideFlow[4].val = sum/30;

        break;
    }
    case 2:
    {
        ifstream fin2("data\\flow2.txt");
        string s2;
        getline(fin2,s2);
        istringstream strin2(s2);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin2 >> tmp;
            this->slideFlow[0].flowRecord.push_back(tmp);
        }
        getline(fin2,s2);
        strin2.str(s2);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin2 >> tmp;
            this->slideFlow[1].flowRecord.push_back(tmp);
        }
        getline(fin2,s2);
        strin2.str(s2);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin2 >> tmp;
            this->slideFlow[3].flowRecord.push_back(tmp);
        }
        getline(fin2,s2);
        strin2.str(s2);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin2 >> tmp;
            this->slideFlow[4].flowRecord.push_back(tmp);
        }
        fin2.close();


        int sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[0].flowRecord.begin(); iter != slideFlow[0].flowRecord.end();iter++)
        {
            sum +=  *iter;
        }

        slideFlow[0].val = sum/30;

        sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[1].flowRecord.begin(); iter != slideFlow[1].flowRecord.end();iter++)
        {
            sum += *iter;
        }
        slideFlow[1].val = sum/30;

        sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[3].flowRecord.begin(); iter != slideFlow[3].flowRecord.end();iter++)
        {
            sum += *iter;
        }

        slideFlow[3].val = sum/30;

        sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[4].flowRecord.begin(); iter != slideFlow[4].flowRecord.end();iter++)
        {
            sum += *iter;
        }

        slideFlow[4].val = sum/30;


        break;
    }


    case 3:
    {
        ifstream fin3("data\\flow3.txt");
        string s3;
        getline(fin3,s3);
        istringstream strin3(s3);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin3 >> tmp;
            this->slideFlow[2].flowRecord.push_back(tmp);
        }

        fin3.close();

        int sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[2].flowRecord.begin(); iter != slideFlow[2].flowRecord.end();iter++)
        {
            sum +=  *iter;
        }
        slideFlow[2].val = sum/30;

        break;
    }


    case 4:
    {
        ifstream fin4("data\\flow4.txt");
        string s4;
        getline(fin4,s4);
        istringstream strin4(s4);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin4 >> tmp;
            this->slideFlow[1].flowRecord.push_back(tmp);
        }
        getline(fin4,s4);
        strin4.str(s4);
        for(int i = 0; i < 30; i++)
        {
            int tmp;
            strin4 >> tmp;
            this->slideFlow[2].flowRecord.push_back(tmp);
        }

        fin4.close();

        int sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[1].flowRecord.begin(); iter != slideFlow[1].flowRecord.end();iter++)
        {
            sum +=  *iter;
        }

        slideFlow[1].val = sum/30;

        sum = 0;
        for(QVector <int>::Iterator iter = slideFlow[2].flowRecord.begin(); iter != slideFlow[2].flowRecord.end();iter++)
        {
            sum += *iter;
        }

        slideFlow[2].val = sum/30;

        break;
    }

    }
}

int RouterFlow::getFlowValue(int dest)
{
    return slideFlow[dest].val;
}
