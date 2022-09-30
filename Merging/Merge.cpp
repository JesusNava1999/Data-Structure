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
		}
		while(pivot<list[j]){
			j--;
		}	
		if(i<=j){
			swap(list[i],list[j]);
			i++;
			j--;
		}
	}while(i<j);
	if(left<j){
		Qsort(list,left,j);
	}
	if(i<right){
		Qsort(list,i,right);
	}
}

int *merge(int *a, int n, int *b, int m){
	int *c = new int [n+m];
	int i=0,j=0,k=0;
	while((j<n)and(j<m)){
		if (a[i]<b[j]){
			c[k] = a[i];
			i++;
		} else {
			c[k] = b[j];
			j++;
		}
		k++; 
	}
	while(i<n){
		c[k] = a[i];
		i++;
		k++;
	}
	while(j<m){
		c[k] = b[j];
		j++;
		k++;
	}
	return c;
}

int main(){
	int n,m;
	cout << "N: ";
	cin >> n;
	cout << "M: ";
	cin >> m;
	int *a = array(n);
	int *b = array(m);
	Qsort(a,0,n-1);
	Qsort(b,0,m-1);
	cout << "Lista A ordenada: " << endl;
	printList(a,n);
	cout << "\nLista B ordenada: " << endl;
	printList(b,m);
	cout << "\nListas A y B mezcladas: " << endl;
	int *c = merge(a,n,b,m);
	printList(c,n+m);
	return 0; 
}
