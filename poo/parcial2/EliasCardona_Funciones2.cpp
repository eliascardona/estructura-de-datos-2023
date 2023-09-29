// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo:
// Programa C++ que lee la fecha actual y la fecha de nacimiento
// de una persona y calcula su edad

// librerias
#include <iostream>
// trabajo con "std"
using namespace std;

int bisiesto(int);                   
int fecha_valida(int , int, int);
int calcular_edad(int, int, int, int, int, int);


int main(){
	int diaa, mesa, anioa;
	int dian, mesn, anion, edad;
	// ----------------------------------------------------------
	// --- En esta parte se usa do-while para realizar ---
	// --- una verificiación de un input del usuario ---
	// --- EN ESTE CASO SE VALIDA CON LA FUNCIÓN "fecha_valida()" ---
	do{
		cout << "Introduce fecha actual: " << endl;
		cout << "dia : "; cin >> diaa;
		cout << "mes : "; cin >> mesa;
		cout << "a" << (char)164 << "o: "; cin >> anioa;
	} while(!(fecha_valida(diaa, mesa, anioa)));
	// ----------------------------------------------------------
	// --- Para este caso, sucede lo mismo, solamente ---
	// --- Cambiamos la verificación de una variable ---
	// --- distinta. En el bloque anterior verificamos fecha actual ---
	// --- Para este bloque, verificamos la fecha de nacimiento ---
	do{
		cout << endl << "Introduce fecha de nacimiento: " << endl;
		cout << "dia : "; cin >> dian;
		cout << "mes : "; cin >> mesn;
		cout << "a" << (char)164 << "o: ";  ; cin >> anion;
	} while(!(fecha_valida(dian, mesn, anion)));
	// ----------------------------------------------------------
	//  ** Nota: Para ambos procedimientos de verificación se utiliza do-while,
	//  ya que no tendría sentido validar dos o tres veces con un ciclo for,
	//  hay que realizarlo hasta que el dato sea valido **
	//
	//  En este caso, edad resulta de las operaciones de una función.
	//  Esto sucede porque utilizamos función que retorna valor. Las
	//  funciones void no se pueden asociar a una variable.
	edad = calcular_edad(diaa, mesa, anioa, dian, mesn, anion);
	// -------------------
	cout << endl << "Edad : " << edad << endl;
	return 0;
}



// definición de la función que sirve para calcular edad
int calcular_edad(int da, int ma, int aa, int dn, int mn, int an) {
	int edad = aa-an;
	if(ma < mn){
		edad--;
	} else if(ma == mn and da < dn) {
		edad--;
	}
	// -------------------
	return edad;
}                    


// definición de la función bisiesto
int bisiesto(int a) {
	if(a%4==0 and a%100 !=0 or a%400==0)
		return 1;
	else
		return 0;
	// -------------------
}


// definición de fecha_valida, función que sirve como verificación
// de la entrada de datos del usuario
int fecha_valida(int d, int m, int a) {
	if(d < 1 or d > 31 or m < 1 or m > 12 or a < 1) {
		return 0;
	} else {
		// -------------------
		switch(m) {
			case 4:
			case 6:
			case 9:
			case 11: if(d > 30) {
				return 0;
			}
			break;
			// -------------------
			case 2: if(bisiesto(a)) {
					if(d > 29)
						return 0;
				} else if(d > 28){
					return 0;
				} // ----- fin del if -----

			// ----- fin del case -----
			break;
	    }
	    return 1;
	}
}








