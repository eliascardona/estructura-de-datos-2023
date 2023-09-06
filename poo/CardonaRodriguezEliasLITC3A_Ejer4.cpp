// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que muestre el tamanio en memoria
// 			 que ocupan los diferentes tipos de datos en c++


// importacion de las librerias
#include <stdlib.h>
#include <iostream>

// declarando que trabajaremos con la libreria estandar
using namespace std;

// uso de constantes con define
#define ultima 37


int main() { // inicio de la funcion principal

	// para mi siempre es importante mostrarle al usuario
	// dentro del programa, cual es el objetivo
	// ¿que esta haciendo? por lo menos indico alguna frase
	// que lo incite a seguir el procedimiento que gradualmente
	// se va solicitando completar
	cout<<"PROGRAMA QUE MUESTRA EL TAMANIO QUE OCUPAN EN MEMORIA LOS DIFERENTES TIPOS DE DATOS\n\n";

	// formato donde mostramos el tipo de dato y su tamanio en memoria
	cout<<"el tamanio del int es:\t\t\t"<<sizeof(int)<<" bytes\n";
	cout<<"el tamanio del short es:\t\t"<<sizeof(short)<<" bytes\n";
	cout<<"el tamanio del long es:\t\t\t"<<sizeof(long)<<" bytes\n\n";
	// indicamos al usuario que debe de presionar la tecla `enter` para continuar
	cout<<"presione enter\n";
	getchar();

	cout<<"el tamanio del char es:\t\t\t"<<sizeof(char)<<" bytes\n\n";
	cout<<"presione enter\n";
	getchar();

	cout<<"el tamanio del float es:\t\t"<<sizeof(float)<<" bytes\n";
	cout<<"el tamanio del double es:\t\t"<<sizeof(double)<<" bytes\n";
	cout<<"el tamanio del long double es:\t\t"<<sizeof(long double)<<" bytes\n\n";
	cout<<"presione enter\n";
	getchar();

	// declaracion de constantes con `const`
	const float PI=3.1416;
	cout<<"la constante PI equivale a "<<PI<<endl;
	cout<<"la constante `ultima` equivale a "<<ultima<<endl;

	return 0;
	system("pause"); // en lugar de pintar en pantalla la leyenda
					 // para terminar con el programa y luego hacer getchar()
					 // utilicé system PAUSE
} // fin de la funcion principal
