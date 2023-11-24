// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Programar un clase que realice herencia en POO en C++
#include <iostream>
#include <cstring>
using namespace std;

// Declaración de la clase
class Persona {
	private: // Atributos
		string nombre;
		int edad;
	public: // Constructor y métodos
		Persona(string, int);
};


class Alumno : public Persona {
	private:
		float calif;
		string codigoAl;
	public:
		Alumno(float, string);
};


class Universitario : public Alumno {
	private:
		float semestre;
	public:
		Alumno(int ed, string nom, float cal, string cod);
};


Persona::Persona(string nom, int ed) {
	nombre = nom;
	edad = ed;
}


Alumno::Alumno(string nom, int ed, float cal, string cod) : Persona(nom, ed) {
	calif = cal;
	codigoAl = cod;
}


Universitario::Universitario(string nom, float cal, string cod, string sem) : Alumno(nom, cal, cod) {
	semestre = sem;
}


void Universitario::saludar() {
	cout << "Hola, mi nombre es " << nombre << " y estoy estudiando la universidad, en " << semestre << endl;
}


int main() {
	// Crear un objeto de la clase usando el constructor
	Universitario uni("Carlos", "4to");

	// Invocamos los respectivos métodos de nuestra
	// instancia de clase (objeto)
	uni.saludar();


	cout<<endl;
	return 0;
}






