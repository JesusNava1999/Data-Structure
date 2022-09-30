/*
Nombre: Nava Cuellar Jose De Jesus
#Control: 18011108
Practica: Grafo Colonia
Archivo: stack.cpp
*/
#include "stack.h"
#include "nodoStack.h"
#include <iostream>
#include <stddef.h>
stack::stack(int c){
	n=c;
	s=0;
	list = NULL;
}

stack::~stack(){
	nodeS *aux = list;
	nodeS *del;
	while(aux!=NULL){
		del = aux;
		aux -> siguiente(aux);
		delete del;		
	}
}

void stack::push(int x){
	if(full()) {
		printf("Pila llena\n");
		return; 
	}
	if(list==NULL){
		list = new nodeS(x);
	} else {
		nodeS *aux = new nodeS(x);
		aux -> siguiente(list);  // aux -> (_next = list) 
		list = aux;		            
	}
	s++;
}

void stack::pop(){
	if(empty()){
		printf("Pila vacia\n	");
		return;
	}	    
    nodeS *aux = list;
	int x = aux -> data();
	list = aux -> siguiente(); 
    delete aux;    
    s--;
    return;
}

int stack::Pop(){
	if(empty()){
		printf("Pila vacia\n	");
		return -1;
	}	    
    nodeS *aux = list;
	int x = aux -> data();
	list = aux -> siguiente(); 
    delete aux;    
    s--;
    return x;
}

int stack::top(){
	return list -> data();
}
