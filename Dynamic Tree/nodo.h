#ifndef nodo_h
#define nodo_h
#include <stddef.h>
class nodo{
	int _data;
	nodo *_left;
	nodo *_right;
	public:
	
	nodo(int x){
		_data = x;
		_left = NULL;
		_right = NULL;
	}
	~nodo();
	
	nodo *Left(){
		return _left;
	}
	
	void Left(nodo* r){
		_left = r;
	}	
	
	nodo *Right(){
		return _right;
	}
	
	void Right(nodo* r){
		_right = r;
	}
	
	int Data(){
		return _data;
	}
};
#endif
