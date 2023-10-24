// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 13-OCT-2023
// UNIDAD 3
/*
	OBJETIVO:
	Implementar un arreglo de structs utilizando punteros
*/
#include<iostream>
#include<cstring>
using namespace std;
#define k 3

struct GalloUAA {
	char nombre[30];
	int mat;
	short int edad;
};

int main() {
	GalloUAA gallos[k];
	struct GalloUAA *g;
	g = gallos;

	for(int i=0; i<k; i++) {
		cout<<"Nombre alumno: ";
		cin>>(g+i) -> nombre;
		cin.ignore();

		cout<<"Matricula: ";
		cin>>(g+i) -> mat;

		cout<<"Edad: ";
		cin>>(g+i) -> edad;
	}
	// --------------- ciclo for de llenado ---------------


	cout<<"\n\n------- DATOS DEL ALUMNO -------\n\n";
	for(int i=0; i<k; i++) {
		cout<<"Nombre: "<<      gallos[i].nombre <<endl;
		cout<<"Matricula: "<<   gallos[i].mat <<endl;
		cout<<"Edad: "<<        gallos[i].mat <<endl;
		cout<<endl<<"--------------------------------"<<endl;
	}
	// ------------- ciclo for de impresion ---------------




	cout<<endl<<endl;
	return 0;
}












