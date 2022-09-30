#include "queue.hpp"
#include <stddef.h>
#include <iostream>
queue::queue(int c){
	n=c;
	s=0;
	list = NULL;
}

queue::~queue(){
	delete [] list;
}

void queue::enqueue(int x){
	node *p,*q;	
	if (full()==true){
		printf("Cola Llena\n");
		return;
	} 
	if (list==NULL){
		list = new node(x);
		p = list;
		return;
	} else {		
		while(p==NULL){
			q = p;
			p -> siguiente(q);
		}
		node *aux = new node(x);
		p -> siguiente(aux);
		aux = p;
		s++;							
	}
}

int queue::dequeue(){
	int x;
	if (list==NULL){
		printf("\nCola Vacia	");
		return 0;
	}
	if (empty()==true){
		printf("\nCola Vacia	");
		return 0;
	} else {
		node *p,*q;
		p = list;
		while(p==NULL){
			q = p;
			p -> siguiente(q);			
		}
		x = p -> data();
		q = NULL;
		s--;
		delete p;
		return x; 
	}
}

int queue::front(){
	node *p,*q;
	p = list;
	while(p!=NULL){
		q = p;
		p -> siguiente(q);			
	}
	return p -> data();	
}
