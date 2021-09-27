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
	cout << "Введите слово: ";
	cin >> word1;
	len=strlen(word1);
	while(i<len){
	word2[i]='_';
	i++;
	}
	word2[i]='\0';
	cout << word2 << endl;
	while(schet<len){
	cout << "Введите букву: " << endl;
	cin >> lit;
		for(k=0;k<len;k++){
			if(lit==word1[k]){
			word2[k]=lit;
			schet++;
			b++;
			}}
			if(b>0){
				cout << "Есть такая буква в слове" << endl;
				b=0;}
			else cout << "Нет такой буквы в слове" << endl;
			cout << word2 << endl;
	}
	cout << word2 << endl;
	cout << "Вы угадали. Игра окончена!";
	cin.get();
	cin.get();
	return 0;
}

