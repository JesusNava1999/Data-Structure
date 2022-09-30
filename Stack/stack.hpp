#ifndef stack_hpp
#define stack_hpp
#include<stdio.h>
class stack{
	int n;
	int s;
	int *data;
	public:
		void push(int);
		int pop();
		int top();
		stack(int);
		~stack();
		int capacity(){return n;}
		int size(){return s;}
		bool full(){
			if (s==n){
				return true;
			} else {
				return false;
			}
		}
		bool empty(){
			if (s==0){
				return true;
			} else {
				return false;
			}
		}
};
#endif /*stack_hpp*/
