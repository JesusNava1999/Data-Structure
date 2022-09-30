#include <iostream>
#include "stack.hpp"
using namespace std;
int main(){
	int x;
	stack p(10);	
	cout << "Ingrese 10 datos" << endl;		//Llenar pila
	for (int i=0; i < 10; i++){
		cin >> x;
		if(p.full()==false){
			p.push(x);
		} else {
		cout << "Pila llena..." << endl;
		}
	}	
	system("pause");	
	cout << endl << "Datos" << endl << endl;	//Vaciar Pila (mostrar en pantalla datos de pila)
	while(p.empty()==false){
		cout << p.pop() << "	Dato	" << endl;
	}	
	cout << "Pila vacia" << endl;
	return 0;	
}
