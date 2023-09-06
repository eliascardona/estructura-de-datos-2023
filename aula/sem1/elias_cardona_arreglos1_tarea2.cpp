// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 17/08/2023
// Objetivo: Realizar una simulación de calendario en C++

#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
	int i, n;
	bool whv1 = true;
	const char* meses[12] = {};
	meses[0] = "enero 31";
	meses[1] = "febrero 28";
	meses[2] = "marzo 31";
	meses[3] = "abril 30";
	meses[4] = "mayo 31";
	meses[5] = "junio 30";
	meses[6] = "julio 31";
	meses[7] = "agosto 31";
	meses[8] = "septiembre 30";
	meses[9] = "octubre 31";
	meses[10] = "noviembre 30";
	meses[11] = "diciembre 31";

	cout<<"NUESTRO PEQUENO CALENDARIO"<<endl;

	while(whv1) {
		cout<<"Digita el numero del mes: ";
		cin>>n;
		// validando condicion
		if(n<1||n>12)
			whv1 = false;
	}

	for(int i=0;i<n;i++) {
		cout<<"\t"<<meses[i]<<endl;

	}
	cout<<endl;

	system("pause");
}
