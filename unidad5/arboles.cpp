#include <iostream>
#include <cstdlib>
using namespace std;

struct Nodo {
    int dato;
    Nodo *HijoIzquierdo;
    Nodo *HijoDerecho;
	Nodo(int valor) : dato(valor), HijoIzquierdo(NULL), HijoDerecho(NULL) {}
};

void menu();
void EnOrden(Nodo *aux, int nivel);

Nodo *AgregarNodo(Nodo *raizp, int valor) {

	if(raizp == NULL) {
		return new Nodo(valor);
	}

	if(valor < raizp->dato) {
		raizp->HijoIzquierdo = AgregarNodo(raizp->HijoIzquierdo, valor);

	} else if(valor > raiz->dato) {
		raizp->HijoDerecho = AgregarNodo(raizp->HijoDerecho, valor);
	}

    return raizp;
}


int main() {
	cout<<"*******  ARBOLES BINARIOS EN C++  *******"<<endl<<endl;
	Nodo *raiz = NULL;
	int op = 1;
	int valR = 0;
	cout<<"Asigne un valor a la RAIZ: ";
	cin>>valR;

	raiz = AgregarNodo(raiz, valR);
	cout<<"\n\n---- Valor para RAIZ asignado con exito ----\n\n";


	while(1) {
		menu();
		cin>>op;

		switch(op) {
			case 1: {
				int datop = 0;
				cout<<"Anade un hijo al lado izquierdo: ";
				cin>>datop;
				raiz->HijoIzquierdo = AgregarNodo(raiz, datop);
			}
			break;
			case 2: {
				int datod = 0;
				cout<<"Anade un hijo al lado derecho: ";
				cin>>datod;
				raiz->HijoDerecho = AgregarNodo(datod);
			}
			break;
			case 3: {
				cout<<"22\n";
			}
			break;
			case 4: {
				EnOrden(raiz, 0);
			}
			break;
			case 10: {
				exit(0);
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



void menu() {
	cout<<"1. Ingresar hijo derecho \n";
	cout<<"2. Ingresar hijo izquierdo \n";

	cout<<"3. Eliminar dato \n";
	cout<<"4. recorrido en orden \n";
	cout<<"5. recorrido preorden \n";
	cout<<"6. recorrido posorden \n";

	cout<<"10. Salir \n";
	cout<<endl<< "-> DIGITE UNA OPCION: ";
}


















