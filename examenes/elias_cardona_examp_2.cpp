// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 25-OCT-2023
// EXAMEN PARCIAL 2
// Implementar una estructura de tipo cola circular
#include <iostream>
#include <cstdlib>
#include <cstring>
//#include <cstring>
using namespace std;

#define K 4
#define B 70


int FINAL = -1;
int FRENTE = -1;
char canciones[K][B];

void llenado();
void ultima(char songs[][B]);
void siguiente(char songs[][B]);
void anterior(char songs[][B]);

void mostrar_cola(char songs[][B]);
void pintar();


void enlistar(char elemento[]) {
	if(FRENTE==0 && FINAL==K-1 || FINAL+1==FRENTE) {
		cout<<"LISTA LLENA. HORA DE DAR VUELTA"<<endl<<endl;
	} else {
		if(FRENTE == -1 && FINAL == -1) {
			FRENTE++;
			FINAL++;
		} 
		else if(FINAL == K-1) {
			FINAL = 0;
		}
		else {
			FINAL++;
		}
		strcpy(canciones[FINAL][0], elemento);
	}
}


void opciones() {
	cout<<"1. Mostrar ultima cancion"<<endl;
	cout<<"2. Siguiente"<<endl;
	cout<<"3. Anterior"<<endl;
	cout<<"4. Mostrar todas"<<endl;
	cout<<"10. Salir"<<endl;
};



// ----------------------------------------------------------------------------
//
//	* Hice mi mejor intento en implementarlo, pero mi uncio
//	  problema fue el manejo de cadenas.
//	  Espero el resto de la logica este correcta.
//
// ----------------------------------------------------------------------------



main() {
	int opcion=100;
	cout<<"------ Registra tus canciones favoritas ------"<<endl<<endl;

	llenado();

	while(1) {
		opciones();
		cin>>opcion;

		switch(opcion) {
			case 1: {
				ultima(canciones);
			}
			break;

			case 2: {
				siguiente(canciones);
			}
			break;

			case 3: {
				anterior(canciones);
			}
			break;

			case 4: {
				mostrar_cola(canciones);
				pintar();
			}
			break;

			case 10: {
				exit(0);
			}

            default:
	            cout<<"Opcion no valida"<<endl;
        } 
    } 
}


void llenado(char songs[][B]) {
	/*
	strcpy(songs[0][], c1);
	strcpy(songs[1][], c2);
	strcpy(songs[2][], c3);
	*/
	const char* playlist[K] = {"Yellow - The Beatles", "Rock is life - The Doors", "Shine Diamond - Pink Floid"};

	for(int i=0; i<3; i++) {
		songs[i] = new char[strlen(playlist[i][0]) + 1];
		strcpy(songs[i], playlist[i][0]);

		enlistar(songs[i][0]);
	}
};


void ultima(char songs[][B]) {
	if(FRENTE==0 && FINAL==K-1 || FINAL+1==FRENTE) {
		cout<<"COLA LLENA. HORA DE DAR VUELTA"<<endl<<endl;

	} else {
		if(FRENTE == -1 && FINAL == -1) {
			return;
		} 
		else if(FINAL == K-1) {
			cout<<songs[FINAL][0];
		}
	}
}


void siguiente(char songs[][B]) {
		if(FRENTE == -1 && FINAL == -1) {
			FRENTE++;
			cout<<songs[FINAL];
		} 
		else if(FINAL == K-1) {
			FINAL = 0;
			cout<<"llegaste a la ultima cancion";
			cout<<songs[FINAL][0];
		}

	
}


void anterior(char songs[][B]) {
	if(FRENTE==0 && FINAL==K-1 || FINAL+1==FRENTE) {

		cout<<"LISTA LLENA. HORA DE DAR VUELTA"<<endl<<endl;

	} else {
		if(FRENTE == -1 && FINAL == -1) {
			FINAL++;
			cout<<"estas en al primera cancion";
			cout<<songs[FRENTE][0];
		} 
		else if(FINAL == K-1) {
			FINAL = 0;
		}

	}
}


void mostrar_cola(char songs[][B]) {
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


void pintar() {
	cout<<endl<<"===================="<<endl;
	cout<<"FRENTE = "<<FRENTE<<endl;
	cout<<"FINAL = "<<FINAL<<endl;
	cout<<endl<<"===================="<<endl;
}




