// ex.16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int obmen (int &a, int &b)	{
	int vremennaya;
	vremennaya = a;
	a=b;
	b=vremennaya;
return 0;}

int obmen1 (int &a, int &b){
	a+=b;
	b=a-b;
	a-=b;
return 0;}

int obmen2 (int &a, int &b, int c){
	a=b;
	b=c;
return 0;}

void qsort(int *mas, int size) {
    int i = 0;
    int j = size - 1;

    int mid = mas[size / 2];
    do {
       while(mas[i] < mid) {
            i++;
        }
        while(mas[j] > mid) {
            j--;
        }
        if (i <= j) {
            int tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if(j > 0) {
        qsort(mas, j + 1);
    }
    if (i < size) {
        qsort(&mas[i], size - i);
    }
}


int main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	int n,i;
	 cout << "Wwedite zeloe chislo ot 1 do 100" << endl;
	 cin >> n;
	 while((n<1)||(n>100)){
	 if((n<1)||(n>100)){
		 cout << "Chislo ne whodit w diapazon. Wwedite zanovo." << endl;
		 cin >> n;
	 }}
	 int *mas = new int [n];
	srand(time(NULL));
    for(i=0;i<n;i++){
        mas[i] = 90 - rand() % 100;
		cout << mas[i] << endl;
	 }
	cout << "Otsortirovanniy massiv:" << endl;
	qsort(mas,n);
	for(int i=0;i<n;i++){
		cout << mas[i] << endl;
	 }
	delete[] mas;
	 cin.get();
	 cin.get();
	 return 0;}