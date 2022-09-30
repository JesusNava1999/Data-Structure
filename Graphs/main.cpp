#include <iostream>
#include "grafo.h"
using namespace std;
int main(){
	grafo g(6);	
	g.set(1,3);
	g.set(1,6);
	g.set(2,3);
	g.set(2,4);
	g.set(2,5);
	g.set(3,5);
	g.set(4,5);
	g.set(4,6);
	g.set(5,6);
	g.print();
	cout << endl;
	g.unset(1,3);
	g.print();
	return 0;
}
