/*
Estudiante: Jose De Jesus Nava Cuellar
Numero de Control: 18011108
Practica: Ordering
Nombre del archivo: main.cpp
*/
#include <iostream>
#include "Array.h"
using namespace std;
int main(){	
	int n,m,opc,opt;
	int *Prom;
	int Sum=0;
	cout << "Tamaño del arreglo (n): ";
	cin >> n;
	cout << "Veces que se repite el algoritmo (m): ";
	cin >> m;
	Array a(n);
	int *List = a.arreglo();
	do{			
		system("cls");		
		cout << "	n = " << n << endl;
		cout << "	m = " << m << endl << endl;	
		cout << "Para cada nueva prueba o test se usa el metodo 'Scramble' para revolver el mismo arreglo" << endl;
		cout << "MENU PRINCIPAL" << endl << endl;
		cout << "1. Prueba de Funcionalidad" << endl;
		cout << "2. Prueba de Efectividad" << endl;
		cout << "0. Salir" << endl;
		cin >> opt;
		switch(opt){
			case 0:
				return 0;
			case 1:	
				do{
					system("cls");
					cout << "Para cada nueva prueba o test se usa el metodo 'Scramble' para revolver el mismo arreglo" << endl;
					cout << "\n\nFUNCIONALIDAD" << endl << endl;				
					cout << "\n\nOrdenar Usando..." << endl;
					cout << "1. Quick Sort" << endl;
					cout << "2. Merge Sort" << endl;
					cout << "3. Heap Sort" << endl;	
					cout << "4. VOLVER AL MENU PRINCIPAL" << endl;									
					cin >> opc;					
					switch(opc){					
						case 1:	
							cout << "\nArreglo Generado" << endl;
							a.imprimir(List,n);			
							a.QuickSort(List,0,n-1);
							cout << "\nOrdenado por QuickSort\n" << endl;
							a.imprimir(List,n);
							a.Scramble(List,n);
							system("pause");			
							break;
						case 2:
							cout << "\nArreglo Generado" << endl;
							a.imprimir(List,n);
							a.MergeSort(List,n);
							cout << "\nOrdenado por Merge\n" << endl;
							a.imprimir(List,n);
							a.Scramble(List,n);	
							system("pause");					
							break;
						case 3:
							cout << "\nArreglo Generado" << endl;
							a.imprimir(List,n);
							a.Heaping(List,n);
							a.HeapSort(List,n);
							cout << "\nOrdenado por Heap\n" << endl;
							a.imprimir(List,n);
							a.Scramble(List,n);
							system("pause");				
							break;
						case 4:
							opc=0;	
							break;						
						default:
							cout << "No Option" << endl;
							system("pause");
						break;	
					}			
				}while(opc!=0);
				break;					
			case 2:
				do{
					system("cls");
					cout << "Para cada nueva prueba o test se usa el metodo 'Scramble' para revolver el mismo arreglo" << endl;
					cout << "\n\nEFECTIVIDAD" << endl;
					cout << "\n\n1. Quick Sort" << endl;
					cout << "2. Merge Sort" << endl;
					cout << "3. Heap Sort" << endl;
					cout << "4. VOLVER AL MENU PRINCIPAL" << endl;
					cin >> opc;
					switch(opc){					
						case 1:	
							cout << "Esfuerzo Promedio" << endl;
							a.Counter();						
							Prom = new int [m];									
							for (int i=0; i<m; i++){
								a.Scramble(List,n);																				
								a.Counter();				//Asigna el valor 0 a la variable counter						
								a.QuickSort(List,0,n-1);											
								Prom[i] = a._counter();		//Retorna el valor del contador					
								a.Scramble(List,n);											
							}
							for (int i=0; i<m; i++){
								Sum+=Prom[i];
							}	
							cout << Sum/m << endl;	
							Sum=0;		
							system("pause");
							delete [] Prom;								
							break;
						case 2:
							cout << "Esfuerzo Promedio" << endl;
							a.Counter();						
							Prom = new int [m];							
							for (int i = 0; i<m; i++){	
								a.Scramble(List,n);												
								a.Counter();			//Asigna el valor 0 a la variable counter							
								a.MergeSort(List,n);																	
								Prom[i] = a._counter();	//Retorna el valor del contador					
								a.Scramble(List,n);												
							}	
							for (int i=0; i<m; i++){
								Sum+=Prom[i];
							}	
							cout << Sum/m << endl;	
							Sum=0;	
							system("pause");	
							delete [] Prom;							
							break;
						case 3:
							cout << "Esfuerzo Promedio" << endl;
							a.Counter();						
							Prom = new int [m];					
							for (int i = 0; i<m; i++){	
								a.Scramble(List,n);																			
								a.Counter();			//Asigna el valor 0 a la variable counter							
								a.Heaping(List,n);
								a.HeapSort(List,n);												
								Prom[i] = a._counter();	//Retorna el valor del contador						
								a.Scramble(List,n);				
							}
							for (int i=0; i<m; i++){
								Sum+=Prom[i];
							}	
							cout << Sum/m << endl;
							Sum=0;	
							system("pause");
							delete [] Prom;									
							break;
						case 4:
							opc = 0;
							break;															
						default:
							cout << "No Option" << endl;
							system("pause");
							break;
					}				
				}while(opc!=0);
				break;				
			default:
				cout << "No Option" << endl;
				system("pause");
				break;					
		}
	}while(opt!=0);	
}
