// haciendo un programa en merge-sort

#include <iostream>
using namespace std;

#define tam 10

int main() {
	int arr[tam] = {2,2,2,2,2, 3,3,3,3,3};
	int r1 = tam/2;
	int aux1[r1];
	int aux2[r1];
	int co1=0;

	for(int a=0; a<r1; a++)
		aux1[a] = arr[a];
	// -------------------------

	for(int a=0; a<r1; a++)
		cout<<aux1[a]<<"\t";
	// ------------- recorrido uno -------------
	cout<<endl<<"====================="<<endl;



	for(int b=r1; b<tam; b++)
		aux2[b] = arr[b];
	// -------------

	for(int b=r1; b<tam; b++)
		cout<<aux2[b]<<"\t";
	// ------------- recorrido dos -------------




	cout<<endl<<endl;
	return 0;
}






