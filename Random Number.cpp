#include<cstdlib>
#include<conio.h>
#include<cstdio>
#include<ctime>

int main(){	
	int n = 250, m = 200;
	//srand((unsigned) time(nullptr));//semilla
	//for(int i=0;i<100;i++) printf("%i\n", rand()); //s% 100
	//ranges of values 
	srand(time(NULL));//semilla
	for(int i=0;i<100;i++) printf("%i\n", rand() % ((m-(n-1)+n))); 	
	return 0;
}
