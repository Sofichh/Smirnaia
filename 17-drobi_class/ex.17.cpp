// ex.17.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
#include <windows.h>
#include <cmath>
 
using namespace std;

class CRational {
	public:
        int znam1,chisl1,chisl2,znam2,znamsum,chislsum,znampr,chislpr;
        CRational (int _chi,int _zna, int _chi1, int _zna1) : chisl1(_chi), znam1(_zna), chisl2(_chi1), znam2(_zna1){}
		void print(){
			if(znam1!=0)
			cout << "Perwaia ";
			printdrob(chisl1,znam1);
			if(znam2!=0)
			cout << "Wtoraia ";
			printdrob(chisl2,znam2);
		}
		void printdrob(int ch,int zn){
			int i;
			if(zn!=0){
			for (i=zn;i>1;i--){
				if((ch % i==0)&&(zn % i==0)){
					ch=ch/i;
					zn=zn/i;}
			}
			if((ch==0)&&(zn!=0))
				cout << "drob' imeet wid: " << ch << endl;
			else if (abs(ch/zn)<1)
				cout << "drob' imeet wid: " << ch << "/" << zn << endl;
			else if (ch % zn) cout << "drob' imeet wid: " << ch / zn << " " << abs(ch % zn) << "/" << abs(zn) << endl;
			else cout << "drob' imeet wid: " << ch/zn << endl;
			}
			else cout << "Oshibka, znamenatel' ne moget byt' raven nulyu." <<endl;
		}
		void summa(){
			if((znam1!=0) && (znam2!=0)){
				if(znam1!=znam2){
			znamsum=znam1*znam2;
			chislsum=chisl1*znam2+chisl2*znam1;}
				else {znamsum=znam1;
				chislsum=chisl1+chisl2;}
				cout << "Posle summirovania resultiruyuschaya ";
				printdrob(chislsum,znamsum);}}
		void proizvedenie(){
			if((znam1!=0) && (znam2!=0)){
			znamsum=znam1*znam2;
			chislsum=chisl1*chisl2;}
				cout << "Posle umnogeniya drobey resultiruyuschaya ";
				printdrob(chislsum,znamsum);}
};



int main() {
        SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		int ch1,zn1,ch2,zn2;
		cout << "Wwedite chislitel' perwoy drobi" << endl;
		cin >> ch1;
		cout << "Wwedite znamenatel' perwoy drobi" << endl;
		cin >> zn1;
		cout << "Wwedite chislitel' wtoroy drobi" << endl;
		cin >> ch2;
		cout << "Wwedite znamenatel' wtoroy drobi" << endl;
		cin >> zn2;
		CRational drob (ch1,zn1,ch2,zn2);
		drob.print();
		drob.summa();
		drob.proizvedenie();
		cin.get();
		cin.get();
return 0;}
