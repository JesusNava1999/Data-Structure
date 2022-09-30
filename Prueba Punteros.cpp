#include <stdio.h>
#include <iostream>

int main(){
	int t1 = (5+8);
	int *t0;//int *t0 = &t1;
	
	t0 = &t1;
	
	printf("%i", *t0);
	return 0;
}
