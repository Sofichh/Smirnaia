#include "raspr.h"
#include<iostream>
using namespace std;


    Method::Method(int sizemas){ 
		 size=sizemas;
	     i=0;
         mas = new int[sizemas];}

	Method::~Method()
     {   delete [] mas;
	     i=0;}


	 Fifo::virtual void push(int chislo, int &i){
	 mas[i] = chislo;
	 i++;}

	 Fifo::virtual void pop(int &i){
		 int k;
	 cout <<"Izwlechennoe chislo "<< mas[0] << endl; 
	 for(k=0;k<size-1;k++)
		 mas[k]=mas[k+1];
	 if(i=size) i--;
	 mas[i]=0;}

	 Fifo::virtual void print(){
		 int k=0;
	 for (k=0;k<size;k++)
		 cout <<mas[k]<<" "; 
	 cout << endl;} 


	

	Lifo::virtual void push(int chislo, int &i){
	 mas[i] = chislo;
	 i++;}

	 Lifo::virtual void pop(int &i){
		if(i==size) i--;
		 cout<<"Izwlechennoe chislo "<< mas[i] <<endl;
		 mas[i]=0;
	     if(i>0)i--;}

	Lifo::virtual void print(){
		 int k=0;
	 for (k=0;k<size;k++)
		 cout <<mas[k]<<" "; 
	 cout << endl;} 
