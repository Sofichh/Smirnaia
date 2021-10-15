// ex.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned long long ch1=0,ch2=1,ch;
	int N,uslovie=0;
    int length;
	int alphabet=0, number=0, i, tochka=0;
	while(uslovie!=1){
    cout << "Wwedite dlinu wwodimogo wami chisla + 1: " << endl;
	cin >> length;
    char *string = new char [length];  
	cout << "Wwedite zeloe chislo N ot 1 do 100: " << endl;
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
		alphabet=0;
		tochka=0;
		number=0;
		delete[] string; 
        string = 0;}
	else if ((string[0]=='-') && (alphabet==0)){
		cout << "Wi wweli otricatelnoe chislo. Wwedite chislo esche raz." << endl;
	    alphabet=0;
		tochka=0;
		number=0;
		delete[] string; 
		string = 0;}
	else if ((tochka==1) && (alphabet==0)){
		cout << "Wi wweli nezeloe chislo. Wwedite chislo esche raz." << endl;
		alphabet=0;
		tochka=0;
		number=0;
	    delete[] string; 
        string = 0;}
	else if (atoi(string)>100){
	cout << "Wi wweli chislo bol'sche 100. Wwedite chislo esche raz." << endl;
		alphabet=0;
		tochka=0;
		number=0;
	    delete[] string; 
        string = 0;}
	else { N=atoi(string);
	uslovie ++;
	delete[] string; 
    string = 0;}
	}

	while(i<N){
	cout << ch1 << " ";
	ch=ch2+ch1;
	ch1=ch2;
	ch2=ch;
	i++;
	}
	cin.get();
	cin.get();
	return 0;
}