// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Comenzar a realizar ejercicios básicos con clases en C++
#include <iostream>
#include <cstring>
using namespace std;

// Declaración de la clase
class Persona {
	private:
		int edad;
		string nombre;
		float peso;
		float estatura;

	public:
	// Constructor con 3 parámetros: horas, minutos y segundos
	Persona(int ed, string nm, float ps, float et) {
		edad = ed;
		nombre = nm;
		peso = ps;
		estatura = et;
	}

	// Método para mostrar los atributos de la clase
	void mostrar() {
		cout<<nombre<<"tiene "<<edad<<" anios. Pesa "<<peso<<" kg, mide "<<estatura<<" cm."<<endl;
	}

	void correr() {
		cout<<nombre<<" esta corriendo en el parque"<<endl;
	}

	void comer() {
		cout<<nombre<<" esta comiendo un plato de vegetales"<<endl;
	}

	void jugar() {
		cout<<nombre<<" esta jugando en el patio de la escuela"<<endl;
	}
};


int main() {
	// Crear un objeto de la clase Persona usando el constructor
	Persona estudiante1(45, "Carlos ", 65, 165);
	Persona estudiante2(43, "Saira ", 60, 160);
	Persona estudiante3(8, "Karla ", 40, 145);

	// Crear los objeto de la clase Persona 
	// usando el constructor con sus debidos parámetro
	// Salida esperada: Carlos tiene 20 anios
	//

	estudiante1.mostrar();
	estudiante1.comer();

	estudiante2.correr();
	estudiante3.jugar();

	cout<<endl;
	return 0;
}


