#include "stack.hpp"
#include "node.hpp"
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
		printf("Fila llena\n");
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

int stack::pop(){
	if(empty()){
		printf("Fila vacia	");
		return 0;
	}	    
    node *aux = list;
	int x = aux -> data(); 
    list -> siguiente(aux);
    delete aux;    
    s--;
    return x;
}

int stack::top(){
	return list -> data();
}
