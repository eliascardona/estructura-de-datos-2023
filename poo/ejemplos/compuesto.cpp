#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main (void){
	float capital_depositado, interes_compuesto, monto, tasa_de_interes, tiempo;
	cout << "Ingresa el valor de capital depositado: ";
	cin >> capital_depositado;
	cin.get();

	cout << "Ingresa el valor de tasa de interes: ";
	cin >> tasa_de_interes;
	cin.get();

	cout << "Ingresa el valor de tiempo: ";
	cin >> tiempo;
	cin.get();

	monto=pow(1.0+tasa_de_interes/100,tiempo)*capital_depositado;
	interes_compuesto=monto-capital_depositado;


	cout << "Valor de interes compuesto: " << interes_compuesto << endl;
	cout << "Valor de monto: " << monto << endl;
	cout << endl;


	system ("pause");
	return 0;
}


