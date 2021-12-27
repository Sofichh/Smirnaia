#include "stdafx.h"
#include<iostream>
#include "graph.h"
using namespace std;

int main()
{   int i;
	double cx,cy,size,coef;
	Square sc1(3,3,6);
	Circle c1(0,0,5);
    Square sc2(0,-9,5);
	Circle c2(5,4,9);
	Obj2D *massiv[4];
	massiv[0]=&sc1;
	massiv[1]=&c1;
	massiv[2]=&sc2;
	massiv[3]=&c2;
	for(i=0;i<4;i++){
	(*massiv[i]).show();
	}
	(*massiv[1]).rotate(45);
	(*massiv[0]).scale(0.5);
	(*massiv[2]).move(1,1);
	cout << " " << endl;
    cout << "Posle izmeneniya:" << endl;
	cout << " " << endl;
	for(i=0;i<4;i++){
	(*massiv[i]).show();
	}
    cin.get();
    cin.get();
}