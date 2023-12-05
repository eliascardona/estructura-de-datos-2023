// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3 A
// 18-SEP-2023
//
// Objetivo:
// Realizar un programa que maneje arreglos de structs y que obtenga lo siguientes requerimientos especiales:
// 1. Número de estudiantes con promedio aprobado.
// 2. Número de estudiantes hombres con promedio aprobado.
// 3. Número de estudiantes donde la calificación 1 fue aprobada.
// 4. Porcentaje de estudiantes mujeres con promedio reprobado.
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
#define k 2


// Struct que contiene los campos necesarios de cada estudiante
//
struct Estudiante {
	char nombre[50];
	char genero;
	float calif1;
	float calif2;
	double prom;
};
// Declaración de procedimientos y funciones
//
//
void opciones();

void captura(Estudiante arr[]);

void impresion(Estudiante arr[]);

int promGlobalYes(Estudiante arr[]);

int promHombresYes(Estudiante arr[]);

int califUnoYes(Estudiante arr[]);

float porcMujeresYes(Estudiante arr[]);
//
// ------------------------------------
//
int main() {
	cout<<"------ INFORMATICOS -------"<<endl;
	Estudiante inf[k];
	int op=100;
	// ---------------------------------
	// Funcionamiento basico de un menu
	while(1) {
		opciones();
		cout<<"ingrese una opcion ";
		cin>>op;
		cin.ignore();
		// ---------------------------------
		switch(op) {
			case 1: {
				captura(inf);
				cout<<endl;
			}
			break;
			case 2: {
				int f1=40;
				f1 = promGlobalYes(inf);
				cout<<endl<<"======================"<<endl;
				cout<<"# de alumnos aprobados: "<<f1;
				cout<<endl<<"======================"<<endl;

				cout<<endl;
			}
			break;
			case 3: {
				int f2=40;
				f2 = promHombresYes(inf);
				cout<<endl<<"======================"<<endl;
				cout<<"# de alumnos varones aprobados: "<<f2;
				cout<<endl<<"======================"<<endl;

				cout<<endl;
			}
			break;
			case 4: {
				int f3=40;
				f3 = califUnoYes(inf);
				cout<<endl<<"======================"<<endl;
				cout<<"# de alumnos con calif. 1 aprobatoria: "<<f3;
				cout<<endl<<"======================"<<endl;

				cout<<endl;
			}
			break;
			case 5: {
				porcMujeresYes(inf);
				cout<<endl;
			}
			break;


			case 6: {
				impresion(inf);
				cout<<endl;
			}
			break;


			case 7: {
				exit(0);
			}
			break;


			default:
				cout<<"opcion no valida";
			break;
		}
	}
	// ---------------------------------


	cout<<endl<<endl;
	return 0;
}



void opciones() {
	cout<<"1. captura de estudiantes informaticos"<<endl;

	cout<<"2. cantidad de informaticos aprobados"<<endl;

	cout<<"3. cantidad de hombres informaticos aprobados"<<endl;

	cout<<"4. cantidad de informaticos con calif. 1 aprobatoria"<<endl;

	cout<<"5. procentaje de mujeres informaticas aprobados"<<endl;

	cout<<"6. imprimir perfil de estudiantes"<<endl;

	cout<<"7. salir del programa"<<endl;
}


void captura(Estudiante arr[]) {
	for(int i=0;i<k;i++) {
		cout<<endl<<"---- informatico "<<i+1<<" ----"<<endl;
		// --------------------------------------
		cout<<"nombre "<<": ";
		cin.getline(arr[i].nombre, 50);
		// --------------------------------------
		cout<<"genero (h/m)"<<": ";
		cin>>arr[i].genero;
		cin.ignore();
		// --------------------------------------
		cout<<"calif. 1"<<": ";
		cin>>arr[i].calif1;
		cin.ignore();
		// --------------------------------------
		cout<<"calif. 2"<<": ";
		cin>>arr[i].calif2;
		cin.ignore();
		// --------------------------------------
		cout<<endl<<"======================"<<endl;
	}
}


void impresion(Estudiante arr[]) {
	cout<<endl<<"Lista de informaticos"<<endl;
	for(int i=0;i<k;i++) {
		cout<<"informatico "<<i+1<<":"<<endl;
		// --------------------------------------
		cout<<"nombre: ";
		cout<<arr[i].nombre<<endl;
		// --------------------------------------
		cout<<"genero: ";
		cout<<arr[i].genero<<endl;
		// --------------------------------------
		cout<<"calif. 1";
		cout<<arr[i].calif1<<endl;
		// --------------------------------------
		cout<<"calif. 2";
		cout<<arr[i].calif2<<endl;
		// --------------------------------------
		cout<<endl<<"======================"<<endl;
	}
}


int promGlobalYes(Estudiante arr[]) {
	// funcion normalizada para obtener la cantidad de dato
	// recopilados SEGÚN CIERTA CONDICIÓN.
	// se realiza la operación de prom dentro del for
	// y posterior sobre el mismo se realiza la verificacion
	// con un `if` para saber si el prom fue aprobatorio
	int acProm=0;
	for(int i=0;i<k;i++) {
		// --------------------------------------
		arr[i].prom = (arr[i].calif1+arr[i].calif2)/2;
		// --------------------------------------
		if(arr[i].prom >= 6) {
			acProm++;
		}
		// --------------------------------------
	}
	return acProm;
}


int promHombresYes(Estudiante arr[]) {
	int acProm=0;
//	char ha = "h";

// intenté realizar una verificación manual de dos
// cadenas. No pude hacerlo.
// valdría la pena repasar este tema en clase.

	for(int i=0;i<k;i++) {
//		if (strcmp(arr[i].genero, ha)==0)
//		if(arr[i].genero==ha) {
			arr[i].prom = (arr[i].calif1+arr[i].calif2)/2;
			if(arr[i].prom >= 6) {
				acProm++;
			}
//		} else {
//			cout<<"no son hombres";
//		}
	}
	return acProm;
}


int califUnoYes(Estudiante arr[]) {
	// se realiza la operación de prom dentro del for
	// y posterior sobre el mismo se realiza la verificacion
	// con un `if` para saber si la calificación #1 fue aprobatorio
	int acYes=0;
	for(int i=0;i<k;i++) {
		// --------------------------------------
		if(arr[i].calif1 >= 6) {
			acYes++;
		}
		// --------------------------------------
	}
	return acYes;
}


float porcMujeresYes(Estudiante arr[]) {
	cout<<"FALTO PROGRAMAR ESTA PARTE :( "<<endl;
}













