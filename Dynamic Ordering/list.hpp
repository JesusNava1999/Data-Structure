#ifndef list_hpp
#define list_hpp
#include<stdio.h>
#include "node.hpp"
class list
{
	node* inicio;
	
	int n;
	int s;

	friend void imprimir(list &);

public:

	list(int);
	~list();

	bool ins(int);
	bool search(int,int &);
	bool extract(int);

	int capacity() { return n; }
	int size() { return s; }

	bool empty() { return s == 0; }
	bool full() { return s == n; }
};
#endif
void imprimir(list &);
