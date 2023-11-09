// Elias Eduardo Cardona Rodríguez
// Emilio Jesús Marentes Vejar
// Fabián Rodríguez Herrera
// Licenciatura en Informática 3-A
// 02-NOV-2023
// UNIDAD 3
// Implementación de listas enlazadas con usando de algoritmo tipo sort(ascendente y descendente).
#include <iostream>
using namespace::std;

struct nodo {
	int dato;
	nodo* siguiente;
} *primero, *ultimo;

bool esta_vacia();
void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void lista();

int main() {
	int opcion = 0;
	
	while(true) {
		system("cls");
		cout << "\tMENU" << endl;
		cout << "(1) Verificar si la lista esta vacia" << endl;
		cout << "(2) Insertar dato" << endl;
		cout << "(3) Imprimir" << endl;
		cout << "(4) Buscar un dato" << endl;
		cout << "(5) Modificar un dato" << endl;
		cout << "(6) Eliminar dato" << endl;
		cout << "(7) Salir" << endl;
		cout << "Seleccionar opcion: ";
		cin >> opcion;
		switch(opcion){
		case 1:
			esta_vacia();
			break;
		case 2:
			insertarNodo();
			break;
		case 3:
			lista();
			break;
		case 4:
			buscarNodo();
			break;
		case 5: 
			modificarNodo();
			break;
		case 6:
			eliminarNodo();
			break;
		case 7:
			return 0;
		break;
		default:
			cout << "\nError: Opcion no valida " << endl;
		}
		system("pause");
	}
	return 0;
}

void insertarNodo() {
	nodo* nuevo = new nodo();
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	if(primero == NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = nuevo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}      

void buscarNodo() {
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		
		while(actual != NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado\n\n";
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
	}
}

void modificarNodo(){
	nodo* actual = new nodo();
	actual = primero;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Modificar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		
		while(actual != NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado";
				cout << "\n Ingrese el Nuevo dato para este Nodo: ";
				cin >> actual->dato;
				encontrado = true;
			}
			
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
	}
}     

void eliminarNodo() {
	nodo* actual = new nodo();
	actual = primero;
	nodo* anterior = new nodo();
	anterior = NULL;
	bool encontrado = false;
	int nodoBuscado = 0;
	cout << " Ingrese el dato del nodo a Buscar para Eliminar: ";
	cin >> nodoBuscado;
	if(primero != NULL){
		
		while(actual != NULL && encontrado != true){
			
			if(actual->dato == nodoBuscado){
				cout << "\n Nodo con el dato " << nodoBuscado << " Encontrado\n\n";
				
				if(actual == primero){
					primero = primero->siguiente;
				}else if(actual == ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				
				cout << "\n Nodo ELiminado con exito\n\n";
				
				encontrado = true;
			}
			
			anterior = actual;
			actual = actual->siguiente;
		}
		if(!encontrado){
			cout << "\n Nodo No Encontrado\n\n";
		}
	}else{
		cout  << "\n La Lista se Encuentra Vacia\n\n";
	}
}

void lista() {
    nodo* actual = primero;
    if (primero != NULL) {
        cout<<"Lista en orden ascendente: ";
        while (actual != NULL) {
            cout << actual->dato << " ";
            actual=actual->siguiente;
        }
        cout<<endl;

        cout<<"Lista en orden descendente: ";
        nodo* ultimo = NULL;
        while (ultimo!= primero) {
            actual=primero;
            while (actual->siguiente!=ultimo) {
                actual=actual->siguiente;
            }
            cout<<actual->dato<< " ";
            ultimo=actual;
        }
        cout<<endl;
    } else{
        cout<<"La Lista se Encuentra Vacia"<<endl;
    }
}

bool esta_vacia() {
    nodo* lista;
	lista = NULL;


	nodo *actual;
	actual = lista;
	return actual == NULL;
}




