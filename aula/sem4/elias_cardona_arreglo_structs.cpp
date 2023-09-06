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



void capturarEstudiante(Estudiante estudiantes[]);
void generarReporte(Estudiante estudiantes[]);
//double calcularPromedio(Estudiante estudiantes[]);
//double obtenerCalificacionMaxima(Estudiante estudiantes[]);


int main() {
    Estudiante estudiantes[3];

    cout<<"Captura de datos del estudiante:"<<endl;
    capturarEstudiante(estudiantes);


    cout<<endl<<"REPORTE ACADEMICO"<<endl<<endl;
    generarReporte(estudiantes);


	cout<<endl<<endl;
    return 0;
}


void capturarEstudiante(Estudiante estudiantes[]) {
	for(int i=0; i<3; i++) {
	    cout<<"ID del estudiante: ";
	    cin>>estudiantes[i].id;
	    cin.ignore();

	    cout<<"Nombre del estudiante: ";
	    getline(cin, estudiantes[i].nombre);

	    cout<<"Direccion del estudiante: ";
	    getline(cin, estudiantes[i].direccion);

		for(int j=0; j<3; j++) {
	    	cout<<"Calificacion #"<<j+1<<" ";
		    cin>>estudiantes[i].calificaciones[j];
		}
		cin.ignore();
	}
}


void generarReporte(Estudiante estudiantes[]) {
	for(int i=0; i<3; i++) {
		cout<<"----------------------------------"<<endl;
		cout<<"#"<<i+1<<endl;
	    cout<<"Alumno: "<<estudiantes[i].nombre<<" (Id. "<<estudiantes[i].id<<")"<<endl;
	    cout<<"Direccion: "<<estudiantes[i].direccion<<endl;
	    cout<<"Calificaciones: "<<endl;
	    cout<<"Parcial 1\tParcial 2\tParcial 3"<<endl;
		for(int j=0; j<3; j++) {
		    cout<<estudiantes[i].calificaciones[j]<<"\t";
		}
		cout<<endl<<"----------------------------------"<<endl<<endl;
	}
}


//double calcularPromedio(Estudiante estudiantes[]) {
//	float suma = 0.0, prom = 0.0;
//	for(int i=0; i<3; i++)
//		suma += estudiante.calificaciones[i];
//	prom = suma/3.0;
//	
//	return prom; 
//}


//double obtenerCalificacionMaxima(Estudiante estudiantes[]) {
//    double maxima = estudiante.calificaciones[0];
//	for(int i=0; i<3; i++) {
//    	if(estudiante.calificaciones[i] > maxima)
//	        maxima = estudiante.calificaciones[i];
//	}
//    return maxima;
//}





