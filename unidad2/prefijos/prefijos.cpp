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

int evaluarPrefijo(char *expresion);


int main() {
	char expresion[] = "+5*42";
	int resultado = evaluarPrefijo(expresion);

	// ---------------------------------
	cout<<"Resultado: "<<resultado<<endl;




	cout<<endl<<endl;
	return 0;
}




int evaluarPrefijo(char *expresion) {
	int pila[30];// Pila de gran tamaño para almacenar operandos
	int top = -1;// Puntero de la parte superior de la pila

	int longitud = strlen(expresion);

	for(int i = longitud - 1; i >= 0; i--) {
		if(expresion[i] >= '0' && expresion[i] <= '9') {
			// Si es un operando, convertir el carácter a entero y apilarlo
			pila[++top] = expresion[i] - '0';
		} else {
			// Si es un operador, desapilar dos operandos, realizar la operación y apilar el resultado
			int operand1 = pila[top--];
			int operand2 = pila[top--];

			switch(expresion[i]) {
				case '+':
		 			pila[++top] = operand1 + operand2;
	 			break;
				//-------------------------------------
	 			case '-':
		 			pila[++top] = operand1 - operand2;
	 			break;
				//-------------------------------------
	 			case '*':
		 			pila[++top] = operand1 * operand2;
	 			break;
				//-------------------------------------
	 			case '/':
		 			pila[++top] = operand1 / operand2;
	 			break;
				//-------------------------------------
		 		default:
			 		cout<<"Operador no válido: "<<expresion[i]<<endl;
				//-------------------------------------
			}
		}
	}
	return pila[top]; // El resultado final está en la parte superior de la pila
}




