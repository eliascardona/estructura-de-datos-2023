// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 17/08/2023
// Objetivo: Obtener números aleatorios con las librerías estándar del lenguaje C

#include <stdio.h>
#include <stdlib.h>

int main() { // función principal
	int N, i;
	int random;

	// le indicamos al usuario el objetivo del programa
	printf("OBJETIVO: generar la cantidad de números aleatorios que ingrese el usuario\n");

	// siempre es buena práctica indicar al usuario
	// el dato que debe de ingresar, no solo solicitarlo
	// directamente con `scanf`
	printf("Ingrese la cantidad de números aleatorios a generar: ");
	scanf("%d", &N);

	srand(time(NULL));
	printf("Números aleatorios generados:\n");

	for(i=0; i<N; i++) {
		// Genera un número aleatorio
		// por cada iteración
		random = rand();
		printf("%d\n", random);
	}
	system("pause");
} // fin de la función principal
