// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 17/08/2023
// Objetivo:Manejo de las funciones `std::cin` y `std::cout `

#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int i;
	int arr[5];
	cout<<"TRABAJANDO CON VECTORES"<<endl;

	cout<<"llenado del arreglo"<<endl;

	for(int i=0; i<5; i++) {

		cout<<"["<<i+1<<"]: ";
		cin>>arr[i];

	}

	cout<<endl<<"resultado final:"<<endl;
	for(i=0; i<5; i++) {

		cout<<arr[i]<<"\t";

	}
	cout<<endl<<endl;

	return 0;
	system("pause");
}
