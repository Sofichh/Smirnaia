// ex7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
using namespace std;
int main(){
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	int num,s,ans=0, k=0,hb,lb;
	num=50;
	cout << "Zadumayte chislo N ot 1 do 100, a ya ugadayu!" << endl;
	hb=100;
	lb=0;
	while(ans != 3){
		cout << "N bol'she"<< num << "? (1-da, 2-net, 3-ravno)" << endl;
		cin >> ans;
		
		if ((ans<2)&&(ans<3)){
		lb=num;
		s=(hb-lb)/2;
		num=num+s;}
		k++;
		if ((ans<3)&&(ans>1)){
		hb=num;
		s=(hb-lb)/2;
		num=num-s; }
		}
	cout << " Wi zadumali " << num << "! A ya molodets!" << endl;
	cout << " Kolichestvo popitok: " << k << endl;
	cin.get();
	cin.get();
return 0;}

