#include <iostream>

using namespace std;

int main() {
	int *apunta;
	int numero;
	numero=3;
	int *p=NULL;
	int arreglo[5]={5,10,15,20,25};
	p=arreglo;

	cout<<"El resultado uno es:"<<*(p+2)<<endl;
	cout<<"El resultado dos es:"<<*p++<<endl;

	return 0;
}




