// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 09-OCT-2023
// UNIDAD 3
/*
  OBJETIVO:
	Escribir un programa con los siguientes puntos: 
	int lista[5];
	int *p; p=lista;

	1. Llenar los valores enteros en el arreglo vector a través del apuntador p.
	2. Mostrar las direcciones de memoria de cada elemento del arreglo.
	3. Mostrar lo valores de cada elemento a través del uso de apuntadores.
*/


#include <iostream>
#include <cstdlib>
using namespace std;
#define k 5


int main() {
	cout<<"ARREGLOS CON PUNTEROS"<<endl<<endl;
	int a=0, b=0, el=0;
	int lista[k];
	int *p;
	p=lista;
	// ---------------------------------
	for(a=0; a<k-1; a++) {
		cout<<"valor para"<<a+1<<": ";
		cin>>el;
		*(p+a) = el;
		p++;
	}
	// ----- for -------
	cout<<endl;
	system("pause");


	p=lista;


	cout<<"arreglo impreso"<<endl<<endl;
	cout<<"direcciones"<<endl;
	for(b=0; b<k; b++) {
		cout<<*(p+b)<<"\t";
	}


	cout<<endl<<endl;
	return 0;
}







