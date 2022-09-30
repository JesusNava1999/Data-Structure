#include"stack.hpp"
stack::stack(int c){
	n=c;
	s=0;
	data = new int [n];
}
stack::~stack(){
	delete [] data;
}
void stack::push(int x){
	data[s] = x;
	s++;
}
int stack::pop(){
	s--;
	return data[s];
}
int stack::top(){
	return data[s-1];
}
