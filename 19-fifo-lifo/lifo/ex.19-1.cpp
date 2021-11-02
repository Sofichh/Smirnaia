// ex.19-1.cpp : Defines the entry point for the console application.
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

	 void pop(int &i){
		if(i==size) i--;
		 cout<<"Izwlechennoe chislo "<< mas[i] <<endl;
		 mas[i]=0;
	     i--;}

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
	cout << "Wwedite dlinu steka" << endl;
	cin >> size;
	Fifo stack1(size);
	for (k=0;k<size;k++){
	cout << "Wwedite chislo" << endl;
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

