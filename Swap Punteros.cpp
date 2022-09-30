#include<iostream>
void swap(int &a, int &b){
	int aux;
	aux = a;
	a = b;
	b = aux;  
}
int main(){
	int a=15,b=20;
	std::cout << "a: " << a << "	b: " << b << std::endl;
	swap(a,b);
	std::cout << "a: " << a << "	b: " << b << std::endl;
	return 0;
}
