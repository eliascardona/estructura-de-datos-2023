// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Programar un clase que realice herencia en POO en C++
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// Declaración de la clase
class Persona {
	private: // Atributos
		string nombre;
		int edad;
	public: // Constructor y métodos
		Persona(string _nombre, int _edad);
};


class Alumno : public Persona {
	private:
		float calif;
		int matricula;
	public:
		Alumno(string _nombre, int _edad, float _calif, int _matricula);
		void mostrar();
};


Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}


Alumno::Alumno(string nombreh, int edadh, float _calif, int _matricula) : Persona{
	calif = _calif;
	matricula = _matricula;
}


void Alumno::mostrar() {
	cout << "calificacion edad: " << calif << endl;
	cout << "codigo del alumno: " << matricula << endl;
}


int main() {
	// Crear un objeto de la clase usando el constructor
	Alumno elias("Elias", 18, 9.5, 335);

	// Invocamos los respectivos métodos de nuestra
	// instancia de clase (objeto)
	elias.mostrar();


	cout<<endl;
	return 0;
}






