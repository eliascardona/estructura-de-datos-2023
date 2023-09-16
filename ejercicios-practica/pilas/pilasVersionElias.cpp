// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 08-SEP-2023
// INTRODUCCIÓN UNIDAD 2
//
// Objetivo: Realizar una operación básica con pilas
#include <iostream>
using namespace std;

#define p 5


void menu();
void insertarPop(int a[], int &cima);
void eliminarPop(int a[], int &cima, int elim);
void pintarPila(int a[], int &cima);


int main() {
	cout<<"OBJETIVO: Disenar una pila en C++"<<endl;
	menu();


	cout<<endl<<endl;
	return 0;
}


void menu() {
	int op=12;
	while(op>0 && op!=4) {
		cout<<"opcion 1. insertar pop"<<endl;
		cout<<"opcion 2. eliminar pop"<<endl;
		cout<<"opcion 3. pintar pop"<<endl;
		cout<<"opcion 4. salir"<<endl;
		cout<<"ingrese una opcion: ";
		cin>>op;

		int pila[]={};
		int cima = -1;

		switch(op) {
			case 1:
				insertarPop(pila, cima);
			break;
			// -------------------

			case 2: {
				int aEliminar=0;
				cout<<"Elemento a eliminar: ";
				cin>>aEliminar;
				eliminarPop(pila, cima, aEliminar);
			}
			break;
			// -------------------

			case 3:
				pintarPila(pila, cima);
			break;
			// -------------------

			default:
				cout<<"opcion no valida"<<endl;
			break;
			// -------------------

		}
		cout<<endl;
	};

};


void insertarPop(int a[], int &cima) {
	int boolAux=3, inputAux=12;
	do {
		if(cima==p-1) {
			cout<<"pila llena"<<endl<<endl;
		} else {
			cima+=1;
			cout<<endl<<"Inserta un elemento en la pila: ";
			cin>>inputAux;
			a[cima] = inputAux;
			// ------- bloque ---------

			cout<<endl;
			cout<<"desea continar:  0=si / 1=no";
			cin>>boolAux;
			cin.ignore();
			// ------- bloque ---------


			if(boolAux !=0 && boolAux !=1) {
				cout<<endl<<"Opcion no valida, se asumira 1 (no continuar)."<<endl<<endl;
				boolAux = 1;
			}
			cout<<"La cima va en: "<<cima<<endl<<endl;
			// ------- cima ---------
		}
	} while(cima!=p-1 && boolAux==0);
}


void eliminarPop(int a[], int &cima, int elim) {
	if(cima==-1) {
		cout<<"pila vacia"<<cima<<endl<<endl;
		// ------- eliminando elemeto---------
	} else {
		a[elim] = 0;
		cima-=1;
	}
}


void pintarPila(int a[], int &cima) {
	cout<<endl<<"Pila:"<<endl;
	cout<<endl<<"------------------"<<endl;
	for(int i=0; i<cima; i--)
		cout<<"["<<a[i]<<"]  ";
		cout<<"["<<a[cima]<<"]"<<endl;
	// fin de impresion
	cout<<endl<<"------------------"<<endl<<endl;
}






