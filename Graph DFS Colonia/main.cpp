#include "stack.h"
#include "arbol.h"
#include "grafo.h"
#include <iostream>
using namespace std;
int Nodos = 49;
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
	arbol M(Nodos);	
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
int main(){
	int source,target;
	stack *st = new stack (Nodos);
	grafo g(Nodos);	 
	g.set(1,2);
	g.set(1,5);
	g.set(2,3);
	g.set(2,5);
	g.set(3,4);
	g.set(3,9);
	g.set(4,8);
	g.set(5,11);
	g.set(6,7);
	g.set(6,32);
	g.set(7,8);
	g.set(8,9);
	g.set(8,31);
	g.set(9,30);
	g.set(9,49);
	g.set(10,23);
	g.set(10,25);
	g.set(10,41);
	g.set(11,12);
	g.set(11,13);
	g.set(12,14);
	g.set(12,26);
	g.set(12,49);
	g.set(13,14);
	g.set(14,15);
	g.set(14,24);
	g.set(15,16);
	g.set(16,17);
	g.set(16,20);
	g.set(17,18);
	g.set(18,19);
	g.set(18,20);
	g.set(19,21);
	g.set(20,21);
	g.set(20,22);
	g.set(21,23);
	g.set(22,23);
	g.set(24,16);
	g.set(24,22);
	g.set(24,25);
	g.set(24,26);
	g.set(25,41);
	g.set(25,27);
	g.set(26,28);
	g.set(27,29);
	g.set(27,42);
	g.set(28,29);
	g.set(27,42);
	g.set(28,29);
	g.set(28,30);
	g.set(29,43);
	g.set(30,31);
	g.set(30,44);
	g.set(31,32);
	g.set(32,33);
	g.set(32,48);
	g.set(33,34);
	g.set(33,47);
	g.set(34,35);
	g.set(35,36);
	g.set(35,47);
	g.set(36,37);
	g.set(37,38);
	g.set(38,39);
	g.set(39,40);
	g.set(39,45);
	g.set(40,41);
	g.set(40,42);
	g.set(42,43);
	g.set(43,44);
	g.set(44,45);
	g.set(45,46);
	g.set(46,47);
	g.set(46,48);
	g.set(49,28);
	//g.print();
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
	//g.print();
	delete st;
	return 0;
}
