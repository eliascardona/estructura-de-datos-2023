// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Trabajar con operadores aritmeticos en C++


// importacion de las librerias
#include <iostream>
#include <cmath>

// trabajaremos con la libreria estandar
using namespace std;


int main() {
	int c=2, r=0;
	float b=20;
	double a=10;
	// para mi siempre es importante mostrarle al usuario cual es el objetivo del programa
	cout<<"REALIZANDO OPERACIONES ARITMETICAS CON SU DEBIDA JERARQUIA"<<endl<<endl;
	// operaciones arimeticas realizadas
	r = static_cast<int>(7.5*sqrt(a)-b/c);
	// imprimiendo el resultado en pantalla, almacenado en la variable `r`
	cout<<"Resultado FINAL truncado a un numero entero: "<<r<<endl<<endl;

	// yo opto por añadir resultados intermedios para mejor explicación de los resultados

	cout<<"Donde, sqrt(a) = "<<sqrt(a)<<endl;
	cout<<"Donde, 7.5*sqrt(a) = "<<7.5*sqrt(a)<<endl;
	cout<<"Donde, b/c = "<<b/c<<endl;


	double rp1 = 7.5*sqrt(a);
	float rp2 = b/c;


	cout<<"Donde, 7.5*sqrt(a)-b/c = "<<rp1-rp2<<endl<<endl;
	cout<<"Resultado FINAL sin truncar: "<<rp1-rp2<<endl;




	cout<<endl<<endl;


	return 0;
}






