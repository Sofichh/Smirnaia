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
	cout << "Задумайте число N от 1 до 100, а я угадаю!" << endl;
	hb=100;
	lb=0;
	while(ans != 3){
		cout << "N больше "<< num << "? (1-да, 2-нет, 3-равно)" << endl;
		cin >> ans;
		
		if (ans==1)){
		lb=num;
		s=(hb-lb)/2;
		num=num+s;}
		k++;
		if (ans==2){
		hb=num;
		s=(hb-lb)/2;
		num=num-s; }
		}
	cout << "Вы задумали " << num << "! А я молодец!" << endl;
	cout << "Количество попыток: " << k << endl;
	cin.get();
	cin.get();
return 0;}

