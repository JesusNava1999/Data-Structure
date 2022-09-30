#include <iostream>
#include <cstdlib>
#include <ctime>
#include "list.hpp"
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	int n=10,x,i=1,r;
	bool C;
	list l(n);
	
	while(l.full()==false){
		cout << "Intento " << i << "\t";
		x = rand()%20+1;
		cout << x << "	dato";
		l.ins(x);
		cout << endl;
		i++;
	}
	cout << "Extrayendo datos..." << endl;
	imprimir(l);
	cout << "\nEl mayor elemento de la lista" << endl;
	cout << l.max() << endl;
	cout << "\nEl menor elemento de la lista" << endl;
	cout << l.min() << endl;
	return 0;
}
