#include<iostream>
#include<string.h>
#include<stdlib.h>
#define tam 20
using namespace std;

int prioridad(char simbolo);

int main() {
    int cima = -1, pos = -1, tamexp;
    char pila[tam], epre[tam];
    char expinf[tam], simbolo;

    cout << "Ingrese la notacion infija sin espacios" << endl;
    cin >> expinf;

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

    return 0;
}

int prioridad(char simbolo) {
    int priori;
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
            priori = -1;
            break;
        }
    }
    return priori;
}

