// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que verifique cual de dos numeos enteros es mayor

// librerias
#include <iostream>
// trabajo con "std"
using namespace std;

int main() {
	// declaracion e inicialización de variables
	int a=0, b=0, c=0;

	// para mi, siempre es importante mostrarle al usuario cuál es el objetivo del programa
	cout<<"Programa que verifica cual de los numeros ingresados es mayor"<<endl;

	// asignacion de valores
	cout<<"Digite un numero entero: ";
	cin>>a;
	cout<<"Digite otro numero entero: ";
	cin>>b;
	cout<<"Digite un numero mas: ";
	cin>>c;


	// verificacion de la jerarquía de los valores ingresados
	// por medio de la estructura de control if,
	// que comunmente es utilizada para manejar el flujo de la información
	// dentro del programa, así como para validar condiciones
	cout<<endl;
	if(a>b && a>c) {
		cout<<"'a' es mayor que 'b' y mayor que 'c'"<<endl;
	} else if(b>a && b>c) {
		cout<<"'b' es mayor que 'a' y mayor que 'c'"<<endl;
	} else if(c>a && c>b) {
		cout<<"'c' es mayor que 'a' y mayor que 'b'"<<endl;
	}


	cout<<endl<<endl;
	return 0;
}




