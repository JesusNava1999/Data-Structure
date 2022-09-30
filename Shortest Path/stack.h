/*
Nombre: Nava Cuellar Jose De Jesus
#Control: 18011108
Practica: Grafo Colonia
Archivo: stack.h
*/
#ifndef stack_h
#define stack_h
#include "nodoStack.h"
class stack {
	int n;
	int s;
	nodeS *list;
	
	public:
	
	stack(int);
	~stack();
	
	void push(int);
	void pop();
	int Pop();
	int top();
	
	int capacity(){
		return n;
	}  	
	int size(){
		return s;
	} 
	
	bool empty(){
		if (s==0){
			return true;
		} else {
			return false;
		}
	}
	
	bool full(){
		if (s==n){
			return true;
		} else {
			return false;
		}
	}
	
};
#endif 
