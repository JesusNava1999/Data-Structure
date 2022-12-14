/*
Nombre: Nava Cuellar Jose De Jesus
#Control: 18011108
Practica: Grafo Colonia
Archivo: queue.h
*/
#ifndef queue_h
#define queue_h
#include "nodeQueue.h"
#include <stddef.h>
class queue {
	int n;
	int s;
	node *list;
	node *p; 
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
