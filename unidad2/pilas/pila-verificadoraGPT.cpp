#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define K 4
#define max 70


const char auxUno[1] = {'('};
const char auxDos[1] = {')'};
int top = -1;
char pila[K] = {};


char parentesisIzquierdo(char caracter);
char parentesisDerecho(char caracter);
void push(char caracter);
void pop();
void mostrar();


int main() {
    char fraseIngresada[max] = {};
    int opcion = 100;

    cout << "--- TRABAJANDO CON PILAS ---" << endl;

    while (1) {
        cout << "1. Verificar frase" << endl;
        cout << "2. Mostrar pila" << endl;
        cout << "3. Salir" << endl;
        // ==========================
        cout << "Digite la opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cin.ignore();
                cout << "Escriba una linea de codigo: ";
                cin.getline(fraseIngresada, max);
				// ----------------------------------------------------------------------------------
				for (int i = 0; i < strlen(fraseIngresada); i++) {
                    if (parentesisIzquierdo(fraseIngresada[i]) != '\0') {
                        push(fraseIngresada[i]);
                    } else if (parentesisDerecho(fraseIngresada[i]) != '\0') {
                        if (top == -1 || pila[top] != auxUno[0]) {
                            cout << "ERROR: Parentesis derecho sin parentesis izquierdo correspondiente" << endl;
                        } else {
                            pop();
                        }
                    }
                }
				// ----------------------------------------------------------------------------------
            }
                break;

            case 2:
                mostrar();
                break;

            case 3:
                exit(0);

            default:
                cout << endl << "Opcion no valida" << endl;
        }
    }
}


char parentesisIzquierdo(char caracter) {
    for (int i = 0; i < 2; i++) {
        if (caracter == auxUno[i]) {
            return auxUno[i];
        }
    }
    return '\0'; // Caracter no es un paréntesis izquierdo
}


char parentesisDerecho(char caracter) {
    for (int i = 0; i < 2; i++) {
        if (caracter == auxDos[i]) {
            return auxDos[i];
        }
    }
    return '\0'; // Caracter no es un paréntesis derecho
}


void push(char caracter) {
    if (top == K - 1) {
        cout << "La pila esta vacia" << endl;
    } else {
        cout << endl << "--- Parentesis colocado: " << caracter << " ---" << endl << endl;
        top += 1;
        pila[top] = caracter;
    }
}

void pop() {
	if(top == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<"Elemento eliminado: "<<pila[top]<<endl;
		top-=1;
	}
}
void mostrar() {
	if(top == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<"En la pila:"<<endl;
		// ==========================
		for(int i=top; i>=0; --i) {
			cout<<i<<": ";
			cout<<pila[i]<<endl;
		}
		// ==========================
		cout<<endl;
	}
}




