// ex.26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <windows.h>
#include "iskluch.h"
#include <cmath>
 
using namespace std;


int razbor(char* str, int &error){
	int chislo,alphabet=0, tochka=0,number=0;
	for (int i=0; str[i]!='\0'; i++){
        if (isalpha(str[i])!= 0)
            alphabet++;
        else if (isdigit(str[i])!= 0)
            number++;
		else if (str[i]=='.')
			tochka++;
    }
	try{ if((alphabet!=0)||(tochka>1))
		    throw "Wi wweli stroku.";
	     if ((tochka==1) && (alphabet==0))
	        throw "Wi wweli nezeloe chislo.";
	     chislo=atoi(str);
		 delete[] str; 
         str= 0;
		 return chislo;}
	catch(const char* exception){ cerr << "Error: " << exception << endl;
		chislo=atoi(str);
		delete[] str; 
		error++;
	    return 0;}
}

int main() {
		char *ch1,*zn1,*ch2,*zn2;
		int chi1, zna1,chi2,zna2,n,oshibka1=0,oshibka2=0;
		cout << "Wwedite max dlinu wwodimich chisel +1" << endl;
		cin>>n;
		ch1=new char[n];
		ch2=new char[n];
		zn1=new char[n];
		zn2=new char[n];
		cout << "Wwedite chislitel' perwoy drobi" << endl;
		cin >> ch1;
		cout << "Wwedite znamenatel' perwoy drobi" << endl;
		cin >> zn1;
		cout << "Wwedite chislitel' wtoroy drobi" << endl;
		cin >> ch2;
		cout << "Wwedite znamenatel' wtoroy drobi" << endl;
		cin >> zn2;
		chi1=razbor(ch1,oshibka1);
		zna1=razbor(zn1,oshibka1);
		chi2=razbor(ch2,oshibka2);
		zna2=razbor(zn2,oshibka2);
		CRational drob (chi1,zna1,chi2,zna2);
		if((oshibka1==0))
		    drob.print1drob();
		if((oshibka2==0))
		    drob.print2drob();
		if(oshibka1>0)
			zna1=0;
		else if(oshibka2>0)
			zna2=0;
		drob.summa();
		drob.proizvedenie();
		cin.get();
		cin.get();
return 0;}
