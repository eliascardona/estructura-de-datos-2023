// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 11-SEP-2023
// INTRODUCCIÓN UNIDAD 2
//
// Objetivo: Realizar una operación básica con listas
#include <cstdlib>
#include <iostream>
using namespace std;
#define K 5


int aux[K];
int FINAL = -1;
int FRENTE = -1;

void enlistar();
void delistar();
void mostrar();
void vaciar();
void pintar();
void opciones();


main() {
	//int lista[K]={};
	int opcion=100;
	cout<<"------ Trabajando con listas ------"<<endl<<endl;

	while(1) {
		opciones();
		cin>>opcion;

		switch(opcion) {
			case 1: {
				enlistar();
				pintar();
			}
			break;

			case 2: {
				delistar();
				pintar();
			}
			break;

			case 3: {
				mostrar();
				pintar();
			}
			break;

			case 4: {
				vaciar();
				exit(0);
			}

            default:
	            cout<<"Opcion no valida"<<endl;
        } 
    } 
}


void enlistar() {
	int elemento = 0;
	if(FINAL == K-1) {
		cout<<"Overflow"<<endl<<endl;
	} else if(FRENTE == -1) {
		// ==========================
		FRENTE = 0;
		// ==========================
		cout<<"Coloque un elemento en su lista: ";
		cin>>elemento;
		// ==========================
		FINAL+=1;
		aux[FINAL] = elemento;
		// ==========================
	} else if(FRENTE > 0) {
		cout<<"[>0] Coloque un elemento en su lista: ";
		cin>>elemento;
		// ==========================
		FINAL+=1;
		aux[FINAL] = elemento;
		// ==========================
	}
}


void delistar() {
	if(FRENTE == -1 || FRENTE>FINAL) {
		cout<<"Lista vacia"<<endl;
		return;
	} else {
		cout<<"Elemento eliminado: "<<aux[FRENTE]<<endl;
		FRENTE+=1;
	}
} 
 

void mostrar() {
	if(FRENTE == - 1) {
		cout<<"Lista vacia"<<endl;
	} else {
		cout<<"--- LISTA ---"<<endl;
		cout<<endl<<"===================="<<endl;
		cout<<"[";
		for(int i=FRENTE; i<=FINAL; i++)
			cout<<aux[i]<<",  ";
		// ==========================
		cout<<"]"<<endl;
		cout<<"===================="<<endl<<endl;
	}
}


void vaciar() {
	FRENTE = -1;
	FINAL = -1;
	cout<<endl<<"===================="<<endl<<endl;
	cout<<endl<<"===================="<<endl<<endl;
	cout<<"Lista vacia"<<endl<<endl;
}


void pintar() {
	cout<<endl<<"===================="<<endl;
	cout<<endl<<"FRENTE = "<<FRENTE<<endl;
	cout<<"FINAL = "<<FINAL<<endl<<endl;
	cout<<endl<<"===================="<<endl;
}


void opciones() {
	cout<<"1. Enlistar elemento"<<endl;
	cout<<"2. Delistar elemento"<<endl;
	cout<<"3. Mostrar"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Digite una opcion: ";
}



