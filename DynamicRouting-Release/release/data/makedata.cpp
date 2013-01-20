

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    double random(double,double);
    srand(unsigned(time(0)));
    ofstream fout("flowdata.txt");
    
    	fout << int(random(10,100));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(10,100));
    	fout << endl;
    
   	    fout << int(random(20,80));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(20,80));
    	fout << endl;
    	
        fout << int(random(25,45));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(25,45));
    	fout << endl;
    	
    	fout << int(random(5,93));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(5,93));
    	fout << endl;
    	
    	fout << int(random(7,73));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(7,73));
    	fout << endl;
    	
    	fout << int(random(35,84));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(35,84));
    	fout << endl;
    	
    	fout << int(random(43,89));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(43,89));
    	fout << endl;
    	
    	fout << int(random(15,65));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(15,65));
    	fout << endl;
    	
    	fout << int(random(22,78));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(22,78));
    	fout << endl;
    	
    	fout << int(random(8,89));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(8,89));
    	fout << endl;
    	
    	fout << int(random(24,98));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(24,98));
    	fout << endl;
    	
    	fout << int(random(56,98));
    	for(int j = 1; j < 30; j++)
    		fout << " " <<int(random(56,98));
    
    
    return 0;
}

double random(double start, double end)
{
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}
