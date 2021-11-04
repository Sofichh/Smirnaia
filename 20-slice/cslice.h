#ifndef CSLICE_H
#define CSLICE_H


#include <iostream>
#include <math.h>
using namespace std;

class CSlice{
   private: int *massl;
   public:  int len,sta,sto,ste,schet,lenmas,lenslice;

			CSlice (int _lenght, int _lenm): len(_lenght), lenmas(_lenm){
				schet=0; 
				lenslice=lenmas;
				massl = new int [lenslice]; };

	   void parcer(char m[]) {
		   int i=0,k=0,i1,minus=0;
		   char *start = new char [len];
		   char *stop = new char [len];
		   char *step = new char [len];
		   for(int p=0; p<len;p++){
		   if(m[p]==':')
			   schet++;
		   }
		   if(schet==1){
		   while(m[i]!=':'){
			   if (isdigit(m[i])!=0){
			   if(m[i-1]=='-'){
		       start[k]=m[i];
			   minus=1;}
			   else start[k]=m[i];
			   k++;}
			   i++;
		   }
		   if(i==1)
			   sta=0; 
		   else if (minus) sta=-atoi(start);
		   else sta=atoi(start); 
		   delete []start;
		   i1=i;
		   i++;
		   k=0;
		    while(m[i]!=']'){
			   if (isdigit(m[i])!=0){
			   if(m[i-1]=='-'){
				   stop[k]=m[i];
			       minus=1;}
			   else stop[k]=m[i];
			   k++;}
			   i++;
		   }
		   if(i==i1+1)
			   sto=0; 
		   else if(minus) sto=-atoi(stop);
		   else sto=atoi(stop);
		   delete []stop;
		   ste=1;}


         else if(schet==2){
		   while(m[i]!=':'){
			   if (isdigit(m[i])!=0){
			   if(m[i-1]=='-'){
				   start[k]=m[i];
			       minus=1;}
			   else start[k]=m[i];
			   k++;}
			   i++;
		   }
		   if(i==1)
			   sta=0; 
		   else if(minus==1) sta=-atoi(start);
		   else sta=atoi(start);
		   delete []start;
		   i1=i;
		   i++;
		   k=0;
		    while(m[i]!=':'){
			   if (isdigit(m[i])!=0){
			   if(m[i-1]=='-'){
				   stop[k]=m[i];
			       minus=2;}
			   else  stop[k]=m[i];
			   k++;}
			   i++;
		   }
		   if(i==i1+1)
			   sto=0; 
		   else if (minus==2) sto=-atoi(stop);
		   else sto=atoi(stop);
		   delete []stop;
		   i1=i;
		   i++;
		   k=0;
		     while(m[i]!=']'){
			   if (isdigit(m[i])!=0){
				if(m[i-1]=='-'){
					step[k]=m[i];
				    minus=3;}
				else step[k]=m[i];
			   k++;}
			   i++;
		   }
		   if(i==i1+1)
			   ste=1; 
		   else if (minus==3) ste=-atoi(step);
		   else ste=atoi(step);
		   delete []step;}}






	   void resultat(int mas[]){


		   cout<<"Massiv posle ispol'zovaniya slica: "<<endl;

      if((ste==0)&&(abs(sta)<lenmas)&&(abs(sto)<lenmas)) cout << "Nepravil'niy wwod" << endl;
	  else {

	  if(((schet==1)&&(sta==0)&&(sto==0))||((schet==2)&&(sta==0)&&(sto==0)&&(ste==1))){
		  lenslice=lenmas;
		   for(int i=0;i<lenmas;i++){
			   massl[i]=mas[i]; 
			   cout << massl[i] << endl;}}

	   if((schet==1)&&(sta!=0)&&(sto==0)){
		if (sta>0) { lenslice=lenmas-sta;
			  for(int i=0;i<lenmas-sta;i++){ // [x:], wse elementi, nachinaya s x
				massl[i]=mas[i+sta];
				cout << massl[i] << endl;}}
	     if (sta<0){ lenslice=-sta;
			   for(int i=0;i<-sta;i++){ // [-x:], wse elementi, nachinaya s konza do elementa x, otschitivaemogo s konza
				massl[i]=mas[lenmas-1-i];
				cout << massl[i] << endl;}}}

	   if((schet==1)&&(sta==0)&&(sto!=0)){ 
		   if(sto<0) {lenslice=lenmas+sto;
			   for(int i=0;i<lenmas+sto;i++){// [:-x] elementi, za isklucheniem poslednih x elementov
			   massl[i]=mas[i];
			   cout << massl[i] << endl;}}
			else if(sto>0){ lenslice=sto;
				for(int i=0;i<sto;i++){ //[:x], wse elementi, ne dohodya do x
				massl[i]=mas[i];
				cout << massl[i] << endl;}}}

	   if((schet==2)&&(sta==0)&&(sto==0)&&(ste==-1)){ // [::-1]
		   for(int i=0;i<lenmas;i++){
			   massl[i]=mas[lenmas-1-i];
			   cout << massl[i] << endl;}}

	   if((schet==2)&&(sta>0)&&(sto>=0)){ // [x:z:y]
		   if(sta<=sto){
			   if(sto==0) {sto=lenmas-1;  lenslice=(-sta)/ste;}
		   if (ste>0){  lenslice=(sto-sta+1)/ste;
		   for(int i=0;i<((sto-sta+1)/ste);i++){
			   massl[i]=mas[sta+i*ste];
			   cout << massl[i] << endl;}}
	       if(ste<0){lenslice=(sto-sta+1)/(-ste);
			   for(int i=0;i<((sto-sta+1)/(-ste));i++){
			   massl[i]=mas[lenmas-1-sta+i*ste];
			   cout << massl[i] << endl;}}}
		   else cout << "Nepravil'niy wwod" << endl;}

	    if((schet==2)&&(sta>0)&&(sto<0)){ // [x:-z:y]
			if(sta<=(lenmas+sto)){
		   if (ste>0) {lenslice=(lenmas+sto-sta)/ste;
			   for(int i=0;i<((lenmas+sto-sta)/ste);i++){
			   massl[i]=mas[sta+i*ste];
			   cout << massl[i] << endl;}}
	       if(ste<0){lenslice=(lenmas+sto-sta)/(-ste);
			   for(int i=0;i<((lenmas+sto-sta)/(-ste));i++){
			   massl[i]=mas[lenmas-sta+i*ste];
			   cout << massl[i] << endl;}}}
		else cout << "Nepravil'niy wwod" << endl;}

		   if((schet==2)&&(sta<0)&&(sto>0)){ // [-x:z:y]
			   if((lenmas-sto)<=-sta){
		   if (ste>0){lenslice=(abs(-(lenmas-sto)-sta))/ste;
			   for(int i=0;i<((abs(-(lenmas-sto)-sta))/ste);i++){
			   massl[i]=mas[lenmas+sta+i*ste];
			   cout << massl[i] << endl;}}
	       if(ste<0){lenslice=(abs(-(lenmas-sto)-sta))/(-ste);
			   for(int i=0;i<((abs(-(lenmas-sto)-sta))/(-ste));i++){
			   massl[i]=mas[-sta+i*ste-1];
			   cout << massl[i] << endl;}}}
			   else cout << "Nepravil'niy wwod" << endl;}

		   if((schet==2)&&(sta<0)&&(sto<0)){ // [-x:-z:y]
			   if(sta<=sto){
		   if (ste>0) {lenslice=(abs(-sto+sta)+1)/ste;
			   for(int i=0;i<((abs(-sto+sta)+1)/ste);i++){
			   massl[i]=mas[lenmas+sta+i*ste];
			   cout << massl[i] << endl;}}
	       if(ste<0){lenslice=(abs(-sto+sta)+1)/(-ste);
			   for(int i=0;i<((abs(-sto+sta)+1)/(-ste));i++){
			   massl[i]=mas[-sta+i*ste-1];
			   cout << massl[i] << endl;}} }
			   else cout << "Nepravil'niy wwod" << endl;}

		   if ((schet==2)&&(sta==0)&&(sto<0)){ // [:-z:y]
		   if (ste>0){ lenslice=(lenmas+sto+1)/ste;
			   for(int i=0;i<((lenmas+sto+1)/ste);i++){
			   massl[i]=mas[i];
			   cout << massl[i] << endl;}}
	       if(ste<0){lenslice=(lenmas+sto+1)/(-ste);
			   for(int i=0;i<((lenmas+sto+1)/(-ste));i++){
			   massl[i]=mas[lenmas+i*ste];
			   cout << massl[i] << endl;}}}
	  }}	 

	  ~CSlice() {delete []massl;}
};

#endif