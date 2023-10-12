// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 12-OCT-2023
// UNIDAD 3
/*
	OBJETIVO: Verificar cuantas veces se repite el caracter
	ingresado, en la frase ingresada
*/
#include<iostream>
#include<locale.h>
using namespace std;
#define K 70

void posicion_veces(char *cadena, int &contador) {
	bool encontrado;
	char letra;
	int posicion=0;
	int pos[21]={};

	cout<<"Dame la letra a buscar: "<<endl;
	cin>>letra;
    
	while(*cadena!='\0') {
		if(*cadena==letra) {
			contador++;
			encontrado=true;
		}
		cadena++;
		posicion++;
		for(int b=0; b<contador-1; b++)
			pos[b] = posicion;
		// ----------------------------
	}

	if(encontrado == true) {
		cout<<"Letra encontrada "<<"'"<<letra<<"'. "<<"numero de repeticiones "<<contador<<endl;;
		// --------------------------------------------------------
		cout<<"Se encontro en las sig. posiciones: "<<endl;
		for(int a=0; a<contador-1; a++)
			cout<<pos[a]<<" ";
		// ----------------------------
		cout<<endl;
	}


}


int main() {
	setlocale(LC_ALL, "Spanish");
	char cadena[K];
	int contador=0;

	cout<<"Dame la cadena a evaluar: "<<endl;
	cin.getline(cadena, K);
	posicion_veces(cadena, contador);



	cout<<endl<<endl;
	return 0;
}








