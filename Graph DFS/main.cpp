#include "stack.h"
#include "arbol.h"
#include "grafo.h"
#include <iostream>
using namespace std;
bool Exist(arbol A, int x){
	bool T = A.Buscar(A.Root(),x);
	if (T==true){
		return true;
	} else {
		return false;
	}
}
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
			//cout << u << " es vecino de " << v << endl;			
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
int main(){
	int source,target;
	stack *st = new stack (8);
	grafo g(8);	 
	g.set(1,2);
	g.set(1,4);
	g.set(2,5);
	g.set(3,6);
	g.set(4,7);
	g.set(5,6);
	g.set(5,7);
	g.set(6,8);
	g.set(7,8);	
	g.print();
	cout << endl;
	cout << endl << "Source: ";
	cin >> source;
	cout << endl << "Target: ";
	cin >> target;
	stack *u = DFS(g,st,target,source);
	cout << endl << "Recorrido" << endl;	
	while(!u->empty()){
		cout << u->Pop() << endl;
	}	
	cout << endl;
	g.print();
	delete st;
	return 0;
}
