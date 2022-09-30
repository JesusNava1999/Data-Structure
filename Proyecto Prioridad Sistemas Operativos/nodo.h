#ifndef nodo_h
#define nodo_h

class nodo{
	float _time;
	int _prior;
	char _letra;
	nodo* _pointer;
public:

	nodo(char c, float y, int z) :_letra(c),_time(y), _prior(z), _pointer(nullptr) {}

	nodo* next() { return _pointer; }
	void next(nodo* p) { _pointer = p; }
	float time() { return _time; }
	void time(float x) { _time = x; }

	char letra() { return _letra; }
	int prior() { return _prior; }
	void prior(int x) { _prior = x ; }


};

#endif // nodo_h
