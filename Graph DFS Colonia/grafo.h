#ifndef grafo_h
#define grafo_h
class grafo {

	int n; //Orden Del Grafo(Número De Vertices)
	int m; //Tamaño Del Grafo(Número De Aristas)
	bool* a; //Arreglo
	int f(int, int);
public:
	grafo(int);
	~grafo();
	void set(int, int); 
	void unset(int, int); 
	bool edge(int, int);
	void print();
	
	bool N(int,int&,arbol);
	

};
#endif
