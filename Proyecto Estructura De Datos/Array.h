#ifndef Array_h
#define Array_h
#include <stdio.h>
class Array{
	int *a;
	int s;
	int n;
	int counter;
	public:		
		Array(int);
		~Array();
		
		int *arreglo();
		void imprimir(int*,int);
		int Parent(int);
		int Right(int);
		int Left(int);
		int MaxChild(int*,int);
		void Swap(int&,int&);
		void Counter();
		int _counter();	
		void Heaping(int*,int);
		void QuickSort(int*,int,int);
		int *Merge(int*,int,int*,int,int*);
		void MergeSort(int*,int);
		void HeapSort(int*,int);
		void Scramble(int*,int);		
};
#endif
