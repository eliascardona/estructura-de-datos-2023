// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Fecha: 17/10/2023
// EXAMEN PRÁCTICO PARCIAL 2
// Objetivo: Realizar un programa que realice operaciones matemáticas con funciones


#include <iostream>
using namespace std;


void suma(int x, int y);
void resta(int x, int y);
void mult(int x, int y);
void divi(int x, int y);

int ops() {
	int opcion=20;
	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"1.SUMA\n";
	cout<<"2.RESTA\n";
	cout<<"3.MULTIPLICACION\n";
	cout<<"4.DIVISION\n";
	cout<<"5.SALIR\n";
	// ------------------------
	cout<<"DIGITE UNA OPCION: ";
	cin>>opcion;
	// ------------------------
	cout<<endl;
	// ------------------------
	return opcion;
	// ------------------------
}


int main() {
	cout<<"CALCULADORA BASICA EN C++"<<endl;

	while(1) {
		int opcion = ops();
		switch(opcion) {
			case 1: {
				int n1=0,n2=0;
				cout<<"ingrese un numero: ";
				cin>>n1;
				cout<<"ingrese otro numero: ";
				cin>>n2;
				suma(n1,n2);
			}
			break;
			// ----------------------------
			case 2: {
				int n1=0,n2=0;
				cout<<"ingrese un numero: ";
				cin>>n1;
				cout<<"ingrese otro numero: ";
				cin>>n2;
				resta(n1,n2);
			}
			break;
			// ----------------------------
			case 3: {
				int n1=0,n2=0;
				cout<<"ingrese un numero: ";
				cin>>n1;
				cout<<"ingrese otro numero: ";
				cin>>n2;
				mult(n1,n2);
			}
			break;
			// ----------------------------
			case 4: {
				int n1=0,n2=0;
				cout<<"ingrese un numero: ";
				cin>>n1;
				cout<<"ingrese otro numero: ";
				cin>>n2;

				if(n2==0) {
					cout<<"Valor no valido. Intente con otro."<<endl;
				} else {
					divi(n1,n2);
				}

			}
			break;
			// ----------------------------
			case 5: {
				exit(0);
			}
			break;
			// ----------------------------
			default:
				cout<<"opcion no valida"<<endl;
		}
	}

	cout<<endl<<endl;
	return 0;
}



void suma(int x, int y) {
	int res=x+y;
	cout<<endl<<x<<"+"<<y<<" = "<<res<<endl;
}


void resta(int x, int y) {
	int res=x-y;
	cout<<endl<<x<<"-"<<y<<" = "<<res<<endl;
}


void mult(int x, int y) {
	int res=x*y;
	cout<<endl<<x<<"*"<<y<<" = "<<res<<endl;
}


void divi(int x, int y) {
	float res=x/y;
	cout<<endl<<x<<"/"<<y<<" = "<<res<<endl;
}




