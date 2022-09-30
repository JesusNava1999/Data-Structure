#include "list.hpp"
#include "node.hpp"
#include <iostream>

list::list(int c) : n(c), s(0), inicio(NULL) {}
list::~list() {}

bool list::ins(int x) {
	if (full()) {
		return false;
	}

	if (empty()) inicio = new node(x);
	else {
		node *p = inicio, *q = p;		

		while (p and (p->data() < x)) {			
			q = p;
			p = p->siguiente();					
		}
		if(p and p->data()==x){
			return false;
		}				
		node* aux = new node(x);		
		if (!p) {
			q->siguiente(aux);
		}
		else if (p == inicio) {

			aux->siguiente(inicio);
			inicio = aux;
		}
		else {
			aux->siguiente(p);
			q->siguiente(aux);
		}
	}
	s++;
	return true;
}

void imprimir(list& l) {
	node* p = l.inicio;

	while (p) {

		std::cout << "\t" << p->data();
		p = p->siguiente();

	}

}

bool list::search(int x, int &r){
	node *p = inicio;
	while(p and p -> data() < x){
		p = p -> siguiente();
	}
	if (p and p -> data() == x){
		r = p -> data();
		return true;
	} else {
		return false;
	}
}

bool list::extract(int x){
	node *p = inicio,*q;
	while (p and (p->data() < x)) {			
			q = p;
			p = p -> siguiente();					
		}
	if (p and p -> data() == x){
		if (p==inicio){
			inicio = p -> siguiente();
		} else {
			q -> siguiente(p->siguiente());
		}
		delete p;
		return true;
	} else {
		return false;
	}
}
