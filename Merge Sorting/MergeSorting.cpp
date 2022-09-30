#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int ca;
int *array(int n){
	srand((unsigned)time(NULL));
	int *list = new int [n];
	for (int i = 0; i < n; i++){
		list[i] = (1+rand()%(10*n));
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
		ca++;
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

int main(){
	int n=1000,*c;
	//cout << "N: " << endl;
	//cin >> n;
	int *list = array(n);
	cout << "Lista sin ordenar" << endl;
	printList(list,n);	
	cout << endl;
	mergeSort(list,n);
	cout << "Lista ordenada" << endl;
	printList(list,n);
	cout << "c	" << ca << endl;
 	delete [] list;
	return 0;		
}
