// Elias Eduardo Cardona Rodríguez
// LITC 3A
// 07-SEP-2023
// Objetivo: calcula el sueldo inicial de los empleados

#include <iostream>
#include <cstring>
using namespace std;


struct Empleado {
	string nombre;
	int edad;
	float sueldo[4];
	double original;
	double incremento;
};


void registroDeEmpleados(Empleado empleados[]);
double sueldoMensual(Empleado empleados[], int iter);
double incrementoMensual(Empleado empleados[]), int iter;
void mostrarEmpleados(Empleado empleados[]);




int main() {
	Empleado empleados[2];
	cout<<"PROGRAMA PARA CALCULAR EL SUELDO DE LOS EMPLEADOS DE LA UAA"<<endl<<endl;
	
	registroDeEmpleados(empleados);
	cout<<endl<<endl;
	mostrarEmpleados(empleados);

	
	cout<<endl<<endl;
	return 0;
}


void registroDeEmpleados(Empleado empleados[]) {
	for(int i=0; i<2; i++) {
		cout<<"ingrese el nombre del empleado: ";
		getline(cin, empleados[i].nombre);
		
		cout<<"ingrese la edad del empleado: ";
		cin>>empleados[i].edad;
		cin.ignore();
		
		cout<<"ingrese sueldo del empleado:"<<endl;
		for(int j=0; j<4; j++) {
			cout<<"semana "<<j+1<<": ";
			cin>>empleados[i].sueldo[j];
			cin.ignore();
		}
		cout<<endl;	
	}
}


double sueldoMensual(Empleado empleados[], int iter) {
	double mensual=0.0;
	
	for(int j=0; j<4; j++)
		mensual+=empleados[iter].sueldo[j];
	// fin del for interno
	return mensual;
	
}


double incrementoMensual(Empleado empleados[], int iter) {
	double mensual=0.0, inicial=0.0;

	for(int j=0; j<4; j++)
		mensual+=empleados[iter].sueldo[j];
	// fin del for interno
	if(mensual<1000)
		inicial=mensual*1.15;
	else
		inicial=mensual*1.12;
	// fin del if
	return inicial;
		
}

void mostrarEmpleados(Empleado empleados[]) {
	for(int a=0; a<2; a++) {
		empleados[a].original = sueldoMensual(empleados, a);
		empleados[a].incremento = incrementoMensual(empleados, a);
	}
	
	for(int a=0; a<2; a++) {
		cout<<"-------- EMPLEADO: "<<empleados[a].nombre<<" --------"<<endl;
		cout<<"Sueldo original: "<<original[a]<<endl;
		cout<<"Sueldo con incremento: "<<incremento[a]<<endl;
		cout<<endl;
	}
}





