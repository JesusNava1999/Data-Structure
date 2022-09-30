#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
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
int *array(int n){
	srand((unsigned)time(NULL));
	int *list = new int [n];
	for (int i = 0; i < n; i++){
		list[i] = (rand()%(10*n));
	}
	return list;
}
void scramble(int *a, int n){
	srand((unsigned)time(NULL));
	int k=(n-1);
	while(k>1){
		int x = 1+rand()%((k+1)-1);	
		swap(a[k],a[x]);
		k--;
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
int main(){
	int n,*list;
	cout << "N: ";
	cin >> n;	
	list = array(n);
	cout << "Original" << endl;
	printList(list,n);
	cout << endl;	
	cout << "Ordenada" << endl;
	Qsort(list,0,n-1);
	printList(list,n);
	cout << endl;
	scramble(list,n);
	cout << "Scramble" << endl;
	printList(list,n);
	delete [] list;
	return 0;	
}
