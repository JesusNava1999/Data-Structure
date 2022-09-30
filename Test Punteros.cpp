#include<iostream>
int main(){
	int a,*d_a;
	a=15;
	std::cout << "Valor de variable a: " << a << std::endl;
	std::cout << "Direccion de variable a: " << &a << std::endl;
	d_a=&a;
	std::cout << "\n\nInformacion dentro de puntero d_a: " << *d_a << std::endl;
	std::cout << "Direccion de puntero d_a " << d_a << std::endl;
	return 0;
}
