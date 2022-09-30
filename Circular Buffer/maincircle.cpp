#include "circle.cpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand((unsigned)time(NULL));	
	int n=10;
    int inf = n/2;
    int sup = n+(n/2);
    int m = rand() % (sup - (inf-1))+(inf);	
	circle c(n);
	cout << "Circulo con " << n << " datos" << endl;
	cout << "Tratando de ingresar " << m << " datos por el Front (PRINCIPIO DE LA FILA)" <<endl;
	//cout << "Tratando de ingresar " << m << " datos por el Rear (FINAL DE LA FILA)" <<endl;
	for (int i=0; i<m; i++){
		int x = rand()%20+1;
		cout << x << " <- Dato	";
		c.enqueueFirst(x);
		//c.enqueueLast(x);
		cout << endl; 
	}
	cout << "Retirando datos desde el Front (PRINCIPIO DE LA FILA)" << endl;
	//cout << "Retirando datos desde el Rear (FINAL DE LA FILA)" << endl;
	while(!c.empty()){
		cout << c.dequeueFirst() << endl;
		//cout << c.dequeueLast() << endl;
	}
	return 0;	
}
