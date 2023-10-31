// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Comenzar a realizar ejercicios básicos con clases en C++
#include <iostream>
using namespace std;
// Declaración de la clase
class Tiempo {
	private:
		int horas, minutos, segundos;

	public:
	// Constructor con 3 parámetros: horas, minutos y segundos
	Tiempo(int h, int m, int s) {
		horas = h;
		minutos = m;
		segundos = s;
	}

	// Constructor con un parámetro: segundos
	Tiempo(long segundosTotales) {
		horas = segundosTotales / 3600;
		minutos = (segundosTotales % 3600) / 60;
		segundos = segundosTotales % 60;
	}

	// Método para mostrar el tiempo
	void mostrarTiempo() {
		cout<<"Tiempo: "<<horas<<"h "<<minutos<<"m "<<segundos<<"s"<<endl;
	}


};


int main() {
	// Crear un objeto de la clase Tiempo usando el constructor con 3 parámetros
	Tiempo t1(2, 30, 45);
	t1.mostrarTiempo(); // Salida esperada: Tiempo: 2h 30m 45s
	// Crear un objeto de la clase Tiempo usando el constructor con un parámetro (segundos)

	long totalSegundos = 10000; // Ejemplo de total de segundos
	Tiempo t2(totalSegundos);
	t2.mostrarTiempo(); // La salida dependerá del valor de totalSegundos

	cout<<endl;
	return 0;
}







