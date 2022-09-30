#ifndef lista_h
#define lista_h
#include "nodo.h"

class lista {

	int n;
	int s;
	float tr;//tiempo de retorno
	float st;//suma de tiempos
	float sq;//sumaquantum
	char ban = 'T';//bandera obtención de quantum
	nodo* back;
	nodo* list;

	friend void imprimir(lista&);
	friend void imprimirP(lista&);

public:

	lista(int);
	~lista();

	void push(char, float, int);
	float takeOut();
	void inst(char, float, int);//insercion por tiempo
	void takeOutrr();//metodo con quantum
	void insp(char, float, int);//insercion por prioridad

	void priority();

	int size() { return s; }
	int capacity() { return n; }
	float timereturn() { return tr; }
	float sumatotal() { return st; }
	float getquantum();
	char letraNode() { return list->letra(); }
	float timeNode() { return list->time(); }
	int prioridad() { return list->prior(); }

	bool full() { return s == n; }
	bool empty() { return s == 0; }

};

#endif //lista_h

void imprimir(lista&); 
void imprimirP(lista&);