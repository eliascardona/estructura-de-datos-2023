// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Programar un clase que realice abstracción de un punto cartesiano en C++
// Utilizar encapsulamiento y los métodos getters y setters
#include <iostream>
#include <cstring>
using namespace std;

// Declaración de la clase
class Persona {
	private: // Atributos
		int edad;
		string nombre;
	public: // Constructor y métodos
		Persona(int, string);
		void mostrar();
};


Persona::Persona(int ed, string nom) {
	edad = ed;
	nombre = nom;
}


class Alumno : public Persona {
	private:
		float calif;
		string codigoAl;
	public:
		Alumno(int ed, string nom, float cal, string cod);
		void mostrarAl();
}


Alumno::Alumno(int ed, string nom, float cal, string cod) : Persona(ed, nom) {
	calif = cal;
	codigoAl = cod;
}


void Persona::mostrar() {
	cout << "nombre: " << nombre << endl;
	cout << "edad: " << edad << endl;
}


void Alumno::mostrarAl() {
	cout << "calificacion edad: " << calif << endl;
	cout << "codigo del alumno: " << codigoAl << endl;
}


int main() {
	// Crear un objeto de la clase usando el constructor
	Alumno al_uno(21, "Carlos", 8.5, "Al-335130");

	// Invocamos los respectivos métodos de nuestra
	// instancia de clase (objeto)
	al_uno.mostrarAl();


	cout<<endl;
	return 0;
}






