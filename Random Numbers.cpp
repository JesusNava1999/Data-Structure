#include<iostream>
#include<stdlib.h>
#include<time.h>
int main(){
	int v[20],max,min;	
	std::cout<<"Minimo: "<<std::endl;
	std::cin>>min;
	std::cout<<"Maximo: "<<std::endl;
	std::cin>>max;	
	srand(time(NULL));
	std::cout<<"\n\n\n\n"<<std::endl;
	for(int i=0; i<20; i++){
		v[i] = min+rand()%(max-min+1);
		std::cout<<v[i]<<std::endl;
	}
	return 0;
}
