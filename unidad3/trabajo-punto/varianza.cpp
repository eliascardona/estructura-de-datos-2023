/*Jesus Emilio Marentes Vejar
 * Ramiro Eduardo Moreno Hernández
 * Jesús Adrián López Sanchez
 * Erika Reyes González
 * Janette Valenzuela González
 * Elias Edurardo Cardona Rodríguez
 * Guillermo Navarrete Valdivia
 * Ejercicio: Dado un arreglo unidimensional con califiicaciones de 10 alumnos, elabora lo siguiente (usando punteros)
 * Media aritmética, varianza, desviación estándar, y la moda */
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;
#define tam 3


int main () {
	setlocale(LC_ALL, "spanish");
	float v[tam], *aptrv;
	float media = 0.0;
	float vars= 0.0, varf=0.0;
	double suma = 0.0;
	aptrv = v;
	// ------------------------ llenado ----------------------------
	for(int i=0;i<tam;i++) {
		cout<<"Ingrese la calificación del alumno "<<i<<" : ";
		cin>>*(aptrv+i);
		suma+=*(aptrv+i);
	}
	cout<<endl;
	// ------------------------ media ----------------------------
	media=suma/tam;
	cout<<"La media aritmétia es de: "<<media<<endl;
	// ------------------------ varianza ----------------------------
	for(int i=0;i<tam;i++) {
		vars=(*(aptrv+i)+media)*(*(aptrv+i)+media);
	}
	varf=vars/(tam-1);
	cout<<"La varianza es: "<<varf<<endl;
	// ------------------------ desviacion estandar ----------------------------
	double desviacionestandar = sqrt(varf);
	cout<<"La desviacion estandar es: "<<desviacionestandar<<endl;
	// ------------------------ desviacion estandar ----------------------------
	for(int i = 0; i < tam; i++){
		cout << "\t" << *(aptrv + i);
	}
	cout << endl;
	for(int i = 0; i < tam; i++){
		s = 0;
		for(int j = 0; j < tam; j++){// ----------- FOR INTERNO ----------

			if(*(aptrv + i) == *(aptrv + j) && i != j)
				s = s + 1;
			// ----------- IF INTERNO ----------

		} 
		if(s > m){// ----------- IF INTERNO ----------
			m = s;
			a = i;
		}
	} // ----------- CIERRE DEL FOR INICIAL PARA LA MODA ----------
	cout << "\nLa moda es: " << *(aptrv + a) << " y tiene " << m + 1 << " repeticiones" << endl;
	// ------------------------ final ----------------------------
	getch();
	return 0;
}




