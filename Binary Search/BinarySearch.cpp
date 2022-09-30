#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *array(int n){
	srand((unsigned)time(NULL));
	int *list = new int [n];
	for (int i = 0; i < n; i++){
		list[i] = (1+rand()%(10*n));
	}
	return list;
}
void printList(int *list, int n){
	for (int i = 0; i < n; i++){
		cout << list[i] << " ";
	}
}
int *merge(int *a, int n, int *b, int m, int *c){
	int i=0,j=0,k=0;
		
	while((i<n)and(j<m)){
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
void mergeSort(int *list, int n){ 
	int *a,*b,*c;
	int k,i=0,u=0;
	if (n<=1){	
		return;
	}
	if (n>1){	
		k = (n/2);	
		a = new int [k];
		b = new int [n-k];	
		while(i<k){
			a[i] = list[i];
			i++;
		}
		while(i<n){
			b[u] = list[i];
			i++,u++;
		}
	
		mergeSort(a,k);
		mergeSort(b,n-k);
		list = merge(a,k,b,n-k,list);
		delete [] a;
		delete [] b;				
	}	
}
bool BinarySearch(int *a, int x, int n){
	int lower = 0, higher=(n-1);
	while(lower<=higher){
		int k = ((lower+higher)/2);
		if (a[k]==x){
			return true;
		} else if (x<a[k]){
			higher = (k-1);
		} else if(x>a[k]){
			lower = (k+1);
		}
	}
	return false;
}
int main(){
	int *list,n=20;
	list = array(n);
	cout << "Desordenado" << endl;
	printList(list,n);
	cout << endl << "Ordenado" << endl;
	mergeSort(list,n);
	printList(list,n);
	int x;
	cout << endl << "Buscar digito en el array: ";
	cin >> x;
	bool d;
	d = BinarySearch(list,x,n);
	if (d){
		cout << "Dato encontrado: " << x << endl; 
	} else {
		cout << "Dato NO encontrado" << endl; 
	}
	return 0;
}
