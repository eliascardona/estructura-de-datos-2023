// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que realice el monitoreo de la TA de una persona

// librerias
#include <iostream>
#include <string>
#include <stdio.h>
// trabajo con "std"
using namespace std;

int main() {
	// declaracion e inicialización de variables
	char opcion[10];

	// para mi, siempre es importante mostrarle al usuario cuál es el objetivo del programa
	cout<<"MONITOREO DE TA PARA PACIENTES"<<endl;

	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"BAJA.  sis<=100 | dis<=70 \n";
	cout<<"NORMAL.  sis=120 | dis=80   \n";
	cout<<"ALTA.  sis=120-129 | dis>80 \n";

	cout<<"HTA N1.   sis=130-139 | dis=80-89 \n\n";
	cout<<"HTA N2.   sis>140 | dis>90 \n\n";
	cout<<"HTA N3.   sis>180 | dis>120 \n\n";

	// asignacion de valores
	cout<<"Ingrese la opcion que coincida con su TA ";
	cout<<"(para HTA, solo su numero N-x-) ";
	cin.get(opcion, 10);
	cin.ignore();
	// verificacion de la condición ingresada
	cout<<endl;
	switch(opcion[0]) {
		case 'B':
			cout<<"tomate una coca cola"<<endl;
			break;
		case 'N':
			cout<<"presion de un joven saludable"<<endl;
			break;
		case 'A':
			cout<<"ve al medico"<<endl;
			break;
		case '1':
			cout<<"TOMAR: 1 Amlodipino | 1 losartan"<<endl;
			break;
		case '2':
			cout<<"TOMAR: 1 Amlodipino | 1 losartan | 1 metroprolol"<<endl;
			break;
		case '3':
			cout<<"TOMAR: 1 Telmisartan"<<endl;
			break;
		default:
			cout<<"Esa opcion no es valida"<<endl;
	}

	cout<<endl<<endl;
	return 0;
}




