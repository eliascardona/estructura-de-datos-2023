#include <iostream>
#include <cstdlib>
using namespace std;
#define k 5

int aux[k];
int FINAL = -1;
int FRENTE = -1;

void opciones();
void pop();
void push();
void mostrar();
void vaciar();


int main() {
	int op=100;
	opciones();
	cout<<"ingrese una opcion: ";
	cin>>op;
	cin.ignore();
	while(1) {
		switch(op) {
			case 1: {
				push();
				cout<<endl;
				break;
			}
			case 2: {
				pop();
				cout<<endl;
				break;
			}
			case 3: {
				mostrar();
				cout<<endl;
				break;
			}
			case 4: {
				vaciar();
				cout<<endl<<endl;
				exit(0);
			}
			default:
				cout<<"opcion no valida"<<endl;
		}//fin switch
	}//fin while
}


void opciones() {
	cout<<"---- MENU ----"<<endl;
	cout<<"1. enlistar elemento"<<endl;
	cout<<"2. delistar elemento"<<endl;
	cout<<"3. mostrar lista"<<endl;
	cout<<"4. salir del programa"<<endl;
	cout<<"----------------------------"<<endl<<endl;
}


void pop() {
	if(FRENTE == -1 || FRENTE>FINAL) {
		cout<<"lista vacia"<<endl;
		return;
	} else {
		cout<<"elemento eliminado: "<<aux[FRENTE]<<endl;
		FRENTE+=1;
	}
}


void push() {
	int el=0;
	if(FINAL == k-1) {
		cout<<"lista llena"<<endl;
	} else if(FRENTE == -1) {
		FRENTE=0;
		//-----------------
		FINAL+=1;
		//-----------------
		cout<<"ingrese un elemento a la lista: ";
		cin>>el;
		//-----------------
		aux[FINAL] = el;
	}
}


void mostrar() {
	if(FRENTE == -1) {
		cout<<"lista vacia"<<endl;
	} else {
		cout<<"[";
		for(int i=FRENTE; i<=FINAL; i++) {
			cout<<aux[i]<<",  ";
		}
		cout<<"]"<<endl;
	}
}


void vaciar() {
	FRENTE=-1;
	FINAL=-1;
	cout<<"[    ]"<<endl<<endl;
	cout<<"lista vacia"<<endl;
}









