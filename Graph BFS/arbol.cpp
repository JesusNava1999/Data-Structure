#include <iostream>
#include <stddef.h>
#include "arbol.h"
#include "nodoArbol.h"
using namespace std;
arbol::arbol(int c){
	root = NULL;
	n = c;
	s = 0;
}
arbol::~arbol(){
	root=NULL;
}
void arbol::ins(int x){	
	nodo *p, *q;
	if (root==NULL){
		root = new nodo(x);
		s++;
		//cout << "Marcado " << x << endl;
		return;
	} else {	
		p = root;
		while(( p != NULL ) and ( p->Data() != x )){
			q = p;
			if (x < p->Data() ){
				p = p->Left();
			} else if (x > p->Data() ){
				p = p->Right();
			}
			if (p==NULL){
				nodo *aux = new nodo(x);
				if (x < q->Data() ){
					q->Left(aux);		
					s++;
					//cout << "Marcado " << x << endl;
					return;
				} else {
					q->Right(aux);					
					s++;
					//cout << "Marcado " << x << endl;
					return;
				}
			} 	
		}		
	}
	return;
}
int arbol::Remove(nodo* root, int x){
	//Search
	nodo *p,*q,*lgp;
	bool Qleft = false;
	int D;
	p = root;
	while((p!=NULL)and(p->Data()!=x)){
		q = p;
		if (x < p->Data()){
			p = p->Left();
			Qleft = true;
		} else {
			p = p->Right();
			Qleft = false;
		}
	}
	if(p==NULL){
		cout << "No encontrado ";
		return -1;
	}
	D = p->Data();
 	//Leaf Nodes
	if ((p->Left()==NULL)and(p->Right()==NULL)){
		if (p==root){
			root = NULL;	
			cout << "Leaf Node" << endl;
			return D;
		} else if (Qleft==true){
			q->Left(NULL);
			cout << "Leaf Node" << endl;
			return D;
		} else {
			q->Right(NULL);
			cout << "Leaf Node" << endl;
			return D;
		}
		return D;
	}
	//One Child Nodes
	if (p->Left()==NULL){	
		if (p==root){
			root = p->Right();	
			cout << "One child Node" << endl;		
		} else if(Qleft==true){
			cout << "One child Node" << endl;
			q->Left(p->Right());
		} else {
			cout << "One child Node" << endl;
			q->Right(p->Right());
		}
		return D;
	}
	else if(p->Right()==NULL){
		if (p==root){
			cout << "One child Node" << endl;
			root = p->Left();
		} else if(Qleft==true){
			q->Left(p->Left());
			cout << "One child Node" << endl;
		} else {
			q->Right(p->Left());
			cout << "One child Node" << endl;
		}
		return D;
	}
	//Complete Nodes
	if (p==root){
		root = p->Right();	
		cout << "Complete Node" << endl;
		return D;	
	} else if(Qleft==true){
		q->Left(p->Right());
		cout << "Complete Node" << endl;
		return D;	
	} else {
		q->Right(p->Right());	
		cout << "Complete Node" << endl;
		return D;
	}	 
	lgp = p->Right();
	while(lgp->Left()!=NULL){
		lgp = lgp->Left();
	}
	lgp->Left(p->Left());
}

void arbol::Inorder(nodo* n){
	if (n==NULL){
		return;
	} else {
		arbol::Inorder(n->Left());
		cout << n->Data() << "	";
		arbol::Inorder(n->Right());
	}
}
void arbol::PreOrder(nodo* n){
	if (n==NULL){
		return;
	} else {
		cout << n->Data() << "	";
		arbol::PreOrder(n->Left());
		arbol::PreOrder(n->Right());
	}
}
void arbol::PostOrder(nodo* n){
	if (n==NULL){
		return;
	} else {
		arbol::PostOrder(n->Left());
		arbol::PostOrder(n->Right());
		cout << n->Data() << "	";
	}
}
bool arbol::Buscar(nodo* root, int x){
	nodo *p,*q;	
	p = root;
	while((p!=NULL)and(p->Data()!=x)){
		q = p;
		if (x < p->Data()){
			p = p->Left();				
		} else {
			p = p->Right();			
		}		
	}
	if(p==NULL){		
		return false;
	} else {		
		return true;
	}
}
