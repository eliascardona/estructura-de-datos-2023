// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Programar un clase que realice abstracción de un punto cartesiano en C++
// Utilizar encapsulamiento y los métodos getters y setters
#include <iostream>
#include <cstring>
using namespace std;

// Declaración de la clase
class Punto {
	private: // Atributos
		int x, y;
	public: // Constructor y métodos
		Punto();
		void setPunto(int a, int b);
		int getPuntoX();
		int getPuntoY();
};


Punto::Punto() {
	cout<<"metodo constructor activo por defecto"<<endl;
}

void Punto::setPunto(int a, int b) {
	x = a;
	y = b;
}

int Punto::getPuntoX() {
	return x;
}

int Punto::getPuntoY() {
	return y;
}


int main() {
	// Crear un objeto de la clase usando el constructor
	Punto p1;

	// Establecer los valores para cada punto
	// utilizando los métodos tipo get y set
	p1.setPunto(12, 12);
	int h = p1.getPuntoX();
	int o = p1.getPuntoY();

	cout<<"Punto x = "<<h<<". Punto y = "<<o<<endl;

	cout<<endl;
	return 0;
}









