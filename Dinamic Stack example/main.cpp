/*
Estudiante: Juan Jose Navarro Ramirez
Numero de Control: 18011460
Practica: 
Nombre del Archivo: */
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "stack.cpp"

using namespace std;

int main(int argc, const char * argv[]){
    srand((unsigned)time(nullptr));

    int n=10;
    int inf = n/2;
    int sup = n+(n/2);

    int m = rand() % (sup - (inf-1))+(inf);

    stack p(n);

    cout<<"la ´pila tinene capasidad: "<<n<<"\n";
    cout<<"se agregaran: "<<n<<" datos"<<"\n";

    for(int i =0; i<m;i++){
        
        int x= rand()%100 +1;
        cout<<i+1<<"agragar"<<x;
        p.push(x);
        //else cout<<"la pila esta llena";
    }
    cout<<"extraer datos de la pila";

    while(!p.empty()) cout<<p.pop;
    system("pause");
    return 0;
}