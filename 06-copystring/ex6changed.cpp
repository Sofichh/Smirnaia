// ex6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
char str1[20], str2[20];
int i=0;
cout << "Wwedite stroku: " << endl;
cin >> str1;
while(str1[i]!='\0'){
str2[i]=str1[i];
++i;
}
str2[i]='\0';
cout << "Copi'a stroki: " << str2 << endl;
cin.get();
cin.get();
return 0;
}



