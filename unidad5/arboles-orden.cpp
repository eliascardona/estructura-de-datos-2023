#include <iostream>
#include <cstdlib>
using namespace std;

struct Nodo {
    int dato;
    Nodo *HijoIzquierdo;
    Nodo *HijoDerecho;
};

void menu();
void EnOrden(Nodo *aux, int nivel);

Nodo *AgregarNodo(int dato) {
    Nodo *Nodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    Nodo->dato = dato;
    Nodo->HijoIzquierdo = NULL;
    Nodo->HijoDerecho = NULL;
    return (Nodo);
}


/*
    raiz->HijoIzquierdo = AgregarNodo(2);
    raiz->HijoDerecho = AgregarNodo(3);

    raiz->HijoIzquierdo->HijoDerecho = AgregarNodo(4);
    raiz->HijoIzquierdo->HijoIzquierdo = AgregarNodo(4);

    raiz->HijoDerecho->HijoIzquierdo = AgregarNodo(5);
    raiz->HijoDerecho->HijoDerecho = AgregarNodo(5);


    raiz->HijoIzquierdo->HijoIzquierdo->HijoDerecho = AgregarNodo(11);
    raiz->HijoIzquierdo->HijoIzquierdo->HijoIzquierdo = AgregarNodo(11);

    raiz->HijoDerecho->HijoDerecho->HijoIzquierdo = AgregarNodo(12);
    raiz->HijoDerecho->HijoDerecho->HijoDerecho = AgregarNodo(12);
	------------ fin del arbol ------------
*/


int main() {
	cout<<"*******  ARBOLES BINARIOS EN C++  *******"<<endl<<endl;

	cout<<"Asigne el valor de un numero entero a la raiz de su nodo: ";
    Nodo *raiz = AgregarNodo(1);



	int op = 100;
	while(1) {
		switch(op) {
			case 1: {
				int valorRaiz=0;
				cin>>valorRaiz;
				cout<<"\n";
			}
			break;
			case 2: {
				int datop=0;
				cin>>datop;
				cout<<"\n";
			}
			break;
			case 3: {
				int datop=0;
				cin>>datop;
				cout<<"\n";
			}
			break;
			case 4: {
				int elim=0;
				cin>>elim;
				cout<<"\n";
			}
			break;
			case 5: {
				EnOrden(raiz, 0);
				cout<<"\n";
			}
			break;
			// --------
			default:
				cout<<"Opcion no valida\n";
			break;
		}
	}


    cout << "En orden:" << endl;
    EnOrden(raiz, 0);

    return 0;
}


void EnOrden(Nodo *aux, int nivel) {
    if(aux != NULL) {
        EnOrden(aux->HijoIzquierdo, nivel+1);
        cout<<"\t";
        for(int i=0; i<nivel; i++) {
            cout<<"  "; // Agrega espacios para la indentación según la profundidad
        }
        cout<<  aux->dato  <<endl;
        EnOrden(aux->HijoDerecho, nivel+1);
    }
}



void opciones() {
	cout<<"Op. 1 - Asignar un valor a la raiz \n";
	cout<<"Op. 2 - Ingresar dato derecho \n";
	cout<<"Op. 3 - Ingresar dato izquierdo \n";
	cout<<"Op. 4 - Eliminar dato \n";
	cout<<"Op. 5 - Realizar un recorrido del arbol de tipo 'en orden' \n";
	cout<<"Digite una opcion: ";
}


















