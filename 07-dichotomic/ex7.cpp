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
	cout << "��������� ����� N �� 1 �� 100, � � ������!" << endl;
	hb=100;
	lb=0;
	while(ans != 3){
		cout << "N ������ "<< num << "? (1-��, 2-���, 3-�����)" << endl;
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
	cout << "�� �������� " << num << "! � � �������!" << endl;
	cout << "���������� �������: " << k << endl;
	cin.get();
	cin.get();
return 0;}

