// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 17-OCT-2023
// UNIDAD 3
// Uso de malloc y sizeof
// Tema: memoria dinámica
#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
	int *z;
	int arr[5];

	z=(int*)malloc(20*sizeof(int));

	// ---------------------------------------------------------------------

	cout<<"malloc en c+"<<endl;
	*z=20;
	*(z+1)=10;
	*(z+2)=10;
	*(z+3)=10;
	*(z+4)=10;
	*(z+5)=10;
	*(z+6)=15;
	*(z+7)=15;
	*(z+8)=15;
	*(z+9)=15;
	*(z+10)=15;

	// ---------------------------------------------------------------------

	cout<<endl;
	for(int i=0; i<9; i++)
		cout<<"el contenido final es: "<<*(z+i)<<endl;
	// ---- for ------


	cout<<endl<<endl;
	return 0;
}



