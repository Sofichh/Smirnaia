// ex6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int lenght;
	cout << "Введите длину строки: " << endl;
	cin >> lenght;
	char *str1 = new char[lenght];
	char *str2 = new char[lenght];
int i=0;
cout << "Введите строку: " << endl;
cin >> str1;
while(str1[i]!='\0'){
str2[i]=str1[i];
++i;
}
str2[i]='\0';
cout << "Копия строки: " << str2 << endl;
 delete[] str1;
 delete[] str2;
    str1 = 0;
    str2 = 0;
cin.get();
cin.get();
return 0;
}



