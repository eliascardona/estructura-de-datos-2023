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
void intercambiarFilas(int matriz[][COL], int iRow, int jRow);


int main() {
    int A[ROW][COL]={};
	int iRow=0, jRow=0;

	// Para un mejor orden en nuestra función main,
	// utilizamos un procedimiento para para el llenado de nuestra
	// matriz. Nótese como se le pasa la matriz declarada en main como
	// parámetro, para posteriormente pasarle esta matriz ya con valores
	// a cualquier otra función o procedimiento.
	//
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


	// Aquí simplemente se realiza la impresión de nuestra matriz
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



// Procedimiento para el llenado de nuestra matriz
// se utiliza un método convencional, con el uso de ciclos for.
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



// Implementación de un procedimiento que intercambie
// la fila seleccionada por la fila destinatario.
void intercambiarFilas(int matriz[][COL], int iRow, int jRow) {
	for(int b=0; b<ROW; b++) {
		if(iRow>= 0&& iRow<ROW && jRow>=0 && jRow<COL) {
			// Como el requerimiento del programa no lo indica,
			// sólo intercambiamos la fila `i-esima`, por la `j-esima`
			matriz[b][jRow] = matriz[iRow][b];
		}
	}
}








