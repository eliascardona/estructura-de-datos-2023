// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 25-OCT-2023
// EXAMEN PARCIAL 2
// Implementar una estructura de tipo cola circular
#include <iostream>
#include <cstdlib>
#include <string.h>
//#include <cstring>
using namespace std;
#define K 2

// intente crear mi arreglo
// con el siguiente struct.
//
//struct Cancion {
//	int byDefault;
//	string nombre;
//};



int FINAL = -1;
int FRENTE = -1;

//void llenado(char *song);

void llenado(string songs[]);
void ultima(string songs[]);
void siguiente();
void anterior();

void aniadir_cancion(string songs[]);
void mostrar_cola(string songs[]);
void pintar();


void opciones() {
	cout<<"1. Mostrar ultima cancion"<<endl;
	cout<<"2. Siguiente"<<endl;
	cout<<"3. Anterior"<<endl;
	cout<<"4. Aniadir una"<<endl;
	cout<<"5. Mostrar todas"<<endl;
	cout<<"6. Salir"<<endl;
};



// ----------------------------------------------------------------------------
//
//
//	* hice el intento de ingresar strings, pero ese fue mi uncio problema.
//	espero el resto de la logica este correcta.
//	* intente realizarlo con string, structs o con char *variable.
//
//
// ----------------------------------------------------------------------------



main() {
	string canciones[K];
	int opcion=100;
	cout<<"------ Registra tus canciones favoritas ------"<<endl<<endl;

//	char *bb="c";
//	llenado(bb);

	llenado(canciones);

	while(1) {
		opciones();
		cin>>opcion;

		switch(opcion) {
			case 1: {
				ultima(canciones);
			}
			break;

			case 2: {
				siguiente();
			}
			break;

			case 3: {
				anterior();
			}
			break;

			case 4: {
				aniadir_cancion(canciones);
			}
			break;

			case 5: {
				mostrar_cola(canciones);
				pintar();
			}
			break;

			case 6: {
				exit(0);
			}

            default:
	            cout<<"Opcion no valida"<<endl;
        } 
    } 
}


void llenado(char *song) {
	char src[40] = "lala";
	//----------------------------------------
	strcpy(song, src);
	cout<<"------------"<<src;
	//----------------------------------------
};


void ultima(string songs[]) {
	if(FRENTE==0 && FINAL==K-1 || FINAL+1==FRENTE) {
		cout<<"COLA LLENA. HORA DE DAR VUELTA"<<endl<<endl;

	} else {
		if(FRENTE == -1 && FINAL == -1) {
			return;
		} 
		else if(FINAL == K-1) {
			cout<<songs[FINAL];
		}
	}
}


void siguiente() {
		if(FRENTE == -1 && FINAL == -1) {
			FRENTE++;
			cout<<songs[FINAL];
		} 
		else if(FINAL == K-1) {
			FINAL = 0;
			cout<<"llegaste a la ultima cancion";
			cout<<songs[FINAL];
		}

	
}


void anterior() {
	if(FRENTE==0 && FINAL==K-1 || FINAL+1==FRENTE) {

		cout<<"LISTA LLENA. HORA DE DAR VUELTA"<<endl<<endl;

	} else {
		if(FRENTE == -1 && FINAL == -1) {
			FINAL++;
			cout<<"estas en al primera cancion";
			cout<<songs[FRENTE];
		} 
		else if(FINAL == K-1) {
			FINAL = 0;
		}

	}
}


void mostrar_cola(string songs[]) {
	cout<<"--- COLA DE CANCIONES ---"<<endl;
	cout<<endl<<"===================="<<endl;
	cout<<"[";

	if(FRENTE == -1) {
		cout<<endl<<"--- cola vacia ---"<<endl;
	} else {
		if(FINAL < FRENTE) {
			for(int i=0; i<=FINAL; i++) {
				cout<<songs[i]<<",  ";
			}
			for(int i=FRENTE; i <= K - 1; i++) {
				cout<<songs[i]<<",  ";
			}
		}
		else {
			for(int i=FRENTE; i<=FINAL; i++)
			cout<<songs[i]<<",  ";
		// ==========================
		}
	}
	// ------
	cout<<"]"<<endl;
	cout<<"===================="<<endl<<endl;
}


void aniadir_cancion(string songs[]) {
	string nueva;
	if(FRENTE==0 && FINAL==K-1 || FINAL+1==FRENTE) {

		cout<<"COLA LLENA. HORA DE DAR VUELTA"<<endl<<endl;

	} else {
		cout<<"Coloque una cancion en su COLA: ";

		//getline(cin, nueva);
		//cin.ignore();

		// -----------
		if(FRENTE == -1 && FINAL == -1) {
		  // ==========================
		  // PRIMER ELEMENTO 
			FRENTE++;
			FINAL++;
		  // ==========================
		} 
		else if(FINAL == K-1) {
			FINAL = 0;
		}
		else {
			FINAL++;
		}
// -------------------------------------------------------------		

//		*hice el intento de ingresar strings, pero ese fue mi uncio problema.
//		espero el resto de la logica este correcta


		//strcpy("nueva", songs[FINAL]);
		

// -------------------------------------------------------------		
		

	}
}


void pintar() {
	cout<<endl<<"===================="<<endl;
	cout<<"FRENTE = "<<FRENTE<<endl;
	cout<<"FINAL = "<<FINAL<<endl;
	cout<<endl<<"===================="<<endl;
}




