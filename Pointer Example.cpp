#include<stdio.h>

int main(){
	
	int a = 21;
	int *p = &a;
	
	printf("%p\n", p);
	printf("%p\n", &a);
	printf("%i\n", *p);
    printf("%i\n", a);
    
    *p *= 2;
    
    printf("%i\n", a);
    
    int *p1 = NULL;
    
    if(p1) printf("%i\n", *p1);
    else printf("None\n");
    
    int lista[10] = { 1,2,3,4,5,6,7,8,9,10};
	
	for(int i = 0; i<10; i++) printf("%i\n", lista[i]);
	    
    p = &lista[4];
	
	printf("\nIndireccion: %i\n", *p);
	printf("Tamanio de int: %li\n", sizeof(int));
	
	printf("%p\n", &lista[0]); 
    
    printf("%p\n", p);
    printf("%p\n", lista);
    for(int i = 0; i<10; i++) printf("%3i", *(lista + i));
}
