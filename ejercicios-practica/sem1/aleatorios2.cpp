// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 17/08/2023
// Objetivo: Obtener números aleatorios con las librerías estándar del lenguaje C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int N, i;
	int random;

	printf("OBJETIVO: generar la cantidad de números aleatorios que ingrese el usuario\n");
	printf("Ingrese la cantidad de números aleatorios a generar: ");
	scanf("%d", &N);

	printf("Números aleatorios generados:\n");

	for(i=0; i<N; i++) {
		// Genera un número aleatorio
		// por cada iteración
		srand(time(NULL));
		printf("%d\n", random);
	}
	system("pause");
}
