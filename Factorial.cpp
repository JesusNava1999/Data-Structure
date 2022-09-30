#include<iostream>

long fact(long n){
	if(n==0) return 1;
	else return n * fact(n-1);
}


int main(){
	
	long x;
	
	scanf("%i", &x);
	
	printf("%li: %li\n",x,fact(x));
	
}
