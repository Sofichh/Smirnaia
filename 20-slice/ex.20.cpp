// ex.20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "cslice.h"
using namespace std;

 int main(){

	
	int length,lensl,i;
	cout << "Wwedite dlinu massiva: " << endl;
	cin >> length;
    int *massiv = new int [length]; 
	int *massivsl = new int [length]; 
	for (i=0; i<length; i++){
	cout << "Wwedite " << i << "-y element massiva: " << endl;
	cin >> massiv[i];	
	}
	cout << "Wwedite dlinu slica s uchetom razdeliteley i scobok: " << endl;
	cin >> lensl;
	char *slice = new char [lensl];
	CSlice A(lensl,length);
	cout << "Wwedite slice: " << endl;
	cin >> slice;
	A.parcer(slice); 
	A.resultat(massiv);
    delete []slice;
	delete []massiv;
	cin.get();
	cin.get();
return 0;}

