#include<iostream>
#include<string.h>
#include<stdlib.h>
#define tam 20
using namespace std;

int prioridad(char simbolo); // funcion para la prioridad

int main() {
    int y = 0, opc;
    
    while (y == 0) {
        int cima = -1, pos = -1, tamexp;
        char pila[tam], epos[tam], epre[tam]; // declaracion de la pila y expresion postfija
        char expinf[tam], simbolo; // expresion infija

        cout << "MENU DE OPCIONES" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "[1] Convertir una expresion de infija a postfija " << endl;
        cout << "[2] Convertir una expresion de infija a prefija " << endl;

        cout << "[3] Convertir una expresion de POSTFIJA a infija" << endl;
        cout << "[4] Convertir una expresion de PREFIJA a infija" << endl;

        cout << "[5] Salir del programa" << endl;
        cout << "--------------------------------------------------------" << endl;
        cin >> opc;
//        system("cls");

        switch (opc) {
            case 1: {
                cout << "Ingrese la notacion infija sin espacios" << endl;
                cin >> expinf;

                cima = -1; // incializamos de nuevo la variable para que no se quede en el ultimo bloque
                tamexp = strlen(expinf);
                for (int i = 0; i < tamexp; i++) {
                    simbolo = expinf[i];
                    if (simbolo == '(') {
                        cima++;
                        pila[cima] = simbolo;
                    } else if (simbolo == ')') {
                        while (pila[cima] != '(') {
                            pos++;
                            epos[pos] = pila[cima];
                            cima--;
                        }
                        cima--;
                    } else if ((simbolo >= 'a' && simbolo <= 'z') || (simbolo >= 'A' && simbolo <= 'Z')) {
                        pos++;
                        epos[pos] = simbolo;
                    } else {
                        while (cima > -1 && (prioridad(simbolo) <= prioridad(pila[cima]))) {
                            pos++;
                            epos[pos] = pila[cima];
                            cima--;
                        }
                        cima++;
                        pila[cima] = simbolo;
                    }
                }
                while (cima > -1) {
                    pos++;
                    epos[pos] = pila[cima];
                    cima--;
                }
                cout << "La expresion postfija es: ";
                for (int i = 0; i <= pos; i++) {
                    cout << epos[i];
                }
                cout << endl;
                break;
            }
            case 2: {
                cout << "Ingrese la notacion infija sin espacios" << endl;
                cin >> expinf;

                cima = -1; // incializamos de nuevo la variable para que no se quede en el ultimo bloque
                tamexp = strlen(expinf);
                for (int i = tamexp - 1; i >= 0; i--) {
                    simbolo = expinf[i];
                    if (simbolo == ')') {
                        cima++;
                        pila[cima] = simbolo;
                    } else if (simbolo == '(') {
                        while (pila[cima] != ')') {
                            pos++;
                            epre[pos] = pila[cima];
                            cima--;
                        }
                        cima--;
                    } else if ((simbolo >= 'a' && simbolo <= 'z') || (simbolo >= 'A' && simbolo <= 'Z')) {
                        pos++;
                        epre[pos] = simbolo;
                    } else {
                        while ((prioridad(simbolo) < prioridad(pila[cima]))) {
                            pos++;
                            epre[pos] = pila[cima];
                            cima--;
                        }
                        cima++;
                        pila[cima] = simbolo;
                    }
                }
                while (cima > -1) {
                    pos++;
                    epre[pos] = pila[cima];
                    cima--;
                }
                cout << "La expresion prefija es: ";
                for (int i = pos; i >= 0; i--) {
                    cout << epre[i];
                }
                cout << endl;
                break;
            }
			// int cima = -1, pos = -1;         =>  auxiliares
			// char pila[tam], epos[tam];       =>  expresion postfija
			// char expinf[tam], simbolo;       =>  expresion infija
            case 3: {
                cout << "Ingrese la notacion postfija sin espacios" << endl;
                cin >> epos;
                cima = -1; // incializamos de nuevo la variable para que no se quede en el ultimo bloque
                tamexp = strlen(epos);
                for (int i = tamexp - 1; i >= 0; i--) {
                    simbolo = epos[i];
                    if((simbolo >= 'a' && simbolo <= 'z') || (simbolo >= 'A' && simbolo <= 'Z')) {
                        pos++;
                        expinf[pos] = simbolo;

						cout<<"--- s1: "<<simbolo<<endl;

                    } else {
                        while (cima > -1 && (prioridad(simbolo) <= prioridad(pila[cima]))) {
                            pos++;
                            epos[pos] = pila[cima];
                            cima--;
                        }
                        cima++;
                        pila[cima] = simbolo;
						cout<<"--- s2: "<<simbolo<<endl;
	                    }
	                }// del ciclo for
	                while (cima > -1) {
	                    pos++;
	                    epos[pos] = pila[cima];
	                    cima--;
	                }
				    cout << "La expresion convertida a notacion INFIJA es: ";
	                for (int i = pos; i >= 0; i--) {
	                    cout << expinf[i];
	                }
	                cout << endl;
            }
            break;
			// int cima = -1, pos = -1;         =>  auxiliares
			// char pila[tam], epre[tam];       =>  expresion postfija
			// char expinf[tam], simbolo;       =>  expresion infija
		case 4: {
		    cout << "Ingrese la notacion prefija sin espacios" << endl;
		    cin >> epre;

		    cima = -1; // inicializamos de nuevo la variable para que no se quede en el último bloque
		    tamexp = strlen(epre);
		    for (int i = tamexp - 1; i >= 0; i--) {
		        simbolo = epre[i];
		        if ((simbolo >= 'a' && simbolo <= 'z') || (simbolo >= 'A' && simbolo <= 'Z')) {
		            // Si es un operando, colocarlo en la pila
		            pos++;
		            pila[pos] = simbolo;
		        } else {
		            // Si es un operador, tomar los dos últimos operandos de la pila y formar la expresión
		            string operand1(1, pila[pos]);
		            pos--;
		            string operand2(1, pila[pos]);
		            pos--;
		            
		            // Formar la expresión infija y colocarla en la pila
		            string nuevaExpresion = operand1 + simbolo + operand2;
		            for (int j = nuevaExpresion.length() - 1; j >= 0; j--) {
		                pos++;
		                pila[pos] = nuevaExpresion[j];
		            }
		        }
		    }

		    // La expresión infija estará en la pila
		    cout << "La expresion convertida a notacion INFIJA es: ";
		    for (int i = 0; i <= pos; i++) {
		        cout << pila[i];
		    }
		    cout << endl;
		}
		break;
						

			//---------------------------
            case 5: {
                cout << "Gracias por usar este programa" << endl;
                y = 1;
            }
            break;
			//---------------------------
            default:
                cout << "Error" << endl;
            break;
 
        }
    }

    return 0;
}

int prioridad(char simbolo) {
    int priori; // variable de retorno
    switch (simbolo) {
        case '^': {
            priori = 3;
            break;
        }
        case '/': {
            priori = 2;
            break;
        }
        case '*': {
            priori = 2;
            break;
        }
        case '-': {
            priori = 1;
            break;
        }
        case '+': {
            priori = 1;
            break;
        }
        case ')': {
            priori = 0;
            break;
        }
        case '(': {
            priori = 0;
            break;
        }
        default: {
            priori = -1; // Asigna un valor por defecto en caso de símbolo no reconocido
            break;
        }
    }
    return priori;
}

