// ex.22-raspr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <math.h>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	const double PI = 3.141592653589793238463;
	double x[101], y[101], z[101][101];	
	ofstream outf("raspr.txt");
	int i,p;
	double step,ox=2.0, oy=2.0, mx=3.0,my=3.0;
	step=0.3;
	x[0]=-15.0;
	y[0]=-15.0;
	for (i=1;i<101;i++){
	x[i]=x[i-1]+step;
	y[i]=y[i-1]+step;
	}
	for (p=0;p<101;p++){
	for (i=0;i<101;i++){
	z[p][i]=1/(ox*oy*2*PI)*exp(-pow(y[p]-my,2)/2/oy/oy)*exp(-pow(x[i]-mx,2)/2/ox/ox);
	outf << y[p] << " " << x[i] << " " << z[p][i] << endl;
	}}
	outf.close();
	cin.get();
	return 0;}