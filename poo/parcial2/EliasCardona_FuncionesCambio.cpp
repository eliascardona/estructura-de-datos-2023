// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Realizar un programa que tenga un menu para

// librerias
#include <iostream>
#include <cstring>
// trabajo con "std"
using namespace std;
/*
DLL USA 		17.51
DLL CANADA 		12.85
YEN JAP 		0.12
LIB EST 		21.27
EURO 			18.43
QUETZAL 		2.23
YUAN 			2.40
*/
#define usa 17.51
#define can 12.85
#define jap 0.12
#define lib 21.27
#define euro 18.43
#define quetzal 2.23
#define yuan 2.40


int ops() {
	int opcion=20;
	cout<<"\n--------- OPCIONES ---------\n";
	cout<<"1. Dolar usa\n";
	cout<<"2. Dolar canda\n";
	cout<<"3. Yen japones\n";
	cout<<"4. Libra esterlina\n";
	cout<<"5. Euro\n";
	cout<<"6. Quetzal\n";
	cout<<"7. Yuan chino\n";

	cout<<"8. Salir del programa\n";
	// ------------------------
	cout<<"DIGITE UNA OPCION: ";
	cin>>opcion;
	// ------------------------
	cout<<endl;
	// ------------------------
	return opcion;
	// ------------------------
}



int main() {
	// objetivo principal del programa
	cout<<"CALCULADORA BASICA EN C++"<<endl;

	while(1) {
		int opcion = ops();
		switch(opcion) {
			case 1: {
				int n=0;
				// ----------------------------
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>n;
				float conver = n*usa;

				cout<<n<<" dolares USA equivalen a "<<conver<<" mxn"<<endl;
			}
			break;
			// ----------------------------
			case 2: {
				int n=0;
				// ----------------------------
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>n;
				float conver = n*can;

				cout<<n<<" dolares CAN equivalen a "<<conver<<" mxn"<<endl;
			}
			break;
			// ----------------------------
			case 3: {
				int n=0;
				// ----------------------------
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>n;
				float conver = n*jap;

				cout<<n<<" yen JAP equivalen a "<<conver<<" mxn"<<endl;
			}
			break;
			// ----------------------------
			case 4: {
				int n=0;
				// ----------------------------
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>n;
				float conver = n*lib;

				cout<<n<<" LIB equivalen a "<<conver<<" mxn"<<endl;
			}
			break;
			// ----------------------------
			case 5: {
				int n=0;
				// ----------------------------
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>n;
				float conver = n*euro;

				cout<<n<<" euros equivalen a "<<conver<<" mxn"<<endl;
			}
			break;
			// ----------------------------
			case 6: {
				int n=0;
				// ----------------------------
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>n;
				float conver = n*quetzal;

				cout<<n<<" quetzales equivalen a "<<conver<<" mxn"<<endl;
			}
			break;
			// ----------------------------
			case 7: {
				int n=0;
				// ----------------------------
				cout<<"Ingrese la cantidad a convertir: ";
				cin>>n;
				float conver = n*yuan;

				cout<<n<<" yuanes equivalen a "<<conver<<" mxn"<<endl;
			}
			break;
			// ----------------------------
			case 8: {
				exit(0);
			}
			break;
			// ----------------------------
			default:
				cout<<"opcion no valida"<<endl;
		}
	}

	cout<<endl<<endl;
	return 0;
}





