// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 11-SEP-2023
// INTRODUCCIÓN UNIDAD 2
//
// Objetivo: Realizar una operación básica con pilas
#include <cstdlib>
#include <iostream>
using namespace std;

#define K 5


int cima = -1;
int aux[K];

void push();
void pop();
void mostrar();
void vaciarPila();
void opciones();


int main(){
	//int pila[K]={};
	int opcion=100;
    cout<<"------ Trabajando con pila ------"<<endl<<endl;

	while(1) {
		opciones();
		cin>>opcion;

		switch(opcion) {
			case 1: {
				push();
				break;
			}

			case 2: {
				pop();
				break;
			}

			case 3: {
				mostrar();
				break;
			}
			system("cls");

			case 4: {
				vaciarPila();
				exit(0);
			}

			default:
				cout<<endl<<"Opcion no valida"<<endl;
		}
	}
}


void push() {
	int x=0;
	if(cima == K-1) {
		cout<<"Stack overflow"<<endl;
	} else {
		cout<<"Coloque un elemento en la pila: "<<endl;
		cin>>x;
		// ==========================
		cima+=1;
		aux[cima] = x;
		// ==========================
	}
}


void pop() {
	if(cima == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<"Elemento eliminado: "<<aux[cima]<<endl;
		cima-=1;
	}
}


void mostrar() {
	if(cima == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<"--- PILA ---"<<endl;
		cout<<"===================="<<endl;
		for(int i=cima; i>=0; --i)
			cout<<aux[i]<<endl;
		// ==========================
		cout<<"====================";
		cout<<endl<<endl;
	}
}


void vaciarPila() {
	cima=-1;
	cout<<"Pila vacia"<<endl;
	cout<<"===================="<<endl;
	for(int i=cima; i>=0; --i)
			cout<<aux[i]<<endl;
	// ==========================
	cout<<"====================";
}


void opciones() {
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Mostrar"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Digite una opcion: ";
}



