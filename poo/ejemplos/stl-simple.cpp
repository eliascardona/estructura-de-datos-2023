#include <iostream>
#include <cstdlib>
using namespace std;

class C {
	public:
		void operator()(float a, float b, float c) {
			double simpleI = 30.00;

			simpleI = a*(b/100)*c;

			cout<<"El interes que debe de pagar segun el capital es "<< simpleI <<endl;
		}
};


int main() {
	float cap, tasa, tiempo;
	cout<<"Standard  Templates en C++"<<endl;
	/*
	cout<<"Ingrese el capital: ";
	cin>>cap;
	cout<<"Tasa de interes (valores entre 0-1): ";
	cin>>tasa;
	cout<<"Cant. de meses que se tardara en pagar: ";
	cin>>tiempo;
	*/

	C Interes;

	Interes(1000.00, 15.00, 24.00);



	cout<<endl<<endl;
	return 0;
}













