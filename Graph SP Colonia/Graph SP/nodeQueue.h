#ifndef nodeQueue_h
#define nodeQueue_h
#include <stddef.h>
class node {
	int _data;
	node *_next;
	public:
		
		node(int x) {
			_data = x;
			_next = NULL;
		}
		
		~node(){
		}
		
		node *siguiente(){
			return _next;
		}
		
		void siguiente(node *p){
			_next = p;
		}
		
		int data(){
			return _data;
		}
		
		node *next(){
			return _next;
		}
};
#endif
