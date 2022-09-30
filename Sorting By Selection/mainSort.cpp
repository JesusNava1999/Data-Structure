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

void sorting(int *&list,int n){
	int k = n;
	while(k>1){
		int max = 0;
		int i = 1;
		while (i <= k){
			if (list[i]>list[max]){
				max = i;				
			}
			i++;
		}
		swap(list[k],list[max]);
		k--;
	}
}


int main(){
	int n=100;
	int *list = array(n);
	cout << "Lista antes de Ordenar" << endl;
	printList(list,n);
	cout << endl << endl;
	sorting(list,n);
	cout << "Lista Ordenada" << endl;
	printList(list,n);
	return 0;	
}
