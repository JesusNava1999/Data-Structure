#include"stack.hpp"
stack::stack(int c){
	n=c;
	s=0;
	data = new int [n];
}
stack::~stack(){
	delete [] data;
}
void stack::push(int x){  //Añadir datos a la pila
	data[s] = x; //data[s++] = x;
	s++;
}
int stack::pop(){ //Eliminar datos de la pila
	s--;
	return data[s]; //return data[--s]
}
int stack::top(){ //Mostrar ultimo dato de la pila
	return data[s-1]; //No modifica (s)
}
