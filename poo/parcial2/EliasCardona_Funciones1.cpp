// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que tenga un menu para
// realizar sumas y restas, implementado con funciones

// librerias
#include <iostream>
// trabajo con "std"
using namespace std;


void suma(int a, int b);
void resta(int a, int b);
void mult(int a, int b);
void divi(int a, int b);
int ops() {
	int opcion=20;
	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"1.SUMA\n";
	cout<<"2.RESTA\n";
	cout<<"3.MULTIPLICACION\n";
	cout<<"4.DIVISION\n";
	cout<<"4.SALIR\n";
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
	// objetivo principal del programa
	cout<<"CALCULADORA BASICA EN C++"<<endl;

	while(1) {
		int opcion = ops();
		switch(opcion) {
			case 1: {
				int n1=0,n2=0;
				cout<<"numero entero 1: ";
				cin>>n1;
				cout<<"numero entero 2: ";
				cin>>n2;
				suma(n1,n2);
			}
			break;
			// ----------------------------
			case 2: {
				int n1=0,n2=0;
				cout<<"numero entero 1: ";
				cin>>n1;
				cout<<"numero entero 2: ";
				cin>>n2;
				resta(n1,n2);
			}
			break;
			// ----------------------------
			case 3: {
				int n1=0,n2=0;
				cout<<"numero entero 1: ";
				cin>>n1;
				cout<<"numero entero 2: ";
				cin>>n2;
				mult(n1,n2);
			}
			break;
			// ----------------------------
			case 4: {
				int n1=0,n2=0;
				cout<<"numero entero 1: ";
				cin>>n1;
				cout<<"numero entero 2: ";
				cin>>n2;
				divi(n1,n2);
			}
			break;
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



void suma(int a, int b) {
	int res=a+b;
	cout<<endl<<a<<"+"<<b<<" = "<<res<<endl;
}


void resta(int a, int b) {
	int res=a-b;
	cout<<endl<<a<<"-"<<b<<" = "<<res<<endl;
}


void mult(int a, int b) {
	int res=a*b;
	cout<<endl<<a<<"*"<<b<<" = "<<res<<endl;
}


void divi(int a, int b) {
	float res=a/b;
	cout<<endl<<a<<"/"<<b<<" = "<<res<<endl;
}





