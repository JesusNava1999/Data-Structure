#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int ca;
int *array(int n){
	srand((unsigned)time(NULL));
	int *list = new int [n];
	for (int i = 0; i < n; i++){
		list[i] = (rand()%n*10);
	}
	return list;
}

void swap(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

void printList(int *list, int n){
	for (int i = 0; i < n; i++){
		cout << list[i] << " ";
	}
}

void Qsort(int *list, int left, int right){
	int pivot = list[(left+right)/2];	
	int i = left;
	int j = right;
	do{
		while(list[i]<pivot){
			i++;
			ca++;
		}
		while(pivot<list[j]){
			j--;
			ca++;
		}	
		//
		if(i<=j){
			swap(list[i],list[j]);
			i++;
			j--;
			//
		}
		//		
	}while(i<j);
	
	if(left<j){
		Qsort(list,left,j);
		
	}
	if(i<right){
		Qsort(list,i,right);
		
	}
	
}

int main(){
	int n=1000;
	//cout << "N: " << endl;
	//cin >> n;
	int *list = array(n);
	cout << "Lista sin ordenar" << endl;
	printList(list,n);
	Qsort(list,0,n-1);
	cout << "\nLista ordenada" << endl;
	printList(list,n);
	cout << "ca	" << ca << endl;
	delete [] list;
	return 0;
}
