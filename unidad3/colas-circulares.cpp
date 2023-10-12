// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 04-OCT-2023
// INTRODUCCIÓN UNIDAD 2
//
// Objetivo: Realizar operaciones con listas circulares en C++
#include <cstdlib>
#include <iostream>
using namespace std;
#define K 4


int aux[K];
int FINAL = -1;
int FRENTE = -1;

void enlistar();
void delistar();
void mostrar();
void mostrar_cola();
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
			}
			break;

			case 2: {
				delistar();
			}
			break;

			case 3: {
				mostrar();
				pintar();
			}
			break;

			case 4: {
				exit(0);
			}

            default:
	            cout<<"Opcion no valida"<<endl;
        } 
    } 
}


void enlistar() {
	int elemento = 0;
	if(FRENTE==0 && FINAL==K-1 || FINAL+1==FRENTE) {

		cout<<"LISTA LLENA. HORA DE DAR VUELTA"<<endl<<endl;

	} else {
		cout<<"Coloque un elemento en su lista: ";
		cin>>elemento;
		if(FRENTE == -1 && FINAL == -1) {
			// ==========================
			//   PRIMER ELEMENTO 
			FRENTE++;
			FINAL++;
			// ==========================
		} 
		else if(FINAL == K-1) {
			FINAL = 0;
		}
		else {
			FINAL++;
		}
		aux[FINAL] = elemento;
	}
}


void delistar() {
	if(FRENTE == -1 && FINAL == -1) {
		cout<<"Lista vacia"<<endl;
	} else {
		cout<<"Elemento eliminado: "<<aux[FRENTE]<<endl;

		if(FRENTE == FINAL) {
			FRENTE = -1;
			FINAL = -1;
		}
		else if(FRENTE == K-1) {
			FRENTE=0;
		}
		else {
			FRENTE++;
		}
			// ==========================
	}
} 
 

void mostrar() {
	if(FRENTE == - 1) {
		cout<<"Lista vacia"<<endl;
	} else {
		mostrar_cola();
		// ==================================================
	}
}


void mostrar_cola() {
	cout<<"--- LISTA ---"<<endl;
	cout<<endl<<"===================="<<endl;
	cout<<"[";
	if(FINAL < FRENTE) {
		for(int i=0; i<=FINAL; i++) {
			cout<<aux[i]<<",  ";
		}
		for(int i=FRENTE; i <= K - 1; i++) {
			cout<<aux[i]<<",  ";
		}
	}
	else {
		for(int i=FRENTE; i<=FINAL; i++)
		cout<<aux[i]<<",  ";
	// ==========================
	}
	cout<<"]"<<endl;
	cout<<"===================="<<endl<<endl;
}


void pintar() {
	cout<<endl<<"===================="<<endl;
	cout<<"FRENTE = "<<FRENTE<<endl;
	cout<<"FINAL = "<<FINAL<<endl;
	cout<<endl<<"===================="<<endl;
}


void opciones() {
	cout<<"1. Enlistar elemento"<<endl;
	cout<<"2. Delistar elemento"<<endl;
	cout<<"3. Mostrar"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Digite una opcion: ";
}



