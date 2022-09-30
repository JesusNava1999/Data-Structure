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
bool odd(int k){
	if (k%2==0){
		return true;
	} else {
		return false;
	}
}
void suffle(int *a,int k,int n){
	if (k==0){
		printList(a,n);
		cout << endl;
	} else {
		int i=0;
		while(i<=k){
			suffle(a,k-1,n);
			if (odd(k)==false){
				swap(a[0],a[k]);
			} else {
				swap(a[i],a[k]);
			}
			i++;
		}
	}
}
int main(){
	int n,*list;
	cout << "N: ";
	cin >> n;	
	list = array(n);	
	suffle(list,n-1,n);	
	delete [] list;
	return 0;	
}
