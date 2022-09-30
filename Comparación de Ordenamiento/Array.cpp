/*
Estudiante: Jose De Jesus Nava Cuellar
Numero de Control: 18011108
Practica: Ordering
Nombre del archivo: Array.cpp
*/
#include "Array.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
Array::Array(int c){
	srand((unsigned)time(NULL));
	s=0;
	n=c;
	a = new int [c];	
	for (int i=0; i<c; i++){
		a[i] = (1+rand()%(10*c));
		s++;
	}
}
Array::~Array(){
	delete [] a;
}
void Array::imprimir(int *List,int n){
	for (int i = 0; i < n; i++){
		cout << List[i] << " ";
	}
	cout << endl;
}
int Array::Parent(int i){
	int x = (i/2);
	return x;
}
int Array::Right(int i){
	return ((2*i)+1);
}
int Array::Left(int i){
	return (2*i);
}
int Array::MaxChild(int *a,int n){
	if (Right(n)>s){
		return Left(n);
	}
	if (a[Left(n)]>a[Right(n)]){
		return Left(n);
	} else {
		return Right(n);
	}
}
void Array::Swap(int &a,int &b){
		int aux = a;
		a = b;
		b = aux;
}
void Array::QuickSort(int *a, int left, int right){
	int pivot = a[(left+right)/2];
	int i = left;
	int j = right;	
	do{
		while(a[i]<pivot){
			i++;
			counter++;
		}
		while(pivot<a[j]){
			j--;
			counter++;
		}	
		if(i<=j){			
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<j);	
	if(left<j){
		Array::QuickSort(a,left,j);
	}
	if(i<right){
		Array::QuickSort(a,i,right);
	}
}
int *Array::Merge(int *a, int n, int *b, int m, int *c){
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
		counter++;
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
void Array::MergeSort(int *list, int n){
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
		Array::MergeSort(a,k);
		Array::MergeSort(b,n-k);		
		list = Array::Merge(a,k,b,n-k,list);
		delete [] a;
		delete [] b;				
	}
}
void Array::Scramble(int *List, int n){
	int k=(n-1);	
	while(k>1){
		int x = 1+rand()%((k+1)-1);		
		Array::Swap(List[k],List[x]);
		k--;
	}
}
void Array::HeapSort(int *a, int n){
	int k=s;
	while(k>0){			
		int m, i = 0;
		Array::Swap(a[i],a[k-1]);	
		k--;		
		while((i<Array::Parent(k))and(a[i]<a[Array::MaxChild(a,i)])){
			counter++;
			m = Array::MaxChild(a,i);		
			Array::Swap(a[i],a[m]);
			i = m;
		}		
	}		
}
void Array::Heaping(int *a, int n){
	int i,k,m;
	k = Array::Parent(n-1);
	while(k>=0){
		i = k;
		while(i<=Array::Parent(n-1)){
			m = Array::MaxChild(a,i);
			if (a[i]<a[m]){
				Array::Swap(a[i],a[m]);
			}
			i = m;
		}
		k--;
	}
}

int *Array::arreglo(){
	int *copy = a;
	return copy;
}
int Array::_counter(){
	return counter;
}
void Array::Counter(){
	counter = 0;
	return;
}
