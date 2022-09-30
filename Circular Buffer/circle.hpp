#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>

class circle{
	int n; //Capacidad
	int s; //Tama�o
	int f; //(First) Frente
	int r; //(last) �ltimo
	int *data; //Circulo De datos
	public:
		circle(int);
		~circle();		
		void enqueueFirst(int);
		void enqueueLast(int);
		int dequeueFirst();
		int dequeueLast();		
		int forth(int);
		int back(int);		
		bool empty(){
			if(s==0){
				return true;
			} else {
				return false;
			}
		}		
		bool full(){
			if(s==n){
				return true;
			} else {
				return false;
			}
		}	
};
#endif /*circle_hpp*/
