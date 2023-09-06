// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 04/09/2023
// Objetivo: Trabajar de forma básica con arreglos de structs
// Adicionales: Generar un arreglo de estructuras con 3 calificaciones (inc. decimales).
// Capturar por teclado los valores de la estructura;
// además generar un reporte con lo siguiente:
// 		Nombre del estudiante.
// 		Promedio de sus calificaciones.
// 		Calificación más alta.

#include <iostream>
#include <string>
using namespace std;



struct Estudiante {
    int id;
    string nombre;
    string direccion;
	float calificaciones[3];
};



void capturarEstudiante(Estudiante &estudiante);
double calcularPromedio(const Estudiante &estudiante);
double obtenerCalificacionMaxima(const Estudiante &estudiante);
void generarReporte(const Estudiante &estudiante);



int main() {
    Estudiante estudiante;

    cout<<"Captura de datos del estudiante:"<<endl;
    capturarEstudiante(estudiante);

    generarReporte(estudiante);


	cout<<endl<<endl;
    return 0;
}


void capturarEstudiante(Estudiante &estudiante) {
    cout<<"ID del estudiante: ";
    cin>>estudiante.id;
    cin.ignore();

    cout<<"Nombre del estudiante: ";
    getline(cin, estudiante.nombre);

    cout<<"Direccion del estudiante: ";
    getline(cin, estudiante.direccion);

	for(int i=0; i<3; i++) {
    	cout<<"Calificacion #"<<i+1<<": ";
	    cin>>estudiante.calificaciones[i];
	}
	cin.ignore();
}


double calcularPromedio(const Estudiante &estudiante) {
	float suma = 0.0, prom = 0.0;
	for(int i=0; i<3; i++)
		suma += estudiante.calificaciones[i];
	// fin del ciclo
	prom = suma/3.0;
	
	return prom; 
}


double obtenerCalificacionMaxima(const Estudiante &estudiante) {
    double maxima = estudiante.calificaciones[0];
	for(int i=0; i<3; i++) {
    	if(estudiante.calificaciones[i] > maxima)
	        maxima = estudiante.calificaciones[i];
	}
    return maxima;
}


void generarReporte(const Estudiante &estudiante) {
    cout<<endl<<"REPORTE ACADEMICO"<<endl<<endl;
	cout<<"----------------------------------"<<endl;
    cout<<"Alumno: "<<estudiante.nombre<<" (Id. "<<estudiante.id<<")"<<endl;
	cout<<"----------------------------------"<<endl;
    cout<<"Promedio de calificaciones: "<<calcularPromedio(estudiante)<<endl;
	cout<<"----------------------------------"<<endl;
    cout<<"Calificacion mas alta: "<<obtenerCalificacionMaxima(estudiante)<<endl;
	cout<<"----------------------------------"<<endl<<endl;
}





