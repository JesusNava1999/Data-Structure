#include <iostream>
#include <stddef.h>
#include "arbol.h"
#include "nodo.h"
using namespace std;
arbol::arbol(int c) {
	root = NULL;
	n = c;
	s = 0;
}
arbol::~arbol() {
	root = NULL;
}
void arbol::ins(int x) {
	nodo* p, * q;
	if (root == NULL) {
		root = new nodo(x);
		s++;
		return;
	}
	else {
		p = root;
		while ((p != NULL) and (p->Data() != x)) {
			q = p;
			if (x < p->Data()) {
				p = p->Left();
			}
			else if (x > p->Data()) {
				p = p->Right();
			}
			if (p == NULL) {
				nodo* aux = new nodo(x);
				if (x < q->Data()) {
					q->Left(aux);
					s++;
					return;
				}
				else {
					q->Right(aux);
					s++;
					return;
				}
			}
		}
	}
}
void arbol::Inorder(nodo* n) {
	if (n == NULL) {
		return;
	}
	else {
		arbol::Inorder(n->Left());
		cout << n->Data() << endl;
		arbol::Inorder(n->Right());
	}
}