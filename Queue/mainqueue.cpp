#include <iostream>
#include "queue.hpp"
using namespace std;
int main(){
	int x;
	int i;
	queue q(10);
	cout << "Ingrese Datos" << endl;
	for (int i=0; i < 10; i++){
		cin >> x;
		q.enqueue(x);
	}
	cout << "Expulsando Datos" << endl;
	while(q.empty()==false){
		cout << q.dequeue()<< endl;
	}	
	return 0;
}

