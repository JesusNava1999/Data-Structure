#include<iostream>
struct Persona{
	char nombre[30];
	int edad;
}persona1, *puntero_persona_1 = &persona1;
void pedirDatos(){
	std::cout<<"Nombre: "<<std::endl;
	std::cin.getline(puntero_persona_1->nombre,30,'\n'); //getline(Puntero->Destino,Longitud vector,Condicion final)
	std::cout<<"Edad: "<<std::endl; 
	std::cin>>puntero_persona_1->edad; 
}
void mostrarDatos(){
	std::cout<<"Con puntero"<<std::endl;
	std::cout<<"Nombre: "<<puntero_persona_1->nombre<<std::endl;
	std::cout<<"Edad: "<<puntero_persona_1->edad<<std::endl;
	std::cout<<"Sin puntero"<<std::endl;
	std::cout<<"Nombre: "<<persona1.nombre<<std::endl;
	std::cout<<"Edad: "<<persona1.edad<<std::endl;
	
}
int main(){
	pedirDatos();
	mostrarDatos();
	return 0;
}
