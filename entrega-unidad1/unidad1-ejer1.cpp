// Elias Eduardo Cardona Rodríguez
// David Rodríguez Villagran
// Kenia Jocelyn Martínez Gutierrez
// Licenciatura en Informática 3-A
// 03-SEP-2023
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
	for(i=0; i<p; i++) { // llenado convencional del arreglo, con un ciclo for
		cout<<"["<<i+1<<"]: ";
		cin>>arr[i];
	}
	cout<<endl<<"Arreglo ingresado:"<<endl;
	for(i=0; i<p; i++) // impresion convencional del arreglo
		cout<<arr[i]<<"\t";
	// fin de impresion


	cout<<endl<<endl;
	cout<<"Ingrese un elemento que desea buscar en el arreglo: ";
	cin>>busqueda;


	cout<<endl;
	buscar(arr, busqueda); // llamado a nuestra función


	cout<<endl<<endl;
	return 0;
}


void buscar(int A[], int buscado) {
	bool encontrado=false;
	int cont=0;

	cout<<"El elemento buscado es "<<buscado<<endl; // Por la naturalez del problema, al solo
													// ser solicitado un elemento de busqueda,
													// bien podemos tomar ese valor para imprimirlo.
													// Si se hubieran pedido dos o más valores, esto
													// sería incorrecto.
													//
													// También realicé esto por cuestiones de formato, ya que 
													// para mi no era estético mostrarle al usuario
													// "El elemento buscado es X, esta en la posicion Y", N veces.
													// Por eso opte hacerlo como aquí se indica y así mostrar las
													// variables por separado.
	for(int i=0; i<p; i++)
		if(buscado==A[i]) {
			cont++;
			encontrado=true;
		}
	// fin de busqueda

	if(cont>1)
		cout<<"Las coincidencias de busqueda son "<<cont<<endl;
	// fin de impresion de las coincidencias

	cout<<"Se encuentra en la posiciones ";
	for(int i=0; i<p; i++)
		if(buscado==A[i])
			cout<<i+1<<" ";
	// obteniendo las posiciones
	cout<<endl<<endl;

	if(!encontrado)
		cout<<"El elemento no se encuentra en el arreglo"<<endl;
	// fin del manejo de errores
}






