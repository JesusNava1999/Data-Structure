#include<iostream>
float sum (float a, float b) {return a+b;}
float rest (float a, float b) {return a-b;}
float mult (float a, float b) {return a*b;}
float div (float a, float b) {return a/b;}
int menu(){
	int op;
	std::cout << "Opcion 1: Sumar" << std::endl;
	std::cout << "Opcion 2: Restar" << std::endl;
	std::cout << "Opcion 3: Multiplicar" << std::endl;
	std::cout << "Opcion 4: Division" << std::endl;
	std::cout << "Otra: Salir" << std::endl;
	std::cin >> op;
	return op;
}
int main(){
	float (*opc) (float,float);
	float a=40,b=20;
	switch(menu()){
		case 1: 
			opc = sum;
			break;
		case 2:
			opc = rest;
			break;
		case 3:
			opc = mult;
			break;
		case 4:
			opc = div;
			break;
		default:
			opc = NULL;
			break;						
	}
	if (opc!=NULL){
		std::cout << opc(a,b) << std::endl; 
	}
	return 0;
}
