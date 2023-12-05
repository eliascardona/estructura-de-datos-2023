/*Sea M una matriz de enteros de 5 filas X 5 columnas. 
Realice un programa  que permita: 
a) Ingresar cada uno de los valores de la matriz. b) Mostrar, para cada fila, la suma de sus valores de esa fila, y el menor valor almacenado c) Mostrar, para cada columna, el promedio de sus valores y el mayor 
valor. d) El mayor valor almacenado en toda la Matriz, indicando en que fila y columna se encuentra*/  
#include <iostream>
#include <locale.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
//Declaramos una matriz de enteros de 5x5 para almacenar los valores.
int main() {
		setlocale(LC_ALL,"spanish");
    int matriz[5][5];
    /*Usamos un bucle anidado para ingresar valores en la matriz, fila por fila.
     Ingresar valores en la matriz */
    cout << "Ingresa los valores de la matriz:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    //Luego, utilizamos otro bucle anidado para calcular la suma y el menor valor por fila, y los mostramos.
    // Mostrar suma y menor valor por fila
    cout << "\nSuma y menor valor por fila:" << endl;
    for (int i = 0; i < 5; i++) {
        int suma = 0;
        int menor = matriz[i][0];
        for (int j = 0; j < 5; j++) {
            suma += matriz[i][j];
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
        cout << "Fila " << i << ": Suma = " << suma << ", Menor valor = " << menor << endl;
    }
     //Después, usamos otro bucle anidado para calcular el promedio y el mayor valor por columna, y los mostramos.
    // Mostrar promedio y mayor valor por columna
    cout << "\nPromedio y mayor valor por columna:" << endl;
    for (int j = 0; j < 5; j++) {
        int suma = 0;
        int mayor = matriz[0][j];
        for (int i = 0; i < 5; i++) {
            suma += matriz[i][j];
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
        }
        double promedio = static_cast<double>(suma) / 5; // Calculamos el promedio
        cout << "Columna " << j << ": Promedio = " << promedio << ", Mayor valor = " << mayor << endl;
    }
     /*Finalmente, buscamos el mayor valor en toda la matriz y guardamos su posición en filaMayor y columnaMayor, 
	 y lo mostramos junto con su ubicación.
    ///Encontrar el mayor valor en toda la matriz*/
    int mayorValor = matriz[0][0];
    int filaMayor = 0;
    int columnaMayor = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] > mayorValor) {
                mayorValor = matriz[i][j];
                filaMayor = i;
                columnaMayor = j;
            }
        }
    }

    cout << "\nEl mayor valor en toda la matriz es " << mayorValor << " y se encuentra en la fila " << filaMayor << " y columna " << columnaMayor << "." << endl;

    return 0;
}
/*Este programa te permite ingresar valores en una matriz,
 calcular y mostrar la suma, el menor valor por fila, el promedio y el mayor valor por columna, 
así como encontrar el mayor valor en toda la matriz con su ubicación.*/
