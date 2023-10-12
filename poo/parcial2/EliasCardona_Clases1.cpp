// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Comenzar a realizar ejercicios básicos con clases en C++
#include <iostream>
#include <stdlib.h>
using namespace std;



// clase padre
class Rectangulo {
	private:
		float largo,ancho;				// variables provadas

	public:
		Rectangulo(float, float);		// procedimientos y métodos de la
										// clase
	void perimetro();
	void area();
};


Rectangulo::Rectangulo(float largo_r,float ancho_r) {
	largo = largo_r;
	ancho = ancho_r;		// similar al método
							// constructor de otros lenguajes de programación
							// en dicho método vemos como se asocian
							// las variables a los métodos de la clase
}


void Rectangulo::perimetro() {
	float perimetro_r;

	perimetro_r = (2*largo)+(2*ancho);
	cout<<"\tel perimetro es: "<<perimetro_r<<endl;
	// definición del método perimetro de la clase
	// rectángulo
}


void Rectangulo::area() {
	float area_r;

	area_r = largo*ancho;
	cout<<"\tel area es: "<<area_r<<endl;
	// definición del método area de la clase
	// rectángulo
}  


   

int main() {
	// trabajando con clases en C++
	cout<<"Trabajando con clases en C++"<<endl<<endl;
	// inicialización de nuestra clase
	// en este caso utilizamos la "instancia" r1,
	// de modo que r1 contiene todas las funcionalidades de la clase
	//
	cout<<"EN NUESTRA CLASE RECTANGULO"<<endl;
	cout<<"Si el largo es 5 y el ancho es 6:"<<endl;

	Rectangulo r1(5,6);
	r1.perimetro();
	r1.area();


	cout<<endl<<endl;
	return 0;
}




