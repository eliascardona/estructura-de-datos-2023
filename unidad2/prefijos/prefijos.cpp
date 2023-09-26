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
#define K 30


int cima = -1;
int pila[K] = {};


void push(int el);
void pop();
int evaluarPrefijo(char *pip);


int main() {
	char expresion[] = "+5*42";
	// ---------------------------------------
	int resultado = evaluarPrefijo(expresion);
	cout<<"Resultado: "<<resultado<<endl<<endl;
	// ---------------------------------------
	return 0;
}


void push(int el) {
	if(cima == K-1) {
		cout<<"Pila llena"<<endl;
	} else {
		// ==========================
		cima+=1;
		pila[cima] = el;
		cout<<endl<<"pushed el --- "<<el<<" ---"<<endl;
		// ==========================
	}
}


void pop() {
	if(cima == -1)
		cout<<"Pila vacia"<<endl;
	else {
		cout<<endl<<"popped el --- "<<pila[cima]<<" ---"<<endl;
		cima-=1;
	}
}


int evaluarPrefijo(char *pip) {
	int b = strlen(pip);

	for(int i=b-1; i>=0; i--) {
		if(pip[i] >= '0' && pip[i] <= '9') {
			// Si es un operando, convertir el carácter a entero y apilarlo
			push(pip[i]-'0');
			cout<<endl<<"--- numero insertado ---"<<endl;
		} else {
			// Si es un operador, desapilar dos operandos, realizar la operación y apilar el resultado
			int operando1 = pila[cima--];
			int operando2 = pila[cima--];

			switch(pip[i]) {
				case '+': {
		 			int res1 = operando1 + operando2;
					push(res1);
				}
	 			break;
				//-------------------------------------
	 			case '-': {
		 			int res2 = operando1 - operando2;
					push(res2);
				}
	 			break;
				//-------------------------------------
	 			case '*':{
		 			int res3 = operando1 * operando2;
					push(res3);
				}
	 			break;
				//-------------------------------------
	 			case '/': {
		 			int res4 = operando1 / operando2;
					push(res4);
				}
	 			break;
				//-------------------------------------
		 		default:
			 		cout<<"Operador no válido: "<<pip[i]<<endl;
				//-------------------------------------
			}
		}
	}
	// -------------------------------------
	return pila[cima];
}




