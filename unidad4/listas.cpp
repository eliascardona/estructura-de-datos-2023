// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 23-OCT-2023
// UNIDAD 3
// Implementación de listas simples.
// Utilizando punteros y memoria dinámica.
#include <iostream>
using namespace std;

struct Nodo {
	int dato;
	Nodo *sig;
};


void insertar(Nodo *&lista, int datop);


void llenar(Nodo *&lista);
void mostrar(Nodo *&lista);
void recorrerLista(Nodo *&lista);
void eliminar();

void opciones() {
	cout<<"1. Llenar lista"<<endl;
	cout<<"2. Mostrar lista"<<endl;
	cout<<"3. Recorrer lista maestra func"<<endl;
	cout<<"4. Eliminar"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Digite una opcion: ";
}


int main() {
	Nodo *lista = NULL;
    Nodo* temp = lista;

	cout<<"MEMORIA DINAMICA EN CPP - LISTAS"<<endl<<endl;

	int opcion=100;
	while(1) {
		opciones();
		cin>>opcion;

		switch(opcion) {
			case 1: {
				llenar(temp);
			}
			break;

			case 2: {
				mostrar(temp);
			}
			break;

			case 3: {
				recorrerLista(temp);
			}
			break;

			case 4: {
				eliminar();
			}
			break;

			case 5: {
				exit(0);
			}

            default:
	            cout<<"Opcion no valida"<<endl;
        } 
    }


	cout<<endl<<endl;
	return 0;
}


void insertar(Nodo *&lista, int datop) {
	Nodo *nuevo_nodo = new(Nodo);

	// igualaciones
	nuevo_nodo -> dato = datop;
	nuevo_nodo -> sig = lista;

	// paso final
	lista=nuevo_nodo;

	return;
}



void llenar(Nodo *&lista) {
	int dato=5;
	for(int i=0; i<3; i++) {
		cout<<"Ingrese un dato "<<"#"<<i+1<<": ";
		cin>>dato;
		insertar(lista, dato);
	}
}



void mostrar(Nodo *&lista) {
    while(lista != NULL) {
        cout<<  lista->dato  <<" -> ";
        lista = lista->sig;
    }
    cout<<"NULL"<<endl;
    while(lista != NULL) {
        Nodo* temp2 = lista;
        lista = lista -> sig;
        delete temp2;
    }
}


void recorrerLista(Nodo *&lista) {
	int cont = 100;
	Nodo *actual = new(Nodo);
	if(actual == NULL) {
		cout<<"lista vacia"<<endl;
		cont = 0;
		// -------------------
		while(lista != NULL) {
			cont+=1;
			cout<<"dato "<<cont<<": "<< lista->dato <<"  ->  ";
		}
		cout<<endl;
		// -------- fin del while --------
	}
	// -------- fin del if --------
}


void eliminar() {
	cout<<"trabajando..."<<endl;
}








