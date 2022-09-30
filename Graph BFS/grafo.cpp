#include <iostream>
#include "grafo.h"
using namespace std;
int grafo::f(int i,int j){
	if (i < j) {
		int k = i;
		i = j;
		j = k;
	}
	return (i-1)*(i-2)/2+j-1;
}
grafo::grafo(int order):n(order),m((n*(n-1)/2)){
	a = new bool[m];
	for (int i=0; i<m; i++) a[i] = false;
}

grafo::~grafo(){delete[] a;}

void grafo::set(int i, int j){
	if (i!=j && i<=n && j<=n) a[f(i,j)] = true;
}

void grafo::unset(int i, int j) {
	if (i!=j && i<=n && j<=n) a[f(i,j)] = false;
}

bool grafo::edge(int i, int j) {
	return (i!=j && i<=n && j<=n) ? a[f(i,j)] : false;
}

void grafo::print() {
	for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if(i==j){
				cout << " " << false;
			} else{
				cout << " " << a[f(i,j)];	
			}			
		}	
		cout << endl;	
	}
}	
void grafo::A(int x, int *&vecinos, int &h, arbol *M){
	h=0;
	int i = x;
	for (int j = 1; j<=n; j++){
		if ((a[f(i,j)]==true)and(i!=j)){
			if (!M->Buscar(M->Root(),j)){
				M->ins(j);
				vecinos[h] = j;				
				h++;
			}					
		}
	}
	return;
}

