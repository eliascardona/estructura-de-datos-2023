// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 28/08/2023
// Objetivo: Diseñar una matriz mágica

#include <stdlib.h>
#include <iostream>

using namespace std;

#define K 3

void generarMatriz(int matriz[][3]);

int main() {
	int matriz[K][K];
	cout<<"OBJETIVO: Desarrollar una matriz donde la suma de, filas, columnas y diagonlaes de el mismo resultado"<<endl<<endl;

	// invocacion de nuestro procedimiento
	generarMatriz(matriz);


	cout<<"Resultado del procedimiento `generarMatriz`: "<<endl;

	for(int i = 0; i<K; i++) {
		for(int j = 0; j<K; j++) {
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}


	cout<<endl<<endl;


	return 0;
	system("pause");
}

void generarMatriz(int matriz[][3]) {
	int a=0, b=0;
	int i=0, j=K/2;
	int valor=1;

	for(a=0; a<K; a++)
		for(b=0; b<K; b++)
			matriz[a][b] = 0;
	// fin del llenado

	while(valor <= K*K) {
		matriz[i][j] = valor;
		valor++;
		i--;
		j++;

		if(i<0)
			i = K-1;
		// fin del if

		if(j==K)
			j = 0;
		// fin del if

		if(matriz[i][j] != 0) {
			i += 2;
			j--;

			if(i >= K)
				i -= K;

			if(j<0)
				j += K;

		} // final del if
	} // final del while
}









