// ex.15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <windows.h>
#include <math.h>
using namespace std;

template <typename T>
T epsilon(T sum,  T eps)
{
 	while(sum>1.0){
	eps=eps/2;
	sum=1+eps;
	}
	return (eps);
}

template <typename T>
T mnull( T null)
{
	T promegutochnoe;
 	while(null>0.0){
		promegutochnoe = null;
	    null=null/10;
	}
	return (promegutochnoe);
} 

template <typename T>
T infinity( T inf, T s)
{
	T promegutochnoe=0.0, promegutochnoe1=0.0,rez;
 	while(promegutochnoe<inf){
		promegutochnoe1=promegutochnoe;
		promegutochnoe = inf;
	    inf=inf*2.0;	
	}
	inf=promegutochnoe1;
	while(promegutochnoe1<promegutochnoe){	
		rez=promegutochnoe1;
		promegutochnoe1=promegutochnoe1+inf/2.0;
	    inf=inf/2;}
	return (rez);
}

template <typename T>
T infinityminus( T inf, T s)
{
	T promegutochnoe=2.0, promegutochnoe1=0.0;
 	while(promegutochnoe>inf){
		promegutochnoe1=promegutochnoe;
		promegutochnoe = inf;
	    inf=inf/2.0;	
	}
	return (promegutochnoe1);
}

template <typename T>
T sum(T eps,  T null)
{
 	T sum;
	sum=eps+null;
	return (sum);
}

template <typename T>
T raz(T eps,  T null)
{
 	T raz;
	raz=eps-null;
	return (raz);
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float eps1=1.0, s1=2.0, null1=1.0,inf1=1.0;
	double eps2=1.0, s2=2.0, null2=1.0,inf2=1.0;
	long double eps3=1.0, s3=2.0, null3=1.0,inf3=1.0;
	cout << "Mashinniy epsilon dlya float: " << epsilon(s1,eps1) << endl;
	cout << "Mashinniy epsilon dlya double: " << epsilon(s2,eps2) << endl;
	cout << "Mashinniy epsilon dlya long double: " << epsilon(s3,eps3) << endl;
	cout << "Mashinniy null dlya float: " << mnull(null1) << endl;
	cout << "Mashinniy null dlya double: " << mnull(null2) << endl;
	cout << "Mashinniy null dlya long double: " << mnull(null3) << endl;
	cout << "Mashinnaya beskonechnost' + dlya float: " << infinity(inf1,s1) << endl;
	cout << " i -: " << infinityminus(inf1,s1)<< endl;
	cout << "Mashinnaya beskonechnost' + dlya double: " << infinity(inf2,s2) << endl;
	cout << " i -: " << infinityminus(inf2,s2) << endl;
	cout << "Mashinnaya beskonechnost' + dlya long double: " << infinity(inf3,s3) << endl;
	cout << " i -: " << infinityminus(inf3,s3) << endl;
	cout << "Summa epsilon i nol'ya dlya float: " << sum(epsilon(s1,eps1),mnull(null1)) << endl;
	cout << "Summa epsilon i nol'ya dlya double: " << sum(epsilon(s2,eps2),mnull(null2)) << endl;
	cout << "Summa epsilon i nol'ya dlya long double: " << sum(epsilon(s3,eps3),mnull(null3)) << endl;
	cout << "Raznost' epsilon i nol'ya dlya float: " << raz(epsilon(s1,eps1),mnull(null1))  << endl;
	cout << "Raznost' epsilon i nol'ya dlya double: " << raz(epsilon(s2,eps2),mnull(null2))<< endl;
	cout << "Raznost' epsilon i nol'ya dlya long double: " << raz(epsilon(s3,eps3),mnull(null3)) << endl;
	cin.get();
	cin.get();
	return 0;
}
 