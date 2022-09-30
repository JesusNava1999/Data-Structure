#include<stdio.h>
#include<iostream>

/*int succ(int);

int main(){
	
	int a = 5;	
	
	printf("%i\n", succ(a));
}

int succ(int x){ return x + 1;}
*/
int siguiente(int x){ return x + 1;}
int (*succ)(int);

float mult(float x, float y) { return x * y;}
float div(float x, float y) { return x / y;}
float sum(float x, float y) { return x + y;}
float rest(float x, float y) { return x - y;}

int menu(){
	int op; 
	printf("[1] suma\n");
	printf("[2] resta\n");
	printf("[3] multiplicacion\n");
	printf("[4] division\n");
	printf("[5] terminar\n");
	scanf("%i", &op);
	return op;
}	
	
int main(){
	
	float (*fn)(float,float), a, b;
	
	scanf("%f%f", &a, &b);
	
	switch(menu()){
		case 1: fn = sum; break;
		case 2: fn = rest; break;
		case 3: fn = mult; break;
		case 4: fn = div; break;
		default: fn = NULL; 
	}
	
	if ( fn != NULL){
		printf("%.5f",  fn(a, b));
	}
	
	/*int a = 5;	
	
	succ = siguiente;
	
	printf("%i\n", succ(a));*/
	
}
