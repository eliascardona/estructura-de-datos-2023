// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que tenga un menu para

// librerias
#include <iostream>
#include <cstring>
#include <cstdlib>
// trabajo con "std"
using namespace std;
#define k 5


struct Ejercicio {
	string ejercicio;
	string duracion;
	string series;
	string repeticiones;
};


int ops();
void calentamiento(Ejercicio ejercicios[]);
void pintarCardio();
void pintarTonif();
void pintarPierna();






int main() {
	Ejercicio ejercicios[5];
	ejercicios[0].ejercicio="marcha\t\t";
	ejercicios[1].ejercicio="talon\t\t";
	ejercicios[2].ejercicio="elevacion rodilla";
	ejercicios[3].ejercicio="giro hombros\t";
	ejercicios[4].ejercicio="doblar rodillas\t";
	// ------------------------------------------
	ejercicios[0].duracion="3 min";
	ejercicios[1].duracion="60 seg";
	ejercicios[2].duracion="20 seg";
	ejercicios[3].duracion="20 seg";
	ejercicios[4].duracion="20 seg";
	// ------------------------------------------
	ejercicios[0].series="1";
	ejercicios[1].series="2";
	ejercicios[2].series="2";
	ejercicios[3].series="2";
	ejercicios[4].series="1";
	// ------------------------------------------
	ejercicios[0].repeticiones="1, 1, 1";
	ejercicios[1].repeticiones="15";
	ejercicios[2].repeticiones="15";
	ejercicios[3].repeticiones="5";
	ejercicios[4].repeticiones="10";
	// ------------------------------------------
	// objetivo principal del programa
	cout<<"BIENVENIDO A TU ENTRENADOR VIRTUAL"<<endl;

	while(1) {
		int opcion = ops();
		switch(opcion) {
			case 1:
			case 3: {
				calentamiento(ejercicios);
				pintarCardio();
			}
			break;
			// ----------------------------
			case 2:
			case 4: {
				calentamiento(ejercicios);
				pintarTonif();
			}
			break;
			// ----------------------------
			case 5:
			case 6: {
				calentamiento(ejercicios);
				pintarPierna();
			}
			break;
			// ----------------------------
			case 7:
				cout<<endl<<"Dia libre. Descansa"<<endl<<endl;
			break;
			// ----------------------------
			case 8: {
				exit(0);
			}
			break;
			// ----------------------------
			default:
				cout<<"opcion no valida"<<endl;
		}
	}

	cout<<endl<<endl;
	return 0;
}












int ops() {
	int opcion=20;
	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"En que dia de la semana se encuentra?\n";
	cout<<"1. Lunes\n";
	cout<<"2. Martes\n";
	cout<<"3. Miercoles\n";
	cout<<"4. Jueves\n";
	cout<<"5. Viernes\n";
	cout<<"6. Sabado\n";
	cout<<"7. Domingo\n";
	cout<<"8. Salir del programa\n";
	// ------------------------
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	// ------------------------
	cout<<endl;
	// ------------------------
	return opcion;
	// ------------------------
}


void calentamiento(Ejercicio ejercicios[]) {
	cout<<"\n--------- CALENTAMIENTO ---------\n";
	cout<<"Ejercicio\t\t|\tDuracion\t|\tSeries\t|\tRepeticiones\t|\n\n";
	// ------------------------------------------------------------------------
	for(int i=0; i<k; i++) {
		cout<<ejercicios[i].ejercicio<<"\t\t";
		cout<<ejercicios[i].duracion<<"\t\t\t";
		cout<<ejercicios[i].series<<"\t\t";
		cout<<ejercicios[i].repeticiones<<"\t\t";
		cout<<endl;
	}
	cout<<"---------------------------------------\n\n";
	// ------------------------------------------------------------------------
}


void pintarCardio() {
	string Cardio[6][5] {
		{"Ejercicio     \t|\t", 	"Duracion\t|\t", 	"Series\t|\t", 	"Reps  \t|\t", 	"Descanso \n"},
		{"Jumping Jack  \t|\t", 	"2 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Salto estrella\t|\t", 	"2 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Sentadilla    \t|\t", 	"2 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Tap backs     \t|\t", 	"2 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Burpees       \t|\t", 	"2 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
	};
	cout<<"\n--------- DIA DE CARDIO ---------\n";
	// -------------------------
	for(int a=0; a<6; a++) {
		for(int b=0; b<5; b++) {
			cout<<" "<<Cardio[a][b];
		}
	}
	// -------------------------
	cout<<"---------------------------------------\n\n";
	// ------------------------------------------------------------------------
}


void pintarTonif() {
	string Tonificacion[6][5] {
		{"Ejercicio     \t|\t", 	"Duracion\t|\t", 	"Series\t|\t", 	"Reps  \t|\t", 	"Descanso \n"},
		{"Presion 3/4   \t|\t", 	"2 min   \t|\t", 	"1     \t|\t", 	"12-15 \t|\t", 	"15-45s   \n"},
		{"Triceps       \t|\t", 	"2 min   \t|\t",	"1     \t|\t", 	"12-15 \t|\t", 	"15-45s   \n"},
		{"Embestida     \t|\t", 	"1 min   \t|\t", 	"1     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Piernas       \t|\t", 	"1 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Contra pared  \t|\t", 	"1 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
	};
	cout<<"\n--------- DIA DE TONIFICACION ---------\n";
	// -------------------------
	for(int a=0; a<6; a++) {
		for(int b=0; b<5; b++) {
			cout<<" "<<Tonificacion[a][b];
		}
	}
	// -------------------------
	cout<<"---------------------------------------\n\n";
	// ------------------------------------------------------------------------
}


void pintarPierna() {
	string PiernaGluteo[6][5] {
		{"Ejercicio    \t|\t", 	"Duracion\t|\t", 	"Series\t|\t", 	"Reps  \t|\t", 	"Descanso \n"},
		{"Cuclillas    \t|\t", 	"1 min   \t|\t", 	"1     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Descensos    \t|\t", 	"1 min   \t|\t", 	"1     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
		{"Elev rodilla \t|\t", 	"1 min   \t|\t", 	"2     \t|\t", 	"15    \t|\t", 	"15-45s   \n"},
		{"Puente       \t|\t", 	"2 min   \t|\t", 	"2     \t|\t", 	"15-20 \t|\t", 	"15-45s   \n"},
		{"Abdominales  \t|\t", 	"1 min   \t|\t", 	"2     \t|\t", 	"15-24 \t|\t", 	"15-45s   \n"},
	};
	cout<<"\n--------- DIA DE PIERNA Y GLUTEO ---------\n";
	// -------------------------
	for(int a=0; a<6; a++) {
		for(int b=0; b<5; b++) {
			cout<<" "<<PiernaGluteo[a][b];
		}
	}
	// -------------------------
	cout<<"---------------------------------------\n\n";
	// ------------------------------------------------------------------------
}






