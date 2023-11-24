// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Programar un clase que cintenga abstracción, encapsulamieno y herencia en C++

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

// Clase base
class Animal {
	private:
	    int edad;  // Atributo privado que representa la edad del animal
	public:
	    Animal(int _edad) {
			edad = _edad;
		}
	    // Método para mostrar la edad
	    void mostrarEdad() {
	        cout << "La edad del animal es: " << edad << " años." << endl;
 	   }
 	   // Método que indica que el animal está en evolución
 	   void evolucionar() {
 	       cout << "El animal está evolucionando." << endl;
 	   }
};

// Clase derivada 1
class Mamifero : public Animal {
	private:
	    int lala;  // atributo privado
	public:
	    // No tiene atributos adicionales
	    Mamifero(int _edad) : Animal(_edad);		// Constructor que llama al constructor de la clase base

};

// Clase derivada 2
class Acuatico : public Mamifero {
	private:
	    int lolo;  // atributo privado
	public:
	    // No tiene atributos adicionales
	    Acuatico(int _edad) : Animal(_edad);		// Constructor que llama al constructor de la clase base

};

// Clase que depende de la clase derivada 2 (herencia múltiple)
class Ballena : public Acuatico {
	private:
	    int lele;  // atributo privado
	public:
	    Ballena(int _edad) : Acuatico(_edad);

};


void Mamifero::amamantar() {
	cout << "El mamífero está amamantando a sus crías." << endl;
}


void Acuatico::nadar() {
	cout << "El animal acuático está nadando." << endl;
}


void Ballena::comunicarse() {
	cout << "La ballena está comunicándose con otros miembros de su especie." << endl;
}





int main() {
    // Crear un objeto para cada clase utilizando el método de cada clase

    // Abstracción: Creamos objetos utilizando las clases, ocultando los detalles internos.
    Animal animal(1);
    Mamifero mamifero(1);
    Acuatico acuatico(1);
    Ballena ballena(1);

    // Encapsulación: Accedemos a los atributos y métodos de las clases a través de interfaces públicas.
    cout << "Edad del animal: " << animal.mostrarEdad() << endl;  // Aquí necesitas un método getEdad en la clase Animal.

    // Herencia Múltiple: La clase Ballena hereda de Mamifero y Acuatico.
    ballena.comunicarse();  // Método de la clase que depende de ambas
    return 0;
}


