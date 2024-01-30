// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 06-DIC-2023
// UNIDAD 5
// Implementación de árboles binarios.


#include <iostream>

using namespace std;

struct NodoArbol {
    int dato;
    NodoArbol* izquierda;
    NodoArbol* derecha;

    NodoArbol(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

NodoArbol* insertar(NodoArbol* raiz, int valor, char lado) {
    if (raiz == nullptr) {
        return new NodoArbol(valor);
    }

    if (lado == 'I') {
        raiz->izquierda = insertar(raiz->izquierda, valor, lado);
    } else if (lado == 'D') {
        raiz->derecha = insertar(raiz->derecha, valor, lado);
    }

    return raiz;
}

void recorridoEnOrden(NodoArbol* raiz) {
    if (raiz != nullptr) {
        recorridoEnOrden(raiz->izquierda);
        cout << raiz->dato << " ";
        recorridoEnOrden(raiz->derecha);
    }
}

void recorridoPreOrden(NodoArbol* raiz) {
    if (raiz != nullptr) {
        cout << raiz->dato << " ";
        recorridoPreOrden(raiz->izquierda);
        recorridoPreOrden(raiz->derecha);
    }
}

void recorridoPosOrden(NodoArbol* raiz) {
    if (raiz != nullptr) {
        recorridoPosOrden(raiz->izquierda);
        recorridoPosOrden(raiz->derecha);
        cout << raiz->dato << " ";
    }
}

NodoArbol* encontrarMasIzquierdo(NodoArbol* nodo) {
    while (nodo != nullptr && nodo->izquierda != nullptr) {
        nodo = nodo->izquierda;
    }
    return nodo;
}

NodoArbol* eliminarNodo(NodoArbol* raiz, int clave) {
    if (raiz == nullptr) {
        return raiz;
    }

    if (clave < raiz->dato) {
        raiz->izquierda = eliminarNodo(raiz->izquierda, clave);
    } else if (clave > raiz->dato) {
        raiz->derecha = eliminarNodo(raiz->derecha, clave);
    } else {
        // Caso 1: Sin hijos o un hijo
        if (raiz->izquierda == nullptr) {
            NodoArbol* temp = raiz->derecha;
            delete raiz;
            return temp;
        } else if (raiz->derecha == nullptr) {
            NodoArbol* temp = raiz->izquierda;
            delete raiz;
            return temp;
        }

        // Caso 2: Dos hijos
        NodoArbol* temp = encontrarMasIzquierdo(raiz->derecha);
        raiz->dato = temp->dato;
        raiz->derecha = eliminarNodo(raiz->derecha, temp->dato);
    }

    return raiz;
}

int main() {
    NodoArbol* raiz = nullptr;
    int eleccion, valor;

    do {
        cout << "Menu \n";
        cout << "1. Insertar nodo\n";
        cout << "2. Eliminar nodo\n";
        cout << "3. Mostrar arbol (en orden)\n";
        cout << "4. Mostrar arbol (preorden)\n";
        cout << "5. Mostrar arbol (posorden)\n";
        cout << "0. Salir\n";
        cout << "Ingrese su eleccion: ";
        cin >> eleccion;

        switch (eleccion) {
            case 1:
                cout << "Ingrese el valor del nodo: ";
                cin >> valor;
                cout << "Ingrese el lado (I/D): ";
                char lado;
                cin >> lado;
                raiz = insertar(raiz, valor, lado);
                break;

            case 2:
                cout << "Ingrese el valor del nodo a eliminar: ";
                cin >> valor;
                raiz = eliminarNodo(raiz, valor);
                break;

            case 3:
                cout << "Recorrido en orden: ";
                recorridoEnOrden(raiz);
                cout << endl;
                break;

            case 4:
                cout << "Recorrido preorden: ";
                recorridoPreOrden(raiz);
                cout << endl;
                break;

            case 5:
                cout << "Recorrido posorden: ";
                recorridoPosOrden(raiz);
                cout << endl;
                break;

            case 0:
                cout << "Saliendo del programa.\n";
                break;

            default:
                cout << "Opcion no valida. Inténtelo de nuevo.\n";
        }

    } while (eleccion != 0);

    return 0;
}




