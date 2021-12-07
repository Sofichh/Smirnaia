// ex. 23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "raspr.h"
using namespace std;


int main()
{ 
	int size,k=0,chislo;
	cout << "Wwedite dlinu ocheredi" << endl;
	cin >> size;
	Fifo och1(size);
	for (k=0;k<size;k++){
	cout << "Wwedite chislo w ochered'" << endl;
	cin >> chislo;
	och1.push(chislo,och1.i);
	}
	och1.print();
	for (k=0;k<size;k++){
	och1.pop(och1.i);
	}
	och1.print();
	cout << "Wwedite dlinu steka" << endl;
	cin >> size;
	Lifo stack1(size);
	for (k=0;k<size;k++){
	cout << "Wwedite chislo w stek" << endl;
	cin >> chislo;
	stack1.push(chislo,stack1.i);
	}
	stack1.print();
	for (k=0;k<size;k++)
	stack1.pop(stack1.i);
	stack1.print();
cin.get();
cin.get();
}
