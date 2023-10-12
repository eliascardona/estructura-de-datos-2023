// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 06-OCT-2023
// UNIDAD 3
/*
  OBJETIVO:
  Para cada uno de los siguientes enunciados, escriba una sola instrucción que realice la tarea especificada.
  Suponga que se han declarado las variables de punto flotante numero1 y numero2, numero1 se ha inicializado con 7.3

	1) Declarar la variable fPtr para que sea un apuntador a un objeto de tipo double. 
	2) Asignar la dirección de memoria de la variable numero1 a la variable apuntador fPtr.
	3) Imprimir el valor del objeto(numero1) al que apunta fPtr. 
	4) Asignar a la variable numero2, el valor del objeto al que apunta fPtr. 
	6) Imprimir la dirección de memoria de numero1. 
	7) Imprimir la dirección de memoria almacenada en fPtr. 
	8) ¿El valor que se imprime de fPtr es el mismo que la dirección de memoria numero1?


*/


#include <iostream>
using namespace std;

int main() {
	cout<<"Punteros en C++"<<endl<<endl;
	float numero1 = 7.3000, numero2 = 100.0000;
	float* fPtr;
	fPtr = &numero1;


	cout<<"cargando..."<<endl;
	system("pause");
	cout<<endl<<endl;
	cout<<"valor de numero1, desde `fPtr`: "<<*fPtr<<endl;
	// ---------------------------------------------------
	//
	//
	numero2=*fPtr;
	system("pause");
	cout<<endl<<endl;

	cout<<"valor de numero2, pasado desde `*fPtr`: "<<numero2<<endl;
	cout<<"direccion de memoria de numero1: "<<&numero1<<endl;
	cout<<"direccion de memoria de fPtr: "<<&fPtr<<endl<<endl;
	cout<<"como se observa, las direcciones de memoria de numero1 y fPtr son distintas"<<endl;




	cout<<endl<<endl;
	return 0;
}




