#include <iostream>
#include <cstdlib>
using namespace std;

struct Nodo {
    int dato;
    Nodo *HijoIzquierdo;
    Nodo *HijoDerecho;
};

void EnOrden(Nodo *aux, int nivel);

Nodo *AgregarNodo(int dato) {
    Nodo *Nodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    Nodo->dato = dato;
    Nodo->HijoIzquierdo = NULL;
    Nodo->HijoDerecho = NULL;
    return (Nodo);
}

int main() {
    Nodo *raiz = AgregarNodo(1);
	// --- nivel uno
    raiz->HijoIzquierdo = AgregarNodo(2);
    raiz->HijoDerecho = AgregarNodo(3);
	// --- nivel dos
    raiz->HijoIzquierdo->HijoDerecho = AgregarNodo(4);
    raiz->HijoIzquierdo->HijoIzquierdo = AgregarNodo(4);
	// --- nivel tres
    raiz->HijoDerecho->HijoIzquierdo = AgregarNodo(5);
    raiz->HijoDerecho->HijoDerecho = AgregarNodo(5);
	// --- nivel tres


    raiz->HijoIzquierdo->HijoIzquierdo->HijoDerecho = AgregarNodo(11);
    raiz->HijoIzquierdo->HijoIzquierdo->HijoIzquierdo = AgregarNodo(11);
	// --- nivel cuatro
    raiz->HijoDerecho->HijoDerecho->HijoIzquierdo = AgregarNodo(12);
    raiz->HijoDerecho->HijoDerecho->HijoDerecho = AgregarNodo(12);
	// --- nivel cuatro
	// ------------ fin del arbol ------------

    cout << "En orden:" << endl;
    EnOrden(raiz, 0);

    return 0;
}


void EnOrden(Nodo *aux, int nivel) {
    if (aux != NULL) {
        EnOrden(aux->HijoIzquierdo, nivel + 1);
        cout << "\t";
        for (int i = 0; i < nivel; ++i) {
            cout << "  "; // Agrega espacios para la indentación según la profundidad
        }
        cout << aux->dato << endl;
        EnOrden(aux->HijoDerecho, nivel + 1);
    }
}


