#include "queue.h"
#include "arbol.h"
#include "grafo.h"
#include <iostream>
using namespace std;

bool Exist(arbol *A, int x){
	bool T = A->Buscar(A->Root(),x);
	if (T==true){		
		return true;
	} else {
		return false;
	}
}

bool All(grafo G, int x, int *&vecinos, int &h, arbol *M){
	G.A(x,vecinos,h,M);	
}
arbol *BFS(grafo G, queue *Q, int source, int target){	
	int *vecinos = new int[10];
	int u,v,h;
	arbol *M = new arbol(10);
	Q->enqueue(source);
	M->ins(source);
	while(!Q->empty()){
		u = Q->dequeue();
		All(G,u,vecinos,h,M);
		for (int i=0; i<h; i++){							
			M->ins(vecinos[i]);
			cout << "Grafo nuevo: " << endl;
			cout << "Vertice " << u << "	||	Vertice " << vecinos[i] << endl << endl; 
			if (target == vecinos[i]){
				return M;
				delete M;
			}
			Q->enqueue(vecinos[i]);							
		}		
	}
	return M;
	delete M;
}

int main(){
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
	cout << endl;
	arbol *check = BFS(g,q,source,target);
	cout << endl;
	/*check->Inorder(check->Root());
	cout << endl;
	check->PostOrder(check->Root());
	cout << endl;
	check->PreOrder(check->Root());*/
	cout << endl << endl;
	g.print();
	delete q;
	return 0;
}
