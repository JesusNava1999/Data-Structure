#include <iostream>
#include <cstdlib>
#include <ctime>
#include "arbol.h"
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	int n = 10,x,Data;
	arbol a(n);
	while(!a.full()){
		x = (1+rand()%(n*5));
		bool h = a.ins(x);	
	}
	cout << endl << "Inordered" << endl;
	a.Inorder(a.Root());
	cout << endl << "Preordered" << endl;
	a.PreOrder(a.Root());
	cout << endl << "Postordered" << endl;
	a.PostOrder(a.Root());
	cout << endl << "Dato a eliminar: ";
	cin >> Data;
	cout << a.Remove(a.Root(),Data) << endl;
	cout << endl << "Inordered" << endl;
	a.Inorder(a.Root());
	cout << endl << "Preordered" << endl;
	a.PreOrder(a.Root());
	cout << endl << "Postordered" << endl;
	a.PostOrder(a.Root());
	return 0;
}
