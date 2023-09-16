// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 13-SEP-2023
//
// Objetivo: Verificar que la linea de codigo escrita por el usuario no tenga parentesis incorrectos

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define K 4
#define max 70

int top = -1;
char pila[K] = {};


const char auxUno[2] = {"(","\0"};
const char auxDos[2] = {")","\0"};

char parentesisIzquierdo(const *char cadenaAux[], int iter);
char parentesisDerecho(const *char cadenaAux[], int iter);
void push(char cadena[]);
void pop();
//void mostrar();

int main() {
	char fraseIngrseada[max] = {};
	int opcion= 100;

    cout<<"--- TRABAJANDO CON PILAS ---"<<endl;

	while(1) {
		cout<<"1. Push "<<endl;
		cout<<"2. Pop "<<endl;
		cout<<"3. Mostrar"<<endl;
		cout<<"4. Salir"<<endl;
		// ==========================
		cout<<"Digite la opcion: ";
		cin>>opcion;

		switch(opcion) {
			case 1: {
				cout<<"Escriba una funcion linea de codigo con parentesis: ";
				cin.getline(fraseIngrseada, max);
				push(fraseIngrseada);
			}
			break;

			case 2:
				pop();
			break;

			/*
			case 3:
				mostrar();
			break;
			*/

			case 4:
				exit(0);
			break;


			default:
				cout<<endl<<"Opcion no valida"<<endl;
		}
	}
}



char parentesisDerecho(char cadenaAux[], int iter) {
	char Aux[2]={};

	// ==========================
	if(cadenaAux[iter] == auxDos) {
		Aux[iter] = auxDos[iter];
	}
	// ==========================


	return Aux;
}



char parentesisIziquierdo(char cadenaAux[], int iter) {
	char Aux[2]={};

	// ==========================
	if(cadenaAux[iter] == auxUno) {
		Aux[iter] = auxUno[iter];
	}
	// ==========================


	return Aux;
}


void push(char cadena[]) {
	int largo = strlen(cadena);
	int a = 2;
	char izquierdo[2]={};

	if(top == K-1) {
		cout<<"SE HA DETECTADO UN PARENTESIS DERECHO SIN PARENTESIS IZQUIERDO"<<endl;
	} else {
		// ==========================
		for(a=0; a<largo; a++)
			izquierdo = parentesisIzquierdo(cadena, a);
			cout<<endl<<"--- parentesis insertado en la pila: "<<izquierdo<<" ---"<<endl<<endl;
		// ==========================
		top+=1;
		pila[top] = izquierdo;
		// ==========================
	}


}


void pop() {
	if(top == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<"Elemento eliminado: "<<pila[top]<<endl;
		top-=1;
	}
}


/*
void mostrar() {
	if(top == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<"En la pila:"<<endl;
		// ==========================
		for(int i=top; i>=0; --i) {
			cout<<i<<": ";
			cout<<pila[i]<<endl;
		}
		// ==========================
		cout<<endl;
	}
}
*/



