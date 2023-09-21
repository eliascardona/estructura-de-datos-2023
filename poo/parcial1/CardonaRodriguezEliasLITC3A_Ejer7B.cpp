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
	cout<<"1. Opcion A) \n";
	cout<<"2. Opcion B) \n";
	cout<<"3. Opcion C)\n";
	cout<<"4. Opcion D) \n\n";

	// asignacion de valores
	cout<<"Digite el numero de la opcion correspondiente: ";
	cin>>opcion;


	// verificacion de la jerarquía de los valores ingresados
	// por medio de la estructura de control if,
	// que comunmente es utilizada para manejar el flujo de la información
	// dentro del programa, así como para validar condiciones
	cout<<endl;
	if(opcion==1) {
		cout<<"Opcion A)"<<endl;

	} else if(opcion==2) {
		cout<<"Opcion A)"<<endl;

	} else if(opcion==3) {
		cout<<"Opcion A)"<<endl;

	} else if(opcion==4) {
		cout<<"Opcion A)"<<endl;
	} else {
		cout<<"Opcion no contenida en el menu"<<endl;
	}


	cout<<endl<<endl;
	return 0;
}




