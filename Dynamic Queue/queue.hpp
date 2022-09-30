#ifndef queue_hpp
#define queue_hpp
#include "node.hpp"
#include<stddef.h>
class queue {
	int n;
	int s;
	node *list;
	public:
		queue(int);
		~queue();
		
		void enqueue(int);
		int dequeue();
		int front();
		
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
