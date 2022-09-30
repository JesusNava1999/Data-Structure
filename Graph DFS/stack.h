#ifndef stack_h
#define stack_h
#include "nodoStack.h"
class stack {
	int n;
	int s;
	node *list;
	
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
