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
int Maxchild(int *a, int i){	
	if (Right(i)>s){
		return Left(i);
	}
	if (a[Left(i)]>a[Right(i)]){
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
void printList(int *list, int n){
	for (int i = 0; i < n; i++){
		cout << list[i] << " ";
		s++;
	}
	cout << endl;
}
int *array(int n){
	srand((unsigned)time(NULL));
	int *list = new int [n];
	for (int i = 0; i < n; i++){
		list[i] = (rand()%(10*n));
	}
	return list;
}
void Heaping(int *a, int n){
	int i,k,m;
	k = parent(n-1);
	while(k>=0){
		i = k;
		while(i<=parent(n-1)){
			m = Maxchild(a,i);
			if (a[i]<a[m]){
				swap(a[i],a[m]);
			}
			i = m;
		}
		k--;
	}
}
int main(){
	int n;
	cout << "N: ";
	cin >> n;
	int *a = array(n);
	cout << "List" << endl;
	printList(a,n);
	cout << "Heaped" << endl;
	Heaping(a,n);
	printList(a,n);
	delete [] a;
	return 0;
}
