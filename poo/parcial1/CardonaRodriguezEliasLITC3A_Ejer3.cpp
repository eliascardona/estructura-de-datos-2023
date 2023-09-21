// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que realize suma/resta/multiplicacion/division de dos numeos enteros

// librerias
#include <stdlib.h>
#include <iostream>

// declaracion del uso de la libreria estandar de cpp
using namespace std;

// uso de la constante PI
#define PI 3.1416

int main() {
	// declaracion de variables operables
	int base=0, h=0, lado=0;
	int diam=0;
	int op=0;
	float radio=0;
	// declaracion de resultados esperados  
	float areaT=0, perimT=0;
	float areaC=0, perimC=0;

	// para mi siempre es importante mostrarle al usuario
	// dentro del programa, cual es el objetivo
	// ¿que esta haciendo? por lo menos indico alguna frase
	// que lo incite a seguir el procedimiento que gradualmente
	// se va solicitando completar
	cout<<"PROGRAMA PARA CALCULAR EL AREA Y PERIMETRO\nDE UN CIRCULO Y UN TRIANGULO\n\n'";

	// formato para el menu
	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"opcion 1: area del triangulo\n";
	cout<<"opcion 2: perimetro del triangulo\n";
	cout<<"opcion 3: area del circulo\n";
	cout<<"opcion 4: perimetro del circulo\n\n";

	cout<<"Digite una opcion: ";
	cin>>op;

	// estructura de control utilizada para manejar
	// las operaciones dentro del programa
	// por buena practica opte por utilizar una variable
	// para cada resultado
	switch(op) {
		case 1: {
			// area del triangulo
			cout<<"\n------ AREA DEL TRIANGULO ------: ";
			cout<<"\nIngrese la longitud de la base: ";
			cin>>base;
			cout<<"\nIngrese la longitud de la altura: ";
			cin>>h;

			areaT=(base*h)/2;

			cout<<"\nCon los datos ingresados, el area es "<<areaT<<"unidades cuadradas";
			break;
		}
		case 2: {
			// perimetro triangulo
			cout<<"\n------ PERIMETRO DEL TRIANGULO ------: ";
			cout<<"\nIngrese la longitud de uno de los lados: ";
			cin>>lado;

			perimT=lado*3;

			cout<<"\nCon los datos ingresados, el perimetro es "<<perimT<<"unidades";
			break;
		}
		case 3: {
			// area circulo
			cout<<"\n------ AREA DEL CIRCULO ------: ";
			cout<<"\nIngrese el diametro: ";
			cin>>diam;

			radio = diam/2;
			areaC=PI*radio*radio;

			cout<<"\nCon los datos ingresados, el area es "<<areaC<<"unidades cuadrardas";
			break;
		}
		case 4: {
			// perimetro circulo
			cout<<"\n------ PERIMETRO DEL CIRCULO ------: ";
			cout<<"\nIngrese el diametro: ";
			cin>>diam;

			perimC=diam*PI;

			cout<<"\nCon los datos ingresados, el perimetro es "<<perimC<<"unidades";
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
