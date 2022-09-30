#ifndef stack_hpp
#define stack_hpp
#include "node.hpp"
class stack {
	int n;
	int s;
	node *list;
	
	public:
	
	stack(int);
	~stack();
	
	void push(int);
	int pop();
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
