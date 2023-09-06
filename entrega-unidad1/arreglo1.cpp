// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 03-SEP-2023
//
// ENTREGABLE DEL PROYECTO FINAL - UNIDAD 1
//
// Objetivo: Buscar elementos en un arreglo unidimensional numerico

#include <iostream>

using namespace std;

#define p 7

void buscar(int A[], int buscado);

int main() {
	int i=0;
	int arr[p] = {};
	int busqueda=0;

	cout<<"OBJETIVO: Buscar un elemento en un arreglo numerico unidimensional"<<endl;

	cout<<"Llenado del arreglo"<<endl;
	for(i=0; i<p; i++) {
		cout<<"["<<i+1<<"]: ";
		cin>>arr[i];
	}

	cout<<endl<<"Arreglo ingresado:"<<endl;
	for(i=0; i<p; i++)
		cout<<arr[i]<<"\t";
	// fin de impresion
	cout<<endl<<endl;


	cout<<"Ingrese un elemento que desea buscar en el arreglo: ";
	cin>>busqueda;


	cout<<endl;
	buscar(arr, busqueda);


	cout<<endl<<endl;

	return 0;
}

void buscar(int A[], int buscado) {
	int cont=0;
	//int busq[10]={};

	for(int i=0; i<p; i++) {
		if(buscado==A[i]) {
			cont++;
			cout<<"El elemento buscado es "<<A[i]<<". Se encuentra en la posicion "<<i+1<<endl;
			//busq[i]=i;

			if(cont>1)
				cout<<"Las coincidencias de busqueda son "<<cont<<endl;
			// fin de impresion


		}
	} // fin de busqueda
}






