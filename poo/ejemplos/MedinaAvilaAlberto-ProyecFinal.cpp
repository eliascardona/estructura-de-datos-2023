// Alberto Medina Ávila
// Fecha: 05 de diciembre del 2023
// Proyecto final de la asignatura Programación Orientada a Objetos
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;
#define reg 3

int contador = 0;
struct Registro {
    int numDeMes;
	double tasa;
};
Registro TasasPorMes[reg];

void capturarMes(Registro arreglo[], int itr) {
	cout<<"\n===============\n";

	cout<<"[Registro #"<<itr<<"]"<<endl;
	cout<<"Digite el num. del mes en se encuentra: ";
	cin>>arreglo[itr].numDeMes;
}
void formato(Registro arregloB[]);
void leerTXT();


class Registrador {
	public:
		void operator()(float capital, float porc, float tempo) {
			contador++;
			double simpleI = capital*porc*tempo;

			cout<<"*** Interes asociado a n mes ***\n";
			TasasPorMes[contador-1].tasa = simpleI;
		}
};

void menu() {
	cout<< " ---------------- MENU -------------- "<<endl<<endl;
	cout<< "1. Registrar datos" <<endl;
	cout<< "2. Leer table.txt" <<endl;
	cout<< "3. Salir " <<endl;
	cout<<endl<< "opcion = ";
}
/*
	Para mi programa, desarrollé
	un menu en la funcion main(), donde 
	solamente usa un switch, pedimos los datos
	y luego usamos funciones.
*/
int main() {
	float cap, tasa, tiempo;
	Registrador InteresSimple;

	cout<<"--- Sistema de manejo de control de tasas de interes ---"<<endl;
	cout<<"*Nuestro sistema solo puede calcular por un trimestre (3 registros)*"<<endl<<endl;

	int opcion;
	while(1) {
		system("pause");
		system("cls");
		menu();
		cin>>opcion;

		switch(opcion) {
		case 1: {
			for(int i=0; i<reg; i++) {
				capturarMes(TasasPorMes, contador);
				cout<<"Ingrese el capital: ";
				cin>>cap;
				cout<<"Tasa de interes (valores entre 0-1): ";
				cin>>tasa;
				cout<<"Cant. de meses que se tardara en pagar: ";
				cin>>tiempo;
				cout<<"===============\n";
				InteresSimple(cap, tasa, tiempo);
			}
			formato(TasasPorMes);
		}
		break;

		case 2:
			leerTXT();
		break;

		case 3:
			exit(0);
		break;
		}
	}


	cout<<endl<<endl;
	return 0;
}



void formato(Registro arregloB[]) {
    std::ofstream archivo("tabla.txt");

    if(archivo.is_open()) {
        archivo << "----------------------------------------------------------------\n";
        archivo << "\t Num. de mes \t\t|\t Interes a pagar \t|\n";
        
        for (int j = 0; j < reg; j++) {
            archivo << "\t\t" << arregloB[j].numDeMes << "\t\t|\t\t" << arregloB[j].tasa << "\t\t|\n";
        }

        archivo << "----------------------------------------------------------------\n";
        archivo.close();

        std::cout << "Tabla guardada en tabla.txt" << std::endl;
    } else {
        std::cerr << "No se pudo abrir el archivo para escritura." << std::endl;
    }





}



void leerTXT() {
    std::ifstream archivo("tabla.txt");

    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }

        archivo.close();
    } else {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
    }
}









