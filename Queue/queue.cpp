#include "queue.hpp"
#include <iostream>
using namespace std;
queue::queue(int c){
	n=c;
	s=0;
	r=n;
	data = new int [n];
}

queue::~queue(){
	delete [] data;
}

void queue::enqueue(int x){
	if(full()==true){
		cout << "Cola llena" << endl;
		return;
	} else {
		data[s] = x;
		s++;
	}
}

 int queue::dequeue(){
	int x;
	s=0;	
	x = data[s];	
	while(s<r){
		data[s] = data[s+1];
		s++;
	}
	r--;
	s=0;
	return x;
}


int queue::front(){
	return data[s-1];
}
