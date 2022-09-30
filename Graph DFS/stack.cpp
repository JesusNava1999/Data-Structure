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
	node *aux = list;
	node *del;
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
		list = new node(x);
	} else {
		node *aux = new node(x);
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
    node *aux = list;
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
    node *aux = list;
	int x = aux -> data();
	list = aux -> siguiente(); 
    delete aux;    
    s--;
    return x;
}

int stack::top(){
	return list -> data();
}
