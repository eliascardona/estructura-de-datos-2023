// Elias Eduardo Cardona Rodríguez
// David Rodríguez Villagran
// Kenia Jocelyn Martínez Gutierrez
// Licenciatura en Informática 3-A
// 03-SEP-2023
//
// ENTREGABLE DEL PROYECTO FINAL - UNIDAD 1
//
// Objetivo: Intercambiar la fila i-ésima por la j-ésima,
//           en una matriz numérica de dos dimensiones
//           las longitud de filas y columnas debe diferir
#include <iostream>
using namespace std;
#define ROW 3
#define COL 3


void llenadoDeMatriz(int matriz[][COL]);
void intercambiarFilas(int matriz[][COL], int i, int j);


int main() {
    int A[ROW][COL]={};
	int iRow=0, jRow=0;

	llenadoDeMatriz(A);

    cout<<endl<<"Matriz original:"<<endl;
    for(int i=0; i<ROW; i++) {
        for(int j=0; j<COL; j++)
            cout<<A[i][j]<<"\t";
        // fin del ciclo interno
        cout<<endl;
    }

    // -----
    cout<<"Ingrese el numero de fila i-esima a intercambiar: ";
    cin>>iRow;
    cout<<endl;
    // -----
    cout<<"Ingrese el numero de fila j-esima a intercambiar: ";
    cin>>jRow;
    cout<<endl<<endl;
    // -----

    intercambiarFilas(A, iRow, jRow);

    cout<<"Matriz despues del intercambio de filas:"<<endl;
    for(int i=0; i<ROW; i++) {
        for(int j=0; j<COL; j++)
            cout<<A[i][j]<<"\t";
        // fin del ciclo interno
        cout<<endl;
    }


	cout<<endl<<endl;
    return 0;
}


void llenadoDeMatriz(int matriz[][COL]) {
	int i=0, j=0;
    cout<<"Ingrese los elementos de la matriz:"<<endl;
    for(i=0; i<ROW; i++) {
        cout<<"------ FILA "<<i<<" ------"<<endl;
        for(j=0; j<COL; j++) {
            cout<<"["<<j<<"]: ";
            cin>>matriz[i][j];
        }
		cout<<endl;
    }
}


void intercambiarFilas(int matriz[][COL], int i, int j) {
    int k=0, temp=0;
    if(i>=0 && j>=0 && i<ROW && j<ROW) {
        for(k=0; k<COL; k++) {
            temp = matriz[i][k];
            matriz[i][k] = matriz[j][k];
            matriz[j][k] = temp;
        }
    } else {
        cout<<"Los numeros de fila que ingreso, no son validos"<<endl;
    }

}






