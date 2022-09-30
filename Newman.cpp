#include<stdio.h>

int main(){
	int *p = new int[10];
	
	for(int i = 0; i<10; i++) p[i] = 0;
	
	for(int i = 0; i<10; i++) printf("p[%i]: %i\n", i, p[i]);
	
	//*p = 5;
	
	//p = nullptr
	
	//printf("%i\n", *p);
	
	//delete p;
	
	delete [] p;	
	return 0;
}
