// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 28/08/2023
// Objetivo: Diseñar una matriz simétrica

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

#define K 3

bool esSimetrica(int SIM[][3]);

int main() {
	int i=0, j=0, x=0, y=0;
	int mat[K][K] = {};
	srand(time(NULL));
	int ran=0;

	cout<<"MATRIZ SIMETRICA"<<endl;

	for(i=0; i<K; i++)
		for(j=0; j<K; j++) {
			ran = rand()%10+1;
			mat[i][j] = ran;
			mat[j][i] = ran;
		}
	// fin del llenado
	getchar();



	cout<<endl<<"Resultado final: "<<endl;
	for(i=0; i<K; i++) {
		for(j=0; j<K; j++) {
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
	// fin del llenado

	if(esSimetrica(mat)) {
		cout<<"la matriz es simetrica"<<endl;
	} else {
		cout<<"la matriz NO es simetrica"<<endl;
	}



	cout<<endl<<endl;


	return 0;
	system("pause");
}

bool esSimetrica(int SIM[][3]) {
	int a=0, b=0;
	for(a=0; a<K; a++)
		for(b=0; b<K; b++)
			if(SIM[a][b] != SIM[b][a])
				return false;
	// fin de la iteracion
	// ___________________
	return true;
}
