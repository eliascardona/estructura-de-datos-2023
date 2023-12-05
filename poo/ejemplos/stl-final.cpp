// Elias Eduardo Cardona Rodríguez
// Emilio Jesús Marentes Vejar
// Fabián Rodríguez Herrera
// Licenciatura en Informática 3-A
// 28-NOV-2023
// ENTREGABLE DEL PROYECTO FINAL
/*
 *  Objetivo:
 *  Implementar la lógica del manejo de colas
 *  utilizando la Librería Estandar de Plantillas
 *  de C++ (STL por sus siglas en inglés).
 *
 *  Utilizamos los conocidos en inglés como "Functors"
 *  o Function Objects, que permiten diseñar plantillas
 *  reutilizables con procedimientos en su interior.
 *
 */


#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

#define MAX 10
int elementos[MAX];
int frente = 0, finalf = 0;


class colocadorCOLA {
public:
	/*
		Dentro del STL de C++,
		existen los conocidos como
		Objetos funcion, en donde se utiliza
		un procedimiento con nombre reservado
		"operator", el cual se indica con el tipo
		de retorno void y en su segundo paréntesis
		recibe los parámetros.
	*/
	void operator()(int valor) {
		if((finalf + 1) % MAX == frente) {
			cout << "Cola llena";
		} else {
			finalf = (finalf + 1) % MAX;
			elementos[finalf] = valor;
			cout << "Se encolo el elemento " << valor << endl;
		}
	}
};


class elimCOLA {
	/*
		En la estructura de datos lineal
		"cola", no es necesario indicarle a
		nuestras funciones por medio de parámetros
		qué elemento vamos a eliminar. En la lógica
		de colas, el primero que entra es el primero
		que sale.
	*/
public:
    void operator()() {
        if (frente == finalf) {
            cout << "Cola vacia" << endl;
        } else {
            frente = (frente + 1) % MAX;
            cout << "Se desencola el elemento " << elementos[frente] << endl;
        }
    }
};


class mostrarCOLA {
	/*
		En este caso particular,
		no es necesario parar todo el
		arreglo como parámetro, dado que
		el arreglo es una variabale global.
	*/
public:
    void operator()() {
        if (frente == finalf) {
            cout << "Cola vacia" << endl;
        } else {
            int i = (frente + 1) % MAX;
            while (i != (finalf + 1) % MAX) {
                cout << elementos[i] << " ";
                i = (i + 1) % MAX;
            }
            cout << endl;
        }
    }
};


class Archivos {
	/*
		Para nuestro programa, diseñamos una
		clases encargada de la lectura y escritura
		de archivos.
	*/
public:
	void guardarCola();
	void leerCola();
};


void Archivos::guardarCola() {
	/*
		Podemos observar como fstream
		utiliza POO para el manejo de sus
		distintas funcionalidades.
		En este caso en concreto, la clase
		"ofstream" se almacena en un objeto
		de nombre archivo y cuyo parámetro
		enviado al constructor es el nombre
		del archivo (de tipo string).
	*/
	ofstream archivo("cola.txt");
	if(archivo.is_open()) {
		int i = (frente + 1) % MAX;

		while(i != (finalf + 1) % MAX) {
			archivo << elementos[i] << " ";
			i = (i + 1) % MAX;
		}
		archivo << endl;
		archivo.close();

		cout << "Cola guardada en cola.txt" << endl;
		} else {
			cout << "No se pudo abrir el archivo para escritura." << endl;
		}
}


void Archivos::leerCola() {
	ifstream archivo2("cola.txt");
	if(archivo2.is_open()) {
		cout<<endl<< "/*----------- LEIDO DESDE EL ARCHIVO DE TEXTO ---------*/"<<endl<<endl;
		string linea;

		while (getline(archivo2, linea)) {
			cout << linea << endl;
		}
		archivo2.close();

	} else {
		cout << "No se pudo abrir el archivo para lectura." << endl;
	}
}


void opciones() {
	cout<< " ---------------- MENU -------------- "<<endl<<endl;
	cout<< "1. Insertar elemento en la cola" <<endl;
	cout<< "2. Eliminar elemento de la cola" <<endl;
	cout<< "3. Guardar en archivo de texto" <<endl;
	cout<< "4. Leer archivo de texto" <<endl;
	cout<< "10. Salir del programa" <<endl;
	cout<<endl<< "-> DIGITE UNA OPCION: ";
}


int main() {
/*
	Contamos con un programa main
	bastante legible, puesto que
	previamente ya habíamos desarollado todas
	nuestras funciones que contienen nuestra
	lógica de negocio.

	Como se observa, en nuestra función main
	sólo tenemos un pequeño menu diseñado con 
	while y switch, en donde pedimos los datos
	al usuario y mandamos llamar a nuestras
	"Functions Objects".
*/
	colocadorCOLA encolador;
	mostrarCOLA mostrar;
	elimCOLA elim;
	Archivos archivero;
	int op=100;

	while(1) {
		system("pause");
		system("cls");
		opciones();
		cin>>op;

		switch(op) {
			case 1: {
				int val=0;
				cout<<endl<<"Elemento a insertar: ";
				cin>>val;

				encolador(val);
			}
			break;
			/*-----------------*/
			case 2: {
				elim();
			}
			break;
			/*-----------------*/
			case 3: {
				archivero.guardarCola();
			}
			break;
			/*-----------------*/
			case 4: {
				archivero.leerCola();
			}
			break;
			/*-----------------*/
			case 10: {
			   	cout<< "Saliendo del programa..." <<endl;
				exit(0);
			}
			break;
			/*-----------------*/
			default:
			   	cout<< "Opcion no valida" <<endl;
		}
	}
	return 0;
}




