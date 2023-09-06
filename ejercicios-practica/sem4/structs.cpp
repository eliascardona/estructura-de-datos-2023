// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 31/08/2023
// Objetivo: Trabajar los conceptos básicos de `structs`

#include <iostream>
#include <cstring>
using namespace std;

struct Humano {
	string nombre;
	int edad;
	int estatura;
};

int main() {
	struct Humano Juan;
	cout<<"OBJETIVO: Trabajar los conceptos basicos de structs"<<endl<<endl;

	cout<<"Ingrese el nombre de juan: ";
	getline(cin, Juan.nombre);

	cout<<endl<<"nombre de juan: "<<Juan.nombre<<endl;


	cout<<endl<<endl;


	return 0;
}
