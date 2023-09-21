// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Programa que implementa el estandar de desarrollo de un sistema según lo pactado en ISO 12207-1


// importacion de las librerias
#include <iostream>
#include <cstring>

using namespace std;

bool theBooler(char stepp[], bool &booler);

int main() {
	// Declaración de las variables
	char step1[2], step2[2], step3[2], step4[2], step5[2], step6[2];
	bool requerimientosCompletos = false;
	bool disenoCompletado = false;
	bool implementacionCompletada = false;
	bool pruebasExitosas = false;
	// Para mi siempre es importante mostrar al usuario el objetivo del programa
	cout<<"EVALUA EL CICLO DE VIDA DE TU SISTEMA INFORMATICO"<<endl<<endl;


	cout<<"Ya tiene los requerimientos completos?"<<"\ty/n : ";
	cin>>step1;

	cout<<endl;
	cout<<step1<<endl;	

	
	if(strcmp(step1, "y") == 0 || strcmp(step1, "Y") == 0) {
		requerimientosCompletos = true;
		// Etapa de diseño
		cout<<"Ya esta completa la fase de diseno?"<<"\ty/n"<<endl;
		cin>>step2;

		if(theBooler(step2, disenoCompletado)) {
			cout<<"El equipo tecnico ha realizado el diseno del sistema exitosamente."<<endl;
		}

		cin.ignore();
		// ------------------------------



		// Etapa de pruebas
		cout<<"Ya se implemento el sistema en un entorno de produccion?"<<"\ty/n"<<endl;
		cin>>step3;

		if(theBooler(step3, implementacionCompletada)) {
			cout<<"El sistema se ha implementado exitosamente."<<endl;
		}

		cin.ignore();
		// ------------------------------



		// Etapa de pruebas
		cout<<"Ya realizo el debido testing?"<<"\ty/n"<<endl;
		cin>>step4;

		if(theBooler(step4, pruebasExitosas)) {
			cout<<"El producto ha pasado todas las etapas y pruebas exitosamente."<<endl;
		}

		cin.ignore();
		// ------------------------------


	} else if(strcmp(step1, "n") == 0 || strcmp(step1, "N") == 0) {
		requerimientosCompletos = false;
	} else {
		cout<<"Opcion no valida"<<endl;
	}


	if(requerimientosCompletos == false) {
		cout<<"Sin requerimientos proporcionados, no podemos comenzar con el desarrollo del sistema."<<endl;
	} else {
		cout<<"El sistema de desarrollo con los requerimientos inicialmente solicitados."<<endl;
	}


	cout<<endl<<endl;


	return 0;
}

bool theBooler(char stepp[], bool &booler) {
	if(strcmp(stepp, "y") == 0 || strcmp(stepp, "Y") == 0)
		booler = true;
	else if(strcmp(stepp, "n") == 0 || strcmp(stepp, "N") == 0)
		booler = false;
	else {
		booler = false;
		cout << endl << "Opcion no valida" << endl;
	}

	// ---------------
    return booler;
}




