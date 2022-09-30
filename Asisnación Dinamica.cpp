#include<iostream>
#include<stdlib.h>
int n,*N;
void pedir_notas(){
	std::cout << "Numero de Notas: " << std::endl;
	std::cin >> n;
	N = new int [n];
	for(int i=0; i < n; i++){
		std::cout << "Digite nota #" << i+1 << ":" << std::endl;
		std::cin >> N[i];
	}
}
void imprimir_notas(){
	std::cout << "Imprimiendo Notas...." << std::endl;
	for(int i=0; i < n; i++){
		std::cout << "Nota #" << i+1 << ":" << N[i] << std::endl;
	}
}
int main(){
	pedir_notas();
	std::cout<<std::endl;
	imprimir_notas();
	delete [] N;
	return 0;
}
