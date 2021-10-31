// ex.18.cpp : Defines the entry point for the console application.
//
//пересечение двух прямоуголников//
#include "stdafx.h"
#include<iostream>
#include <windows.h>
#include <fstream>
using namespace std;

class Crect{
public:
	const double x1L,y1L,x1R,y1R,x2L,y2L,x2R,y2R;
Crect(double _xl1,double _yl1,double _xr1,double _yr1,double _xl2,double _yl2,double _xr2,double _yr2) : x1L(_xl1),y1L(_yl1),x1R(_xr1),y1R(_yr1),x2L(_xl2),y2L(_yl2),x2R(_xr2),y2R(_yr2){}
	void peresechenie(){
	if(((x1L<=x2L<=x1R)&&(y1L<=y2R)&&(y2L<=y1R))||((x1L<=x2R<=x1R)&&(y1L<=y2R)&&(y2L<=y1R)))
		cout << "Peresekayutsya" << endl;
	else cout << "Ne peresekayutsya" << endl;
	}
};

int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
		double x1l, y1l, x1r, y1r, x2l, y2l, x2r, y2r;
		ifstream inf ("input.txt"); 
		inf >> x1l >> y1l >> x1r >> y1r>> x2l >> y2l >> x2r >> y2r;
		Crect pr1(x1l, y1l, x1r, y1r, x2l, y2l, x2r, y2r);
		pr1.peresechenie();
        cin.get();
        cin.get();
        return 0;
}

