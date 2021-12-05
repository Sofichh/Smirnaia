// ex.22xsin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <math.h>
#include <fstream>
using namespace std;



int main()
{
	const double PI = 3.141592653589793238463;
	double x[201], y[201];	
	ofstream outf("xsinx.txt");
	int i;
	x[0]=-100;
	y[0]=x[0]*sin(x[0]);
	outf << x[0]<< " "<< y[0] << endl;
	for (i=1;i<201;i++){
	x[i]=x[i-1]+1;
	y[i]=x[i]*sin(x[i]);
	outf << x[i];
	outf << " " ;
	outf << y[i] << endl;
	}
	outf.close();
	cin.get();
	return 0;
}
