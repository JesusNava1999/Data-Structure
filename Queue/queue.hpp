#ifndef queue_hpp
#define queue_hpp
#include <stdio.h>
class queue{
	int n; //capacidad
	int s; //tamaño
	int r; //aux
	int *data;
	
	public:
		queue(int);
		~queue();
		
		void enqueue(int);
		int dequeue();
		int front();	
		
		bool empty(){
			return r==0 ? true : false;
		}
		
		bool full(){
			return s==n ? true : false;
		}
		
};
#endif	/*queue_hpp*/
