// Elias Eduardo Cardona Rodríguez
// David Rodríguez Villagran
// Kenia Jocelyn Martínez Gutierrez
// Licenciatura en Informática 3-A
// 03-SEP-2023
// ENTREGABLE DEL PROYECTO FINAL - UNIDAD 1
//
// Objetivo: Buscar elementos en un arreglo unidimensional de caracteres
#include <iostream>
#include <cstring>
using namespace std;
#define longFrase 60
#define maxReps 20


void contarCaracteres(const char *frase, char caracteres[], int &contador, int repeticiones[]);



int main() {
    char frase[longFrase];
    char caracteresDetectados[longFrase];
    int repeticiones[maxReps];
    int contAux=0;
	// --------
    cout<<"Ingrese una frase: ";
    cin.getline(frase, longFrase);
	// --------
	int fraseIngresadaLen = strlen(frase);
	//cout<<endl<<"--------"<<fraseIngresadaLen<<"--------"<<endl;


	if(fraseIngresadaLen>60) {
		cout<<"Su frase es demasiado larga. Intente con otra"<<endl;
	} else {
	    contarCaracteres(frase, caracteresDetectados, contAux, repeticiones);
	    cout<<"Caracteres repetidos y sus repeticiones:"<<endl;
	    for(int i=0; i<contAux; i++) {
	        cout<<"'"<<caracteresDetectados[i]<<"' se repite "<<repeticiones[i]<<" veces."<<endl;
		}
	}



	cout<<endl<<endl;

    return 0;
}


// Para esta función, utilizamos el formato `const char *param`,
// para así sólamente tomar la variable `frase`, en modo lectura.
// Es decir al declarar de esta forma el parámetro, sólo accedemos
// al valor de la variable para leerlo y no modificarlo
void contarCaracteres(const char *frase, char caracteres[], int &contador, int repeticiones[]) {
    contador=0;
    int fraseLen = strlen(frase);

	// -------- ciclo for --------
    for(int i=0; i<fraseLen; i++) {
        bool aux = false;
		// ----
        for(int j=0; j<fraseLen; j++) {
            if(frase[i]==caracteres[j]) {
                repeticiones[j]++;
                aux = true;
                break;
            }
		}
		// ----
        if(!aux) {
            caracteres[contador] = frase[i];
            repeticiones[contador] = 1;
            contador++;
        }
		// ----
    }
	// -------- ciclo for --------

}






