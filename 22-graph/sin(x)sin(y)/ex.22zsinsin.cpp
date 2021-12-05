// ex.22zsinsin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main()
{
	const double PI = 3.141592653589793238463;
	double x[101], y[101], xx[101], yy[101], z[101][101];	
	ofstream outf("zsinsin.txt");
	int i,p;
	double step,k=0.0;
	x[0]=0;
	xx[0]=0;
	y[0]=0;
	yy[0]=0;
	step=2*PI /100;
	//outf << x[0] << " " << y[0] << endl;
	for (i=1;i<101;i++){
	k=k+step;
	x[i]=k;
	y[i]=k;
	xx[i]=sin(k);
	yy[i]=sin(k);
	//outf << x[i] << " " << y[i] << endl;
	}
	for (p=0;p<101;p++){
	for (i=0;i<101;i++){
	z[p][i]=yy[p]*xx[i];
	outf << y[p] << " " << x[i] << " " << z[p][i] << endl;
	}}
	outf.close();
	cin.get();
	return 0;}