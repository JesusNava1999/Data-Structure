#include<stdio.h>

void swap(int &a, int &b){//alias por referencia
	int aux = a;
	a = b;
	b = aux;
}

int main(){
	//b es un alias de a
	int a = 5;
	int &b = a;
	printf("Este es a: %i\n", a);
	printf("Este es b: %i\n", b);
	b*= 10;
	printf("Este es a: %i\n", a);
	printf("Este es b: %i\n", b);
	
	printf("dir a: %i\n", &a);
	printf("dir b: %i\n", &b);//paso de parametros por valor
	
	int m = 45, n = 50;
	printf("%i\n", m);
	printf("%i\n", n);
	
	swap(m,n);
	
	printf("%i\n", m);
	printf("%i\n", n);
	
}
