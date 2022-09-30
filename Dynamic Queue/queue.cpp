#include "queue.hpp"
#include "node.hpp"
#include <stddef.h>
#include <iostream>
using namespace std;
queue::queue(int c){
	n=c;
	s=0;
	list = NULL;
}

queue::~queue(){}

void queue::enqueue(int x){	
	if(!list){	
		list = new node(x);
		p = list;
		s++;	
		return;		 		
	}
	if (!full()){
		node *aux = new node(x);
		p -> siguiente(aux);
		p = aux;
		s++;
		return;					
	} else {
		cout << "Cola llena..." << endl;
		return;
	}

}

int queue::dequeue(){
	if(empty()){
		printf("Fila vacia	");
		return 0;
	}	    
    node *aux = list;
	int x = aux -> data();
	list = aux -> siguiente();    
    delete aux;    
    s--;
    return x;
}

