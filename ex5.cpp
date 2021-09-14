// ex5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
setlocale(LC_ALL, "Russian");
char name[20];
cout << "Введите ваше имя: " << endl;
cin >> name;
cout << "Привет, " << name << "!" << endl;
cin.get();
cin.get();
return 0;
}
