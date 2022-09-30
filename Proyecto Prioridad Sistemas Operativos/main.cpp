#include<iostream>
#include"lista.h"

using namespace std;

int main() {
	int opc;
	char bandera = 'T';
	int n = 0;
	if (!n) {
		cout << "# de nodos agregar: ";
		cin >> n;
		system("cls");
	}
	float aux;
	lista l(n);
	lista lf(n);
	lista lSJF(n);
	lista lrr(n);
	lista lp(n);
	do {
		cout << "\n----------PROCESOS----------\n";
		cout << "1.- Crear lista y llenar.\n";
		cout << "2.- Proceso FIFO.\n";
		cout << "3.- Proceso SJF.\n";
		cout << "4.- Proceso Round-Robin.\n";
		cout << "5.- Proceso Prioridad.\n";
		cout << "0.- Salir.\n";
		cout << "----------------------------\n";
		cin >> opc;

		switch (opc) {
		case 1:
			system("cls");
			if (bandera == 'T') {
				for (int i = 0; i < n; i++) {
					char d;
					int c;
					float b;
					cout << "\nNodo #" << i+1;
					cout << "\nID(LETRA): "; cin >> d;
					fflush(stdin);//limpiar buffer
					cout << "\nTiempo: "; cin >> b;
					cout << "\nPrioridad: "; cin >> c;
					system("cls");
					l.push(d, b, c);
					lf.push(d, b, c);
					lSJF.inst(d, b, c);
					lrr.push(d, b, c);
					lp.insp(d, b, c);


				}
	
				cout << "\nSe agrego la lista.\n";
				bandera = 'F';//con esto solo se llena una vez y puedes imprimir el original siempre
			}
			else {
				system("cls");
				cout << "\nYa existe esta lista:\n";
				imprimir(l);
				system("pause");
				system("cls");
			}
			break;
		case 2:
			system("cls");
			if (lf.empty()) {
				cout << "\nLista no encontrada.\n";
				system("pause");
				system("cls");
				break;
			}
			imprimir(lf);
			while (!lf.empty()) {
				cout << "\nTiempo del nodo: " << lf.takeOut();
				cout << "\nTiempo de retorno: " << lf.timereturn();
				imprimir(lf);
			}
			cout << "\nSuma de tiempos:" << lf.sumatotal() << endl;
			aux = lf.sumatotal() / n;
			cout << "Promedio de tiempo: " << aux << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			if (lSJF.empty()) {
				cout << "\nLista no encontrada.\n";
				system("pause");
				system("cls");
				break;
			}
			imprimir(lSJF);
			while (!lSJF.empty()) {
	
				cout << "\nTiempo del nodo: " << lSJF.takeOut();
				cout << "\nTiempo del retorno: " << lSJF.timereturn();
				imprimir(lSJF);
			}
			cout << "\nSuma de tiempos:" << lSJF.sumatotal() << endl;
			aux = lSJF.sumatotal() / n;
			cout << "Promedio de tiempo: " << aux << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			if (lrr.empty()) {
				cout << "\nLista no encontrada.\n";
				system("pause");
				system("cls");
				break;
			}
			imprimir(lrr);
			while (!lrr.empty()) {
				lrr.takeOutrr();
				cout << "\nQuantum: " << lrr.getquantum();
				cout << "\nTiempo del retorno: " << lrr.timereturn();
				imprimir(lrr);

			}
			cout << "\nSuma de tiempos:" << lrr.sumatotal() << endl;
			aux = lrr.sumatotal() / n;
			cout << "Promedio de tiempo: " << aux << endl;
			system("pause");
			system("cls");
			break;
		case 5:
			if (lp.empty()) {
				cout << "\nLista no encontrada.\n";
				system("pause");
				system("cls");
				break;
			}
			imprimirP(lp);
			while (!lp.empty()) {
				lp.priority();
				cout << "\nQuantum: " << lrr.getquantum();
				cout << "\nTiempo del nodo: " << lp.timereturn();
				imprimirP(lp);
			}
			cout << "\nSuma de tiempos:" << lp.sumatotal() << endl;
			aux = lp.sumatotal() / n;
			cout << "Promedio de tiempo: " << aux << endl;
			system("pause");
			system("cls");
			break;
		default:
			if(opc) cout << "Elige una opcion correcta.\n";
		}
	} while (opc);
}