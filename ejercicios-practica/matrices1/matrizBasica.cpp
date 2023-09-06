// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 24/08/2023
// Objetivo: Manejo basico de matrices en C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define K 3

int main() {
	int i=0, j=0;
	int mat[K][K] = {};
	cout<<"MATRIZ SUMA"<<endl;

	cout<<"Llenado de nuestra matriz K*K:"<<endl;

	for(i=0; i<K; i++) {
		for(j=0; j<K; j++) {
			if(j!=2) {
				cout<<"[#"<<i+1<<"] "<<"[#"<<j+1<<"]: ";
				cin>>mat[i][j];
			}
			cout<<"-------------------------------------------";
			cout<<endl;
		}
		cout<<endl;
	}

	for(i=0; i<K; i++) {
		mat[i][2] = 0;
	}


	for(i=0; i<K; i++) {
		mat[i][2] = mat[i][0] + mat[i][1];
	}

	cout<<endl<<"Resultado final:"<<endl;
	for(i=0; i<K; i++) {
		cout<<mat[i][0]<<" + "<<mat[i][1]<<" = "<<mat[i][2]<<endl;
	}


	cout<<endl<<endl;


	return 0;
	system("pause");
}
