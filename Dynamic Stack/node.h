#ifndef node_h
#define node_h
#include<stddef.h>
class node {
	int _data;
	node *_next;
	
	public:
	
		node (int x){
			_data = x;
			_next = NULL;		
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
	
};
#endif
