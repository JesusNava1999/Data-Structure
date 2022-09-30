#ifndef node_hpp
#define node_hpp
#include<stddef.h>
class node {
	int _data;
	node *_next;
	
	public:
	
		node (int x){
			_data = x;
			_next = NULL;		
		}
  
		node *next(){
			return _next;
		}	 
	
		void siguiente(node *p){
			_next = p;
		}
	
		int data(){
			return _data;
		}
	
};
#endif
