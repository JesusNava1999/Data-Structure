#include "circle.hpp"
#include <iostream>
using namespace std;
circle::circle(int c){
	n=c;
	s=0;
	f=0;
	r=0;
	data = new int [c];
}
circle::~circle(){
	delete [] data;
}
int circle::forth(int x){
	return ((x+1)%n);
}
int circle::back(int x){
	return ((x+n-1)%n);
}
void circle::enqueueLast(int x){
	if(!full()){
		cout << r << "	<- R";
		data[r] = x;
		r = forth(r);
		s++;
	} else {
		cout << "Exceso de Datos	";
		return;
	}
	
}
int circle::dequeueFirst(){
	int x = data[f];
	f = forth(f);
	s--;
	return x;	
}
void circle::enqueueFirst(int x){
	if(!full()){	
		f = back(f);
		cout << f << "	<- F";
		data[f] = x;
		s++;
	} else {
		cout << "Exceso de Datos" << endl;
		return;
	}
		
}
int circle::dequeueLast(){
	r = back(r);
	s--;
	return data[r];
}
