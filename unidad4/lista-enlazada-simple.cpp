// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 02-NOV-2023
// UNIDAD 3
// Implementación de listas enlazadas simples.
#include <iostream>
using namespace std;

//declaracion de la estructura de la lista 
//estructura del NODO
struct nodo{
	int dato;
	nodo *siguiente;
};

//prototipo para insertar los elementos de la lista
void insertar(nodo *&, int);
//prototipo para recorrer la lista e imprimir
void imprimir_lista(nodo *);
//prototipo para buscar un elemento en la lista
void buscar(nodo *, int);
//prototipo para verificar si la lista esta vacia
bool esta_vacia(nodo *); 
//prototipo para eliminar elemento
void eliminar(nodo *&, int);
	
int main() {
	int elemento, eleccion;
	//(1) crear la lista vacia
	nodo *lista;
	lista = NULL;
	
	while(true) {
		system("cls");
		cout << "\tMENU" << endl;
		cout << "(1) Verificar si la lista esta vacia" << endl;
		cout << "(2) Insertar dato" << endl;
		cout << "(3) Imprimir" << endl;
		cout << "(4) Buscar un dato" << endl;
		cout << "(5) Eliminar dato" << endl;
		cout << "(6) Salir" << endl;
		cout << "Seleccionar opcion: ";
		cin >> eleccion;
		
		switch(eleccion) {
			case 1: {
				if (esta_vacia(lista)) {
					cout << "\nLa lista esta vacia" << endl;
				}
				else {
					cout << "\nHay datos en la lista" << endl;
				}
				break;
			}
			case 2: {
				//llenar los datos de los elementos de la lista
				cout << "\nIngresa el elemento a insertar: ";
				cin >> elemento;
				insertar(lista, elemento);
				break;
			}
			case 3: {
				imprimir_lista(lista);
				break;
			}
			case 4: {
				//pedir el elemnto a buscar en la lista
				if (esta_vacia(lista)) {
					cout << "\nLa lista esta vacia. No hay nada que buscar" << endl;
				}
				else {
					cout << "\nIngresa el elemento a buscar: ";
					cin >> elemento;
					buscar(lista, elemento);
				}
				break;
			}
			case 5: {
				//pedir el elemnto a eliminar en la lista
				if (esta_vacia(lista)) {
					cout << "\nLa lista esta vacia. No puedes eliminar" << endl;
				}
				else {
					cout << "\nIngresa el elemento a eliminar: ";
					cin >> elemento;
					eliminar(lista, elemento);
				}
				break;
			}
			case 6: {
				return 0;
			}
			default: {
				cout << "\nError: Opcion Invalida" << endl;
				break;
			}
		}
		system("pause");
	}
	
	return 0;
}

//implementar la funcion insertar elementos en la lista
void insertar(nodo *&lista, int elemento) {
	
	//(2) crear un nuevo nodo y asignando mmemoria dinamica al nuevo nodo 
	nodo *nuevo_nodo;
	nuevo_nodo = new(nodo);
	
	//(3) asignar el campo dato al nuevo nodo
	nuevo_nodo->dato = elemento;
	
	//(4) enlazar el segundo miembro de nodo
	nuevo_nodo->siguiente = lista;
	
	//(5) pasar la lista al inicio de la cabecera
	lista = nuevo_nodo;
	return;
}

//implementacion de la funcion imprimir
void imprimir_lista(nodo *lista) {
	nodo *actual;
	actual = lista;
	
	cout << "\nDatos de la lista: " << endl;
	while(actual != NULL){
		cout << actual->dato << endl;
		actual = actual->siguiente;
	}
}

//implemenctacion de la funcion de buscar
void buscar(nodo *lista, int elemento_buscar) {
	nodo *actual; 
	actual = lista;
	int contador = 0;
	int x = 0;
	
	while(actual != NULL) {
		contador++;
		if(actual->dato == elemento_buscar) {
			cout << "Se encontro el dato " << elemento_buscar << " dentro de la lista, en la posicion " << contador << endl;
			x++;	
		}
		actual = actual->siguiente;	
	}
	if(x == 0) {
		cout << "No se encontro el dato" << endl;
	}
}

//implemenctacion de la funcion para verificar si esta vacia
bool esta_vacia(nodo *lista) {
	nodo *actual;
	actual = lista;
	return actual == NULL;
}

//implementacion de la funcion para eliminar
void eliminar(nodo *& lista, int elemento_eliminar) {
	nodo *actual = new(nodo);
	nodo *anterior = new(nodo);
	
	actual = lista;
	anterior = NULL;
	
	while((actual != NULL) && (actual->dato != elemento_eliminar)) {
		anterior = actual;
		actual = actual->siguiente;
	}
	if(actual == NULL) {
		cout << "El elemento no existe" << endl;
	}
	else if(anterior == NULL) {
		lista = lista->siguiente;
		delete(actual);
	}
	else {
		anterior->siguiente = actual->siguiente;
		delete(actual);
	}
	
}
