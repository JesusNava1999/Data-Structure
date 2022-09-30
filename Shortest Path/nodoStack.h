/*
Nombre: Nava Cuellar Jose De Jesus
#Control: 18011108
Practica: Grafo Colonia
Archivo: nodoStack.h
*/
#ifndef nodoStack_h
#define nodoStack_h
#include <stddef.h>
class nodeS {
	int _data;
	nodeS *_next;
	
	public:
	
		nodeS (int x){
			_data = x;
			_next = NULL;		
		}
  
		nodeS *siguiente(){
			return _next;
		}	 
	
		void siguiente(nodeS *p){
			_next = p;
		}
	
		int data(){
			return _data;
		}
	
};
#endif
