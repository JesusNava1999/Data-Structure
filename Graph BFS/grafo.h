#include "arbol.h"
#ifndef grafo_h
#define grafo_h
class grafo {

	int n; // orden del grafo(numero de vertices)
	int m; //tamaño del grafo(numero de aristas)
	bool* a;//arreglo
	int f(int, int);
public:
	grafo(int);
	~grafo();
	
	void A(int,int*&,int&,arbol*);
	void set(int, int);//poner
	void unset(int, int);//quitar
	bool edge(int, int);
	void print();
};
#endif // grafo_h
