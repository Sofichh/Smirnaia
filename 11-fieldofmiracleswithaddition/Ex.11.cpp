// Ex.11.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
#include <windows.h>
#include <istream>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char word1[30], word2[30], dogadka[30];
	char ch,ch1,ch3;
	int i=0,k=0,len,b=0,schet=0,l=2,br=0;
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
	if((ch=cin.get()) =='\n'){
		for(k=0;k<len;k++){
			if(lit==word1[k]){
			if(lit==word2[k])
				b--;
			else {word2[k]=lit;
			schet++;
			b++;
			}}}
			if(b>0){
				cout << "Есть такая буква в слове" << endl;
				b=0;}
			else if (b==0) cout << "Нет такой буквы в слове" << endl;
			else {cout << "Эта буква уже была, попробуйте еще раз." << endl;
			b=0;}
			cout << word2 << endl;
	}
	else {
		   dogadka[0]=lit;
	       dogadka[1]=ch; 
		   while((dogadka[l]=cin.get())!='\n'){
			   ++l;
		   }
		   l++;
		   dogadka[l]='\0';
		   l=0;
		   for(k=0;k<len; k++){
			   if(dogadka[k]==word1[k])
				   l++;
		   }
		   if(l==len){
			   cout << "Вы победили!" << endl;
			   br++;
		   break;}
		   else {cout << "К сожалению, вы не угадали слово. Вы проиграли(" << endl;
		   br++;
		   break;}
		}
		}
	if(br==0){	
	cout << word2 << endl;
	cout << "Вы угадали. Игра окончена!";}
	cin.get();
	cin.get();
	return 0;
}


