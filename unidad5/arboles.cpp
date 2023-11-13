// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 06-NOV-2023
// UNIDAD 3
// Implementación de listas enlazadas dobles.
#include <iostream>
using namespace std;


//estructura NODO
struct Nodo {
	int dato;
	Nodo *adelante;
	Nodo *atras;
};

struct Nodo *listaUNO;
struct Nodo *listaDOS;

//prototipo para insertar los elementos de la lista
void insertar();
//prototipo para recorrer la lista e imprimir
void imprimirPrimeroUltimo();
//prototipo para recorrer la lista e imprimir
void imprimirUltimoPrimero();
//prototipo para buscar un elemento en la lista
void buscar(int busc);
//prototipo para modificar elemento
void modificar(int busc);
//prototipo para eliminar elemento
void eliminar(int el_elim);

int main() {
	int elemento=100, op=90;
	
	while(true) {
		cout << "\tMENU" << endl;
		cout << "(1) Insertar dato" << endl;
		cout << "(2) Imprimir DERECHA" << endl;
		cout << "(3) Imprimir IZQUIERDA" << endl;
		cout << "(4) Buscar dato" << endl;
		cout << "(5) Modificar dato" << endl;
		cout << "(6) Eliminar dato" << endl;
		cout << "(10) Salir" << endl;
		cout << "Seleccionar opcion: ";
		cin >> op;

		switch(op) {
			case 1: {
				cout << "\n---- LLENADO DE LISTA ----\n";
				insertar();
				cout << "\n--------------------\n";
			}
			break;
			// *-------*
			case 2: {
				cout << "\nImprimir lista (PRIMERO AL ULTIMO): \n";
				imprimirPrimeroUltimo();
				cout << "\n\n";
			}
			break;
			// *-------*
			case 3: {
				cout << "\nImprimir (ULTIMO AL PRIMERO): \n";
				imprimirUltimoPrimero();
				cout << "\n\n";
			}
			break;
			// *-------*
			case 4: {
				int busq;
				cout << "\nIngresa un elemento que desea buscar: ";
				cin >> busq;
				buscar(busq);
				cout << "\n\n";
			}
			break;
			// *-------*
			case 5: {
				int modf;
				cout << "\nIngresa el elemento a modificar: ";
				cin >> modf;
				modificar(modf);
				cout << "\n\n";
			}
			break;
			// *-------*
			case 6: {
				int elemParaBorrar;
				cout << "\nIngresa el elemento a eliminar: ";
				cin >> elemParaBorrar;
				eliminar(elemParaBorrar);
				cout << "\n\n";
			}
			break;
			// *-------*
			case 10: {
				exit(0);
			}
			break;
			// *-------*
			default: {
				cout << "\nError: Opcion Invalida" << endl;
			}
			break;
			// *-------*
		}
	}
	
	return 0;
}

//implementar la funcion insertar elementos en la lista
void insertar() {
	Nodo* nuevo = new(Nodo);
	cout << " Ingrese el dato que contendra el nuevo Nodo: ";
	cin >> nuevo->dato;
	
	if(listaUNO==NULL){
		listaUNO = nuevo;
		listaUNO->adelante = NULL;
		listaUNO->atras = NULL;
		listaDOS = listaUNO;
	}else{
		listaDOS->adelante = nuevo;
		nuevo->adelante = NULL;
		nuevo->atras = listaDOS;
		listaDOS = nuevo;
	}
	cout << "\n Nodo Ingresado\n\n";
}
//implementacion de la funcion imprimir
void imprimirPrimeroUltimo() {
	Nodo* actual = new(Nodo);
	actual = listaUNO;
	if(listaUNO!=NULL){
		
		while(actual!=NULL){
			cout << actual->dato; 
			cout << "   ->   ";
			actual = actual->adelante;
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}
//implementacion de la funcion imprimir
void imprimirUltimoPrimero() {
	Nodo* actual = new(Nodo);
	actual = listaDOS;
	if(listaUNO!=NULL){
		
		while(actual!=NULL){
			cout << actual->dato;
			cout << "   ->   ";
			actual = actual->atras;
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}
//implemenctacion de la funcion de buscar
void buscar(int busc) {
	Nodo* actual = new(Nodo);
	actual = listaUNO;
	bool encontrado = false;

	if(listaUNO!=NULL){
		while(actual!=NULL && encontrado!=true){
			if(actual->dato == busc){
				cout << "\n Nodo con el dato ( " << busc << " ) Encontrado\n\n";
				encontrado = true;
			}			
			actual = actual->adelante;
		}		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}
// modificar un dato especifico
void modificar(int busc){
	Nodo* actual = new(Nodo);
	actual = listaUNO;
	bool encontrado = false;

	if(listaUNO!=NULL){
		
		while(actual!=NULL && encontrado!=true){
			
			if(actual->dato == busc){
				cout << "\n Nodo con el dato ( " << busc << " ) Encontrado";
				cout << "\n Ingrese el nuevo dato para este Nodo: ";
				cin >> actual->dato;
				cout << " Nodo Modificado\n\n";
				encontrado = true;
			}
			
			actual = actual->adelante;
		}
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}
//implementacion de la funcion para eliminar
void eliminar(int el_elim) {
	Nodo* actual = new(Nodo);
	actual = listaUNO;
	bool encontrado = false;

	if(listaUNO!=NULL){
		
		while(actual!=NULL && encontrado!=true){
			
			if(actual->dato == el_elim){
				cout << "\n Nodo con el dato ( " << el_elim << " ) Encontrado";
				
				if(actual==listaUNO){
					listaUNO = listaUNO->adelante;
					listaUNO->atras = NULL;
				}else if(actual==listaDOS){
					listaDOS->adelante = NULL;
					listaDOS = listaDOS;
				}else{
					listaDOS->adelante = actual->adelante;
					actual->adelante->atras = listaDOS;
				}
				
				cout << "\n Nodo Eliminado";
				encontrado = true;
			}
			listaDOS = actual;
			actual = actual->adelante;
		}
		
		if(!encontrado){
			cout << "\n Nodo no Encontrado\n\n";
		}
		
	}else{
		cout << "\n La listas se encuentra Vacia\n\n";
	}
}





