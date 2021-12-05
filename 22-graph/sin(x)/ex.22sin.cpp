#include "stdafx.h"
#include<iostream>
#include <math.h>
#include <fstream>
using namespace std;



int main()
{
	const double PI = 3.141592653589793238463;
	double x[101], y[101];	
	ofstream outf("Sin.txt");
	int i;
	double step;
	x[0]=0;
	y[0]=0;
	step=2*PI /100;
	outf << x[0] << " " << y[0] << endl;
	for (i=1;i<101;i++){
	x[i]=x[i-1]+step;
	y[i]=sin(x[i]);
	outf << x[i] << " " << y[i] << endl;
	}
	outf.close();
	cin.get();
	return 0;
}