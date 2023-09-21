// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que muestre un menu de opciones con la sentencia if

// librerias
#include <iostream>
// trabajo con "std"
using namespace std;

int main() {
	// declaracion e inicialización de variables
	int opcion=0;

	// para mi, siempre es importante mostrarle al usuario cuál es el objetivo del programa
	cout<<"MENU DE OPCIONES SIMPLE EN C++"<<endl;
	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"1. Rojo \n";
	cout<<"2. Azul \n";
	cout<<"3. Verde \n";
	cout<<"4. Amarillo \n\n";

	// asignacion de valores
	cout<<"Digite el numero de la opcion correspondiente: ";
	cin>>opcion;


	// verificacion de la jerarquía de los valores ingresados
	// por medio de la estructura de control if,
	// que comunmente es utilizada para manejar el flujo de la información
	// dentro del programa, así como para validar condiciones
	cout<<endl;
	switch(opcion) {
		case 1:
			cout<<"Ha seleccionado rojo"<<endl;
			break;
		case 2:
			cout<<"Ha seleccionado azul"<<endl;
			break;
		case 3:
			cout<<"Ha seleccionado verde"<<endl;
			break;
		case 4:
			cout<<"Ha seleccionado amarillo"<<endl;
			break;
		default:
			cout<<"Ha seleccionado gris"<<endl;
	}


	cout<<endl<<endl;
	return 0;
}




