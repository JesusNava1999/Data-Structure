#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int *array(int n){
	srand((unsigned)time(NULL));
	int *list = new int [n];
	for (int i = 0; i < n; i++){
		list[i] = (rand()%n);
	}
	return list;
}


void printList(int *list, int n){
	for (int i = 0; i < n; i++){
		cout << list[i] << " ";
	}
}


void swap(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

void Bsorting(int *&list, int n){
	int j = 2;
	while(j < n){
		int i = 0;
		while(i <= (n-j)){
			if(list[i]>list[i+1]){
				swap(list[i],list[i+1]);
			}
			i++;
		}
		j++;
	}
}

int main(){
	int n=100;
	int *list = array(n);
	cout << "Lista antes de Ordenar" << endl;
	printList(list,n);
	cout << endl << endl;
	Bsorting(list,n);
	cout << "Lista Ordenada" << endl;
	printList(list,n);
	return 0;	
}
