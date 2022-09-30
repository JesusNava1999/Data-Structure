#include <iostream>
#include <cstdlib>
#include <ctime>
#include "arbol.h"
using namespace std;
int main() {
	srand((unsigned)time(NULL));
	int n = 50, x;
	arbol a(n);
	while (!a.full()) {
		x = (1 + rand() % (10 * n));
		a.ins(x);
	}
	cout << "Ordered or Inordered" << endl;
	a.Inorder(a.Root());
	return 0;
}