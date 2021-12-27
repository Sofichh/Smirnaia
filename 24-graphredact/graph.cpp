#include "stdafx.h"
#include<iostream>
#define _USE_MATH_DEFINES 
#include <cmath>
#include "graph.h"
using namespace std;

#define M_PI 3.14159265358979323846


 Circle::Circle(double centerx,double centery, double _size): cx(centerx), cy(centery),size(_size){
	cx=centerx;
	cy=centery;
	size=_size;}

 void Circle :: move(double ax, double ay){
	cx=cx+ax;
	cy=cy+ay;
	}

 void Circle :: show(){
	cout<<"Circle,centre("<< cx <<","<< cy <<"),radius="<< size <<"."<<endl;
	}

	 void Circle :: rotate(double an){}

	void Circle :: scale(double coef){
	 size=coef*size;
	}


Square::Square(double centerx,double centery, double _size): cx(centerx), cy(centery),size(_size){
	cx=centerx;
	cy=centery;
	size=_size;
	vx=_size/2+centerx;
	vy=size/2+centery;};

  	
void Square :: move(double ax, double ay){
	 cx=cx+ax;
	 cy=cy+ay;
	 vx+=ax;
	 vy+=ay;
	 }

void Square :: show(){
	cout<<"Scuare,centre("<< cx <<","<< cy <<"),side="<< size <<", diagonal point=("<< vx <<","<< vy <<")."<<endl;
	};

	 void Square :: rotate(double an){
	 vx=cx+size*cos((45-an)*M_PI/180)/sqrt(2);
	 vy=cy+size*sin((45-an)*M_PI/180)/sqrt(2);
	}

	 void Square :: scale(double coef){
	 size=coef*size;
	 vx=(vx-cx)*coef+cx;
	 vy=(vy-cy)*coef+cy;
	}








