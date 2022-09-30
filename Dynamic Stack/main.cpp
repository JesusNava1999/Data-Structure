#include "stack.cpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand((unsigned)time(NULL));
	int n=10;   
	stack s(n);
	int x;
	while(!s.full()){
		x = rand()%20+1;
		cout << x << "	Dato";		 
		s.push(x);
		cout << endl;
	}	
	cout << "Retirando datos..." << endl;
	while(!s.empty()){
		cout << s.pop() << endl;
	}
	s.~stack();
	return 0;	
}
