/*
Nombre: Nava Cuellar Jose De Jesus
#Control: 18011108
Practica: Grafo Colonia
Archivo: arbol.h
*/
#ifndef arbol_h
#define arbol_h
#include "nodoArbol.h"
#include <stddef.h>
class arbol{
	nodo* root;
	int n;
	int s;	

	public:
		
	arbol(int);
	~arbol();
	
	void ins(int);
	nodo *Root(){
		nodo *copy = root;
		return copy;
	}
	void Inorder(nodo*);
	void PreOrder(nodo*);
	void PostOrder(nodo*);
	int Remove(nodo*,int);	
	
	bool Buscar(nodo*,int);
	
	bool empty(){
		if (s==0){
			return true;
		} else {
			return false;
		}
	}
	
	bool full(){
		if (s==n){
			return true;
		} else {
			return false;
		}
	}
	
	int size(){
		return s;
	}
	
	int capacity(){
		return n;
	}	 
};
#endif
