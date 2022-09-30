#include<stdio.h>

void print(char *str){
	while(*str != '\0') printf("%c", *str++);
}

int len (char *str){
	int cont = 0;
	while(*str){
		cont++;
		str++;
	}
	return cont;
}

void tnirp(char *str){
	int n = len(str);
	
	str += n;
	str--;
	while(n-- > 0){
		printf( "%c", *str--);
	}
	printf("\n");
}

void tnirp2(char *str){
	char *p = str;
	
	while(*p++);
	
	do{
		--p;
		printf("%c", *p);//*--p
	}while(p != str);	
}

int main(){
	print("Hola mundo\n");
	printf("%i\n", len("Hola mundo"));
	
	tnirp("Hola mundo\n");
	tnirp2("Hola mundo\n");	
}
