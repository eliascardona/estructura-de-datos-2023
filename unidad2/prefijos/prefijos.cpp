// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 20-SEP-2023
//
// Objetivo: Realizar un programa en C++ (sin librerías),
//			 para convertir expresiones aritméticas comunes
//			 en notación infijo-prefijo-postfijo (notación polaca)
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int cima = -1;
void push();
void pop();
int evaluarPrefijo(char *pip);


int main() {
	char expresion[] = "+5*42";
	int resultado = evaluarPrefijo(expresion);

	// ---------------------------------
	cout<<"Resultado: "<<resultado<<endl;




	cout<<endl<<endl;
	return 0;
}


void push() {
	int x=0;
	if(cima == K-1) {
		cout<<"Pila llena"<<endl;
	} else {
		cout<<"Coloque un elemento en la pila: "<<endl;
		cin>>x;
		// ==========================
		cima+=1;
		aux[cima] = x;
		// ==========================
	}
}


void pop() {
	if(cima == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<"Elemento eliminado: "<<aux[cima]<<endl;
		cima-=1;
	}
}


int evaluarPrefijo(char *pip) {
	// dirección del PUNTERO
	cout<<"puntero "<<pip<<"\t"<<"valor "<<*pip<<"\t"<<"variable "<<&pip<<endl<<endl;

	int pila[30];// Pila de gran tamaño para almacenar operandos

	int b = strlen(pip);

	for(int i=b-1; i>=0; i--) {
		if(pip[i] >= '0' && pip[i] <= '9') {
			// Si es un operando, convertir el carácter a entero y apilarlo
			pila[++cima] = pip[i] - '0';
		} else {
			// Si es un operador, desapilar dos operandos, realizar la operación y apilar el resultado
			int operando1 = pila[cima--];
			int operando2 = pila[cima--];

			switch(pip[i]) {
				case '+':
		 			pila[++cima] = operando1 + operando2;
	 			break;
				//-------------------------------------
	 			case '-':
		 			pila[++cima] = operando1 - operando2;
	 			break;
				//-------------------------------------
	 			case '*':
		 			pila[++cima] = operando1 * operando2;
	 			break;
				//-------------------------------------
	 			case '/':
		 			pila[++cima] = operando1 / operando2;
	 			break;
				//-------------------------------------
		 		default:
			 		cout<<"Operador no válido: "<<pip[i]<<endl;
				//-------------------------------------
			}
		}
	}
	cout<<"la cima va en "<<cima<<endl;
	cout<<"puntero "<<pip<<"\t"<<"valor "<<*pip<<"\t"<<"variable "<<&pip<<endl;
	return pila[cima]; // El resultado final está en la parte superior de la pila
}




