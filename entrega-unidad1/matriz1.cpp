// Elias Eduardo Cardona Rodríguez
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

#define O 3;
#define U 4;

void intercambiarFilas(int matriz[O][U], int i, int j) {
	int temp;
    if (i >= 0 && j >= 0 && i < O && j < O) {
        for (int k = 0; k < U; k++) {
            temp = matriz[i][k];
            matriz[i][k] = matriz[j][k];
            matriz[j][k] = temp;
        }
    } else {
        cout << "Índices de fila no válidos" << endl;
    }
}

int main() {
    int matriz[O][U];

    // Llenar la matriz con valores (puedes cambiar esto según tus necesidades)
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < U; j++) {
            cin >> matriz[i][j];
        }
    }

    int fila_i, fila_j;
    cout << "Ingrese el número de fila i-ésima a intercambiar: ";
    cin >> fila_i;
    cout << "Ingrese el número de fila j-ésima a intercambiar: ";
    cin >> fila_j;

    // Intercambiar las filas
    intercambiarFilas(matriz, fila_i, fila_j);

    // Mostrar la matriz resultante
    cout << "Matriz después del intercambio de filas:" << endl;
    for (int i = 0; i < O; i++) {
        for (int j = 0; j < U; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }



	cout<<endl<<endl;

    return 0;
}
