// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Fecha: 17/10/2023
// EXAMEN PRÁCTICO PARCIAL 2
// Objetivo: Elaborar una clase en C++ capaz de abstraer un rectángulo y sus propiedades básicas
#include <iostream>
using namespace std;

class Rectangulo {
	private:
		float a,b;
	public:
		Rectangulo(float,float);

	void perimetro();
	void area();
};


Rectangulo::Rectangulo(float largo_r,float ancho_r) {
	a = largo_r;
	b = ancho_r;
}


void Rectangulo::perimetro() {
	float perimetro_r;
	float x=0, y=0;
	x=2*a;
	y=2*b;
	perimetro_r = x+y;
	cout<<endl<<"------------------------------------"<<endl;
	cout<<"perimetro del rectangulo = "<<perimetro_r<<endl;
	cout<<endl<<"------------------------------------"<<endl;
}


void Rectangulo::area() {
	float area_r;
	area_r = a*b;
	cout<<endl<<"------------------------------------"<<endl;
	cout<<"area del rectangulo = "<<area_r<<endl;
	cout<<endl<<"------------------------------------"<<endl;
}


int ops() {
	int opcion=20;
	cout<<"Los valores del rectangulo son 5 y 7\n";
	cout<<"1. IMPRIMIR AREA \n";
	cout<<"2. IMPRIMIR PERIMETRO \n";
	cout<<"3. SALIR\n";
	// ------------------------
	cout<<"Seleccione una opcion: ";
	cin>>opcion;
	// ------------------------
	cout<<endl;
	// ------------------------
	return opcion;
	// ------------------------
}


int main() {
	cout<<"\n--------- CLASE RECTANGULO ---------\n";
	Rectangulo mi_figurita(5,7);

	while(1) {
		int opcion = ops();
		switch(opcion) {
			case 1: {
				mi_figurita.area();
			}
			break;
			// ----------------------------
			case 2: {
				mi_figurita.perimetro();
			}
			break;
			// ----------------------------
			case 3: {
				exit(0);
			}
			break;
			// ----------------------------
			default:
				cout<<"opcion no valida"<<endl;
		}
	}

	cout<<endl<<endl;
	return 0;
}




