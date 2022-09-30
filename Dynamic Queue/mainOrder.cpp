#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stack.hpp"
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int n=20;
	int inf,sup;
	inf = n/2;
	sup = n + (n/2);
	int m = rand()%(sup-(inf-1))+sup;
	stack s(n);
	cout << "Se van a intentar ingresar " << m << "	datos en una pila con " << n << " de capacidad" << endl;
	for(int i = 0; i < m, i++){
		int x = rand()%100+1;
		s.push(x);
	}
	 	
	return 0;
}
