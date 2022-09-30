#include"lista.h"
#include<iostream>
using namespace std;

lista::lista(int c):st(0),tr(0), n(c), s(0),sq(0),list(NULL), back(NULL){}//constructor

lista::~lista(){//destructor
	nodo* p = list, * q = NULL;
	while (p) {
		q = p->next();
		delete p;
		p = q;
	}
}

void lista::push(char d, float b, int c) {//push para la lista original 
	if (full()) return;					  //tambien usada en FIFO y RR
	if (!list) {
		list = new nodo(d, b, c);
		back = list;
	}
	else {
		nodo* aux = new nodo(d, b, c);
		back->next(aux);
		back = aux;
	}
	s++;
}

float lista::takeOut() { //sacar nodos de uno a uno 
	//metodos FIFO y SJF
	float x = list->time();
	char l = list->letra();
	nodo* aux = list;
	list = aux->next();
	delete aux;

	tr += x;//time return node
	st += tr;//suma del tiempo
	cout <<"nodo sale:  "<< l;//id del nodo que sale
	s--;//quitar tamaño
	return x;
}

void lista::inst(char d, float b, int c) {//insercion de la lista por tiempo
	//utilizado por SJF
	if (full()) {
		return;
	}
	if (empty()) list = new nodo(d, b, c);
	else {
		nodo* p = list, * q = p;
		while (p and (p->time() < b)) {
			q = p;
			p = p->next();
		}
		nodo* aux = new nodo(d, b, c);
		if (!p) {
			q->next(aux);
		}
		else if (p == list) {

			aux->next(list);
			list = aux;
		}
		else {
			aux->next(p);
			q->next(aux);
		}
	}
	s++;
}

void lista::takeOutrr() {//sacar nodo en RR 
	//reacomodo si el tiempo pasa el quantum, alojando al final
	float q = getquantum();

	float x = list->time();
	char l = list->letra();

	while (x > q) {//si el tiempo del nodo pasa el quantum
		x -= q;
		list->time(x);		//Colocar el nuevo tiempo
		nodo* aux = list;	//guardar el primer nodo
		list = aux->next(); //actualizar la lista
		back->next(aux);    //el puntero back apunta al primer nodo mandandolo al final 
		aux->next(NULL);    //el puntero de aux hacer nulo
		back = aux;			//actulizar back con aux
		tr += q;
		nodo* p = list;
		cout << "\nnodo sale: " << l<<"\n";
		while (p) {
			cout << "[ " << p->letra() << " | " << p->time() << " ]" << " -> " ;
			p = p->next();
		}
		cout << endl;
	}
	x = list->time(); //tomar tiempo del nodo a salir
	nodo* aux = list;
	list = aux->next();
	delete aux;

	tr += x;
	st += tr;
	s--;
}

void lista::insp(char d, float b, int c) {//insercion por prioridad
	//acomodo para Prioridad
	if (full()) {
		return;
	}
	if (empty()) list = new nodo(d, b, c);
	else {
		nodo* p = list, * q = p;
		while (p and (p->prior() >= c)) {
			q = p;
			p = p->next();
		}
		nodo* aux = new nodo(d, b, c);
		if (!p) {
			q->next(aux);
		}
		else if (p == list) {

			aux->next(list);
			list = aux;
		}
		else {
			aux->next(p);
			q->next(aux);
		}
	}
	s++;
}

void lista::priority() {
	
	float q = getquantum();

	float x = list -> time();

	int j = list -> prior();
	while (x > q) {//si el tiempo del nodo pasa el quantum
		x -= q;
		list -> time(x);			//Colocar la nuevo tiempo
		j -= 1;
		list -> prior(j);			//colocar nueva prioridad
			
		nodo* aux = list;
		list = aux->next();
		aux->next(NULL);
		s--;

		insp(aux->letra(), aux->time(), aux->prior());
		
		x = list->time();//actualizacion con el nuevo nodo de la lista
		j = list->prior();

		tr += q;
		nodo* p = list;
		while (p) {
			cout << "[ " << p->letra() << " | " << p->time() <<" | "<< p->prior() << " ]" << " -> " ;
			p = p->next();
		}
		cout << endl;
	}

	x = list->time();//tomar tiempo del nodo a salir
	char letra = list->letra();
	cout << "\nSale nodo: " << letra;
	nodo* aux = list;
	list = aux->next();
	delete aux;

	tr += x;
	st += tr;
	s--;
}

float lista::getquantum() {
	nodo* p = list;
	while (p and ban == 'T') {
		sq += p->time();
		p = p->next();
	}
	ban = 'F';
	return sq / n;
}

void imprimir(lista &l) {//imprimir cualquier lista existente 

	cout << "\n\n\nLista:\n";
	nodo* pt = l.list;
	while (pt) {
		cout << "[ " << pt->letra() << " | " << pt->time()  << " ]" << " -> ";

		pt = pt->next();
	}
	cout << "\n\n\n";
}

void imprimirP(lista& l) {//imprimir lista de prioridad para denotar la prioridad
	cout << "\n\n\nLista:\n";
	nodo* pt = l.list;
	while (pt) {
		cout << "[ " << pt->letra()  << " | " << pt->time() << " | " << pt->prior() << " ]" << " -> ";

		pt = pt->next();
	}

	cout << "\n\n\n";

}