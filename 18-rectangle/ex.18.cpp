// ex.18.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include<iostream>
#include <windows.h>
#include <fstream>
#include "crect.h"
using namespace std;

int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
		double x1l, y1l, x1r, y1r, x2l, y2l, x2r, y2r;
		ifstream inf ("input.txt"); 
		inf >> x1l >> y1l >> x1r >> y1r>> x2l >> y2l >> x2r >> y2r;
		Crect pr1(x1l, y1l, x1r, y1r, x2l, y2l, x2r, y2r);
		pr1.peresechenie();
        cin.get();
        cin.get();
        return 0;
}

