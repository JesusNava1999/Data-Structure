#include <iostream>
#include "stack.cpp"
using namespace std;
int main(){
	int x;
	stack p(10);
	cout<<"Ingrese 10 datos"<<endl;
	for(int i=0;i<10;i++){
		cin>>x;
		if(p.full()==false){
			p.push(x);
		} else {
			cout<<"Pila Llena..."<<endl;
		}
	}
	system("pause");
	cout<<endl<<"Datos"<<endl<<endl;
	while(p.empty()==false){
		cout<<p.pop()<<"\tDato\t-\t";
		cout<<p.size()<<"\tLugar\t"<<endl;
	}
	cout<<"Pila vacia"<<endl;
	p.~stack();
	return 0;
}
