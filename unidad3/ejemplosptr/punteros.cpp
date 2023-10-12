// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 06-OCT-2023
// UNIDAD 3
//
// Objetivo: Trabajar con punteros
#include <iostream>
using namespace std;

int main() {
	cout<<"Punteros en C++"<<endl<<endl;
	int a=2;
	int* intero;
	intero=&a;

	float t = 2.50;
	float* floats;
	floats=&t;

	char let = 'a';
	char* char1;
	char1=&let;

	system("pause");

	cout<<intero<<endl;
	cout<<&intero<<endl;
	cout<<*intero<<endl;
	cout<<"----------------"<<endl;
	// -----------------
	cout<<char1<<endl;
	cout<<&char1<<endl;
	cout<<*char1<<endl;
	cout<<"----------------"<<endl;
	// -----------------
	cout<<floats<<endl;
	cout<<&floats<<endl;
	cout<<*floats<<endl;
	cout<<"----------------"<<endl;

	cout<<endl<<endl;
	return 0;
}



