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
	cout << "\nBuscar Dato: " << endl;
	cin >> x;
	C = l.search(x,r);
	if (C){
		cout << "Si existe: " << r << endl;
	} else {
		cout << "No existe" << endl;
	}
	cout << "\nEliminar Dato: " << endl;
	cin >> x;
	C = l.extract(x);
	if (C){
		cout << "Se elimino: " << x << endl;
	} else {
		cout << "No se encontro Dato " << x << endl;
	}
	cout << "\nExtrayendo datos..." << endl;
	imprimir(l);
	return 0;
}
