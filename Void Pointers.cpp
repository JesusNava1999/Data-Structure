#include<iostream>
int main(){
	void *p;
	int a = 15;
	p = &a;
	std::cout<<"Valor a: "<<a<<std::endl;
	std::cout<<"Ubicacion puntero p: "<<p<<std::endl;
	std::cout<<"Direccion variable a: "<<&a<<std::endl;
	std::cout<<"Contenido en puntero p: "<<*(int *)p<<std::endl;
	return 0;
	
}
