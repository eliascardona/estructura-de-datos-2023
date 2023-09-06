// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 21/08/2023
// Objetivo: Utilizar el metodo de la burbuja para ordenar un arreglo de menor a mayor

#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int N;
	int i,j,aux;
	cout<<"OBJETIVO: Utilizar el metodo de la burbuja\n\t  para ordenar un arreglo de menor a mayor\n\n";


	cout<<"longitud del arreglo: ";
	cin>>N;
	int arr[N];


	cout<<"llenado del arreglo:\n";
	for(i=0; i<N; i++) {
		cout<<"[#"<<i+1<<"]: ";
		cin>>arr[i];
	}




	cout<<"arreglo original:\n";
	for(i=0; i<N; i++) {
		cout<<"\t"<<arr[i];
	}
	cout<<"\n\n";




	for(i=0; i<N-1; i++)
		// duplicado del arreglo
		for(j=i+1; j<N; j++)
			// validacion
			if(arr[i] > arr[j]) {
				aux=arr[i];

				arr[i]=arr[j];

				arr[j]=aux;
			}




	cout<<"arreglo ordenado:\n";
	for(i=0; i<N; i++) {
		cout<<"\t"<<arr[i];
	}


	cout<<"\n\n";
	return 0;
	system("pause");
}
