#ifndef stack_hpp
#define stack_hpp
#include <stdio.h>
class stack{
	int n; //Capacidad
	int s; //Tamaño
	int *data; //Stack	
	public:
		void push(int); //Metodo Añadir (Especificar en stack.cpp)
		int pop();		//Metodo Eliminar (Especificar en stack.cpp)
		int top();		//Metodo Mostrar (Especificar en stack.cpp)		
		stack(int); //Constructor (Especificar en stack.cpp)
		~stack(); //Destructor	(Especificar en stack.cpp)		
		int capacity(){ //Metodo Mostrar Capacidad del Stack
			return n;
		}		
		int size(){	//Metodo Mostrar Tamaño del Stack
			return s;
		}		
		bool full(){ //Metodo Comprobar si el Stack esta lleno
			if (s==n){
				return true;
			} else {
				return false;
			}
		} 
		bool empty(){ //Metodo Comprobar si el Stack esta vacio
			if (s==0){
				return true;
			} else {
				return false;
			}
		}			
};
#endif /*stack_hpp*/
