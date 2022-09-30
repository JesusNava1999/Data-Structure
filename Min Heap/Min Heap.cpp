#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int s=0;
int parent(int i){
	int x = (i/2);
	return x;
}
int Right(int i){
	return ((2*i)+1);
}
int Left(int i){
	return (2*i);
}
int Minchild(int *a, int i){	
	if (Right(i)>s){
		return Left(i);
	}
	if (a[Left(i)]<a[Right(i)]){
		return Left(i);
	} else {
		return Right(i);
	}
}
void swap(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}

void Insert(int *a,int x){
	a[s] = x;
	int i = s;
	while((i>0)and(a[i]<a[parent(i)])){
		swap(a[i],a[parent(i)]);
		i = parent(i);
	}
	s++;		
}
int Takeout(int *a,int n){
	int m,i=0;
	int x = a[i];
	i = 0;
	a[0] = a[n-1];	
	s--;
	while((i<=parent(s))and(a[i]>a[Minchild(a,i)])){
		m = Minchild(a,i);		
		swap(a[i],a[m]);
		i = m;
	}
	return x;
}
void printList(int *list, int n){
	for (int i = 0; i < n; i++){
		cout << list[i] << " ";
	}
	cout << endl;
}
int main(){
	srand((unsigned)time(NULL));
	int n=10,x;
	int *a = new int [n];
	while(s<n){
		x = (rand()%(10*n));
		cout << "Dato: " << x << endl;		
		Insert(a,x);
		printList(a,s);			
	}
	cout << endl << "--------------EXTRAYENDO DATOS--------------" << endl << endl;
	system("pause");
	cout << endl;
	while(s>0){
		cout << "Lista " << endl;
		printList(a,s);
		cout << "Taking Out ->	";
		cout << Takeout(a,s) << endl << endl;
		system("pause");
		cout << endl << endl;
	}	
	delete [] a;
	return 0;
}
