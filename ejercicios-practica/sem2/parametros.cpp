// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 22/08/2023
// Objetivo: aprender los diferentes tipos de paso de parametros en cpp

#include <stdlib.h>
#include <iostream>

using namespace std;

int A(int, int &);

int main() {
	int i=0, j=0;
	int arr[5];
	cout<<"TRABAJANDO EL PASO DE PARAMETROS"<<endl<<endl;

	cout<<"Funcion A:"<<endl;

	int n1=1, n2=1;

	A(n1, n2);

	return 0;
	system("pause");
}


int A(int a, int &b) {
	int cont;

	a=b+1;
	b=cont;
	a=b;

	cout<<"\n total: "<<a<<". total real "<<b<<"\n";
}
