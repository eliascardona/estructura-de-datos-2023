// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 01-NOV-2023
// UNIDAD 3
// Implementación de listas simples.
// Utilizando punteros y memoria dinámica.
#include <iostream>
using namespace std;

struct Nodo {
	int dato;
	Nodo *sig;
	Nodo *anterior;
};


void insertar(Nodo *&lista, int datop);
void llenar(Nodo *&lista);
void mostrar(Nodo *&lista);

bool listaVacia(Nodo *&lista);
void recorrerLista(Nodo *&lista);

void buscarDato(Nodo *&lista, int datop);
void eliminarDato(Nodo *&lista, int datop);


void opciones() {
	cout<<"1. Llenar lista"<<endl;
	cout<<"2. Mostrar lista"<<endl<<endl;

	cout<<"4. Esta vacia"<<endl;

	cout<<"5. EliminarDato"<<endl;
	cout<<"6. BuscarDato"<<endl;

	cout<<"10. Salir"<<endl<<endl;

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

			case 4: {
				if(listaVacia(temp))
					cout<<endl<<"la lista esta vacia"<<endl<<endl;
				else
					cout<<endl<<"la lista contiene datos"<<endl<<endl;
			}
			break;

			case 5: {
				int dato1=100;
				cout<<"ingrese el dato a eliminar: ";
				cin>>dato1;
				eliminarDato(temp, dato1);
			}
			break;

			case 6: {
				int dato2=100;
				cout<<"ingrese el dato a eliminar: ";
				cin>>dato2;
				buscarDato(temp, dato2);
			}
			break;

			case 10: {
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
	cout<<endl;
	for(int i=0; i<5; i++) {
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

	if(lista==NULL)
		cout<<endl<<"lista vacia"<<endl<<endl;

    while(lista != NULL) {
        Nodo* temp2 = lista;
        lista = lista -> sig;
        delete temp2;
    }
}


bool listaVacia(Nodo *&lista) {
	Nodo *actual;
	actual = lista;
	return actual == NULL;
}


void buscarDato(Nodo *&lista, int datop) {
	Nodo *actual;
	actual = lista;
	int cont = 0;
	int aux = 0;
	
	while(actual != NULL) {
		cont++;
		if(actual->dato == datop) {
			cout << "Se encontro el dato " << datop << " dentro de la lista, en la posicion " << cont << endl;
			aux++;	
		}
		actual = actual->sig;	
	}
	if(aux == 0) {
		cout << "No se encontro el dato" << endl;
	}
}


void eliminarDato(Nodo *&lista, int datop) {
	Nodo *actual = new(Nodo);
	Nodo *anterior = new(Nodo);
	
	actual = lista;
	anterior = NULL;
	
	while((actual != NULL) && (actual->dato != datop)) {
		anterior = actual;
		actual = actual->sig;
	}
	if(actual == NULL) {
		cout << "El elemento que desea eliminar, no se encuentra en la lista" << endl;
	}
	else if(anterior == NULL) {
		lista = lista->sig;
		delete(actual);
	}
	else {
		anterior->sig= actual->sig;
		delete(actual);
	}
	
}




