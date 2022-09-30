#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.cpp"
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	int n=10,x;
	queue q(n);
	while(q.full()==false){
		x = rand()%20+1;
		cout << x << "	dato";
		q.enqueue(x);
		cout << endl;
	}
	cout << "Extrayendo datos..." << endl;
	while(q.empty()==false){
		cout << q.dequeue() << endl;
	} 
	return 0;
}
