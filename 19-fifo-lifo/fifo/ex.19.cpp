// ex.19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

	class Fifo
{  private: int *mas; 
   public: int i, size;

     Fifo(int sizemas){ 
		 size=sizemas;
	     i=0;
         mas = new int[sizemas];}

	 void push(int chislo, int &i){
	 mas[i] = chislo;
	 i++;}

	 void pop(){
		int k=0;
	 cout<<"Izwlechennoe chislo "<< mas[0] <<endl;
	 for(k;k<size;k++){
		 if(k==size-1) mas[k]=0;
		 else mas[k]=mas[k+1];}}

	 void print(){
		 int k=0;
	 for (k=0;k<size;k++)
		 cout <<mas[k]<<" "; 
	 cout<<endl;} 

	 ~Fifo()
     {   delete [] mas;
	     i=0;}
};


int main()
{ 
	int size,k=0,chislo;
	cout << "Wwedite dlinu ocheredi" << endl;
	cin >> size;
	Fifo och1(size);
	for (k=0;k<size;k++){
	cout << "Wwedite chislo" << endl;
	cin >> chislo;
	och1.push(chislo,och1.i);
	}
	och1.print();
	for (k=0;k<size;k++){
	och1.pop();
	}
	och1.print();
cin.get();
cin.get();
}

