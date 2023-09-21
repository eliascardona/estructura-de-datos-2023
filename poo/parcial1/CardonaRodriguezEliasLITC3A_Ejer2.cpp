// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que realize suma/resta/multiplicacion/division de dos numeos enteros

// librerias
#include <stdlib.h>
#include <iostream>

// declaracion del uso de la libreria estandar de cpp
using namespace std;

int main() {
	// declaracion de variables
	int d1,d2,res1,res2,res3,res4,op;

	// para mi siempre es importante mostrarle al usuario
	// dentro del programa, cual es el objetivo
	// ¿que esta haciendo? por lo menos indico alguna frase
	// que lo incite a seguir el procedimiento que gradualmente
	// se va solicitando completar
	cout<<"PROGRAMA PARA REALIZAR OPERACIONES ARITMETICAS\n\n";

	// asignacion de valores
	cout<<"Digite un numero entero: ";
	cin>>d1;
	cout<<"Digite otro numero entero: ";
	cin>>d2;

	// formato para el menu
	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"opcion 1: suma\n";
	cout<<"opcion 2: resta\n";
	cout<<"opcion 3: multiplicacion\n";
	cout<<"opcion 4: division\n\n";

	cout<<"Digite una opcion: ";
	cin>>op;

	// estructura de control utilizada para manejar
	// las operaciones dentro del programa
	// por buena practica opte por utilizar una variable
	// para cada resultado
	switch(op) {
		case 1: {
			// suma
			res1=d1+d2;
			cout<<"\n"<<d1<<"+"<<d2<<"="<<res1;
			break;
		}
		case 2: {
			// resta
			res2=d1-d2;
			cout<<"\n"<<d1<<"-"<<d2<<"="<<res2;
			break;
		}
		case 3: {
			// multiplicacion
			res3=d1*d2;
			cout<<"\n"<<d1<<"*"<<d2<<"="<<res3;
			break;
		}
		case 4: {
			// division
			res4=d1/d2;
			cout<<"\n"<<d1<<"/"<<d2<<"="<<res4;
			break;
		}
		// manejo de las opciones no disponibles (>4 o <1)
		default:
			cout<<"\nopcion no valida\n";
			break;
	}


	cout<<endl<<endl;
	system("pause");
}
