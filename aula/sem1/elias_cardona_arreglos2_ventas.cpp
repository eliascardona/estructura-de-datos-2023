// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 28/08/2023
// Objetivo: Utilizar el metodo de la burbuja para
//           ordenar un reporte que contiene las ventas
//           por mes de una empresa.
// Adicionales:
//           Total de ventas.
//           Venta máxima.
//           Promedio de ventas.

#include <stdlib.h>
//#include <string.h>
#include <iostream>

using namespace std;

#define limit 12

float totalDeVentasF(float arr[]);
float ventaMaximaF(float arr[]);
float promedioDeVentasF(float arr[]);

int main() {
	int i=0,j=0,aux=0;
	float ventas[limit] = {};
	cout<<"\n\t---- SISTEMA DE VENTAS Y METRICAS BASICAS DE LA EMPRESA AUTOS AGS S.A. DE C.V. ----\n\n";

	const char* meses[12] = {};
	meses[0] = "enero";
	meses[1] = "febrero";
	meses[2] = "marzo";
	meses[3] = "abril";
	meses[4] = "mayo";
	meses[5] = "junio";
	meses[6] = "julio";
	meses[7] = "agosto";
	meses[8] = "septiembre";
	meses[9] = "octubre";
	meses[10] = "noviembre";
	meses[11] = "diciembre";


	cout<<"Ingrese las ventas de cada mes:\n";
	for(i=0; i<limit; i++) {
		cout<<i+1<<". ";
		cout<<meses[i]<<": ";
		cin>>ventas[i];
	}
	cout<<endl<<endl;

	const char* auxMeses = {};

	for(i=0; i<limit-1; i++)
		// duplicado del arreglo
		for(j=i+1; j<limit; j++)
			// validacion
			if(ventas[i] > ventas[j]) {
				aux=ventas[i];
				ventas[i]=ventas[j];
				ventas[j]=aux;

				auxMeses = meses[j];
				meses[i] = meses[j];
				meses[j] = auxMeses;
			}


	cout<<"\nValor de las ventas ordenadas de menor a mayor:\n";
	for(i=0; i<limit; i++) {
		cout<<i+1<<". ";
		cout<<meses[i]<<": ";
		cout<<"$"<<ventas[i]<<endl;
	}

	cout<<endl<<endl;

	float totalDeVentas = totalDeVentasF(ventas);
	float ventaMaxima = ventaMaximaF(ventas);
	float promedioDeVentas = promedioDeVentasF(ventas);

	cout<<"Total de ventas: $"<<totalDeVentas;
	cout<<"\nVenta maxima: $"<<ventaMaxima;
	cout<<"\nVenta media: $"<<promedioDeVentas;


	cout<<endl<<endl;


	return 0;
	system("pause");
}



float totalDeVentasF(float arr[]) {
	int z;
	float sumaVentas = 0.0;

	for(z=0; z<12; z++) {
		sumaVentas += arr[z];
	}

	return sumaVentas;
}

float ventaMaximaF(float arr[]) {
	int z;
	float vMax = arr[0];

	for(z=1; z<limit; z++) {
		if(arr[z] > vMax) {
			vMax = arr[z];
		}
	}

	return vMax;
}

float promedioDeVentasF(float arr[]) {
	int z;
	float sumaVentas = 0.0;
	float promedio= 0.0; 

	for(z=0; z<12; z++) {
		sumaVentas += arr[z];
	}
	promedio = sumaVentas / 12.0;

	return promedio;
}
