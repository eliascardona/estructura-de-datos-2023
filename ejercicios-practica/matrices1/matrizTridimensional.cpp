// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 24/08/2023
// Objetivo: Manejo basico de matrices en C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define K 2

int main() {
	int i, j;
	int x, y;
	int mat[4][K][K];
	cout<<"TRABAJANDO CON ARREGLOS BIDIMENSIONALES (MATRICES)"<<endl;

	cout<<"Llenado de nuestra matriz K*K*K:"<<endl;

	// inicio del llenado de matriz de 3 dimensiones
	for(i=0; i<4; i++)
		for(j=0; j<K; j++)
			for(x=0; x<K; x++) {
					cout<<"[#"<<i+1<<"]"<<"[#"<<j+1<<"]"<<"[#"<<x+1<<"]: ";
					cin>>mat[i][j][x];
			}
	// fin del llenado de matriz de 3 dimensiones




	cout<<endl<<"Resultado final (1 matriz tridimensional con 4 matrices bidimensionales):"<<endl;
	// inicio del llenado de matriz de 3 dimensiones
	for(i=0; i<4; i++) {
		for(j=0; j<K; j++) {
			for(x=0; x<K; x++) {
				cout<<mat[i][j][x]<<"\t";
			}
			cout<<endl;
		}
		cout<<"----";
		cout<<endl;
	}
	// fin del llenado de matriz de 3 dimensiones




	cout<<endl<<endl;


	return 0;
	system("pause");
}
