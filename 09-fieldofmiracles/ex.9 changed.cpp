// ex.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char word1[20], word2[20];
	int i=0,k=0,len,b=0,schet=0;
	char lit; 
	cout << "Wwedite slovo: ";
	cin >> word1;
	len=strlen(word1);
	while(i<len){
	word2[i]='_';
	i++;
	}
	word2[i]='\0';
	cout << word2 << endl;
	while(schet<len){
	cout << "Wwedite bukwu: " << endl;
	cin >> lit;
		for(k=0;k<len;k++){
			if(lit==word1[k]){
			word2[k]=lit;
			schet++;
			b++;
			}}
			if(b>0){
				cout << "Est' takaya  bukwa w slove" << endl;
				b=0;}
			else cout << "Net takoy bukwi w slove" << endl;
			cout << word2 << endl;
	}
	cout << word2 << endl;
	cout << "Wi ugadali. Igra okonchena!";
	cin.get();
	cin.get();
	return 0;
}

