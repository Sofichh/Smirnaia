// 12.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <cstdlib>
#include<iostream>
#include <windows.h>
using namespace std;

unsigned long long int fact(int a){
	unsigned long long int res=1;
	for(int i=1;i<=a;i++)
		res=res*i;
	return res;
}

void obnulenie (int *alphabet, int *tochka,int *number,char* string){
            *alphabet=0;
                *tochka=0;
                *number=0;
                delete[] string; 
        string = 0;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num,uslovie=0;
    int length;
	int alphabet=0, number=0, i, tochka=0;
	while(uslovie!=1){
    cout << "Wwedite dlinu wwodimogo wami chisla + 1: " << endl;
	cin >> length;
    char *string = new char [length];  
	cout << "Wwedite zeloe pologitelnoe chislo ne bol'she 100000: " << endl;
	cin >> string;
    for (i=0; string[i]!='\0'; i++){
        if (isalpha(string[i])!= 0)
            alphabet++;
        else if (isdigit(string[i])!= 0)
            number++;
		else if (string[i]=='.')
			tochka++;
    }
	if((alphabet!=0)||(tochka>1)){
		cout << "Wi wweli stroku. Wwedite chislo esche raz." << endl;
		obnulenie(&alphabet, &tochka, &number, string);}
	else if ((string[0]=='-') && (alphabet==0)){
		cout << "Wi wweli otricatelnoe chislo. Wwedite chislo esche raz." << endl;
	    obnulenie(&alphabet, &tochka, &number, string);}
	else if ((tochka==1) && (alphabet==0)){
		cout << "Wi wweli nezeloe chislo. Wwedite chislo esche raz." << endl;
		obnulenie(&alphabet, &tochka, &number, string);}
	else if (atoi(string)>100000){
	cout << "Wi wweli chislo bol'sche 100000. Wwedite chislo esche raz." << endl;
		obnulenie(&alphabet, &tochka, &number, string);}
	else { num=atoi(string);
	uslovie ++;
	delete[] string; 
    string = 0;}
	}
	cout << "Factorial chisla: ";
	cout << fact(num) << endl;
	cin.get();
	cin.get();
	return 0;
}
