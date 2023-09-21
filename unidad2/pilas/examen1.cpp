#include <iostream>
#include <cstdlib>
using namespace std;
#define k 5

int cima = -1;
int aux[k]={};

void opciones();
void pop();
void push();
void vaciar();
void mostrar();


int main() {
	cout<<"----------------------- pilas en c --------------------"<<endl;
	int op=100;
	while(1) {
		opciones();
		cout<<"ingrse una opcion: ";
		cin>>op;
		switch(op) {
			case 1: {
				push();
				cout<<endl;
			}
			break;
			case 2: {
				pop();
				cout<<endl;
			}
			break;
			case 3: {
				mostrar();
				cout<<endl;
			}
			break;
			case 4: {
				vaciar();
				cout<<endl<<endl;
				exit(0);
			}
		}
	}
}


void opciones() {
	cout<<"Opcion 1. insertar"<<endl;
	cout<<"Opcion 2. sacar"<<endl;
	cout<<"Opcion 3. mostrar"<<endl;
	cout<<"Opcion 4. salir"<<endl;
}



void pop() {
	if(cima == -1) {
		cout<<"pila vacia"<<endl;
	} else {
		cout<<"elemento removido: "<<aux[cima]<<endl;
		cima-=1;
	}
}



void push() {
	int input=0;
	if(cima >= k) {
		pop();
	} else if(cima == k-1) {
		cout<<"pila llena"<<endl;
	} else {
		cima+=1;
		cout<<"inserte un elemento en la pila: ";
		cin>>input;
		aux[cima] = input;
	}
}



void vaciar() {
	if(cima == -1)
		cout<<"pila actualmente vacia"<<endl;
	else
		cima = -1;
}



void mostrar() {
	if(cima == -1)
		cout<<"pila vacia"<<endl;
	else
		for(int i=cima;i>=0;i--)
			cout<<aux[i]<<endl;
}







