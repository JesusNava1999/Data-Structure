#include "queue.h"
#include "arbol.h"
#include "grafo.h"
#include "stack.h"
#include <iostream>
using namespace std;
//Función BFS
bool ExistB(arbol *A, int x){
	bool T = A->Buscar(A->Root(),x);
	if (T==true){		
		return true;
	} else {
		return false;
	}
}
//Función BFS
bool All(grafo G, int x, int *&vecinos, int &h, arbol *M){
	G.A(x,vecinos,h,M);	
}
//Función DFS
bool ExistD(arbol A, int x){
	bool T = A.Buscar(A.Root(),x);
	if (T==true){
		return true;
	} else {
		return false;
	}
}
//Función DFS
bool Neighbor(grafo G, int x, int &v, arbol M){
	if (G.N(x,v,M)==true){		
		return true;
	} else {
		return false;
	}
}

stack* DFS (grafo G, stack *st, int source, int target){
	arbol M(8);	
	int u,v;
	st->push(source);
	while(!st->empty()){
		u = st->top();		
		M.ins(u);		
		if ((Neighbor(G,u,v,M)==true)){				
			st->push(v);
			M.ins(v);			
			if (v==target){
				return st;
			} 
		} else {			
			int aux = st->Pop();						
		}
	}
	return st;	
}

stack *BFS(grafo G, queue *Q, int source, int target, stack *&st){	
	int *vecinos = new int[10];
	int u,v,h;
	arbol *M = new arbol(10);
	grafo D(10);
	Q->enqueue(source);
	M->ins(source);
	while(!Q->empty()){
		u = Q->dequeue();
		All(G,u,vecinos,h,M);
		for (int i=0; i<h; i++){						
			M->ins(vecinos[i]);
			//cout << "Vertice: " << u << "	Arista: " << vecinos[i] << endl; 
			D.set(u,vecinos[i]);
			if (target == vecinos[i]){
				delete [] vecinos;
				return DFS(D,st,target,source);				
				delete M;					
			}
			Q->enqueue(vecinos[i]);							
		}		
	}
	delete [] vecinos;
	delete M;
	return DFS(D,st,source,target);		
}

int main(){
	stack *st = new stack(10);
	queue *q = new queue(10);
	int source,target;
	grafo g(10);
	g.set(1,2);
	g.set(1,4);
	g.set(2,3);
	g.set(2,5);
	g.set(2,7);
	g.set(2,8);
	g.set(3,4);
	g.set(3,9);
	g.set(3,10);	
	g.set(5,6);
	g.set(5,7);
	g.set(5,8);
	g.set(7,8);	
	g.print();
	cout << "Source: ";
	cin >> source;
	cout << "Target: ";
	cin >> target;	
	stack *check = BFS(g,q,source,target,st);
	cout << endl << endl;
	while(!check->empty()){
		cout << check->Pop() << endl;
	}
	cout << endl;
	g.print();
	delete q;
	delete st;
	return 0;
}
