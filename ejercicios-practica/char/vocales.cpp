// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 30-AGO-2023
//
// Objetivo: Buscar las vocales en una frase

#include <iostream>
#include <cstring>

using namespace std;


bool esVocal(char c);

int main() {
    char oracion[60];

    cout<<"Ingrese su  nombre: ";
    cin.getline(oracion, sizeof(oracion));

    int L = strlen(oracion);
    cout<<"Vocales presentes en su nombre: "<<endl;

    for(int i=0; i<L; i++)
        if(esVocal(oracion[i]))
            cout<<oracion[i]<<"\t";
    // fin de la verificación




    cout<<endl<<endl;

    return 0;
}


bool esVocal(char c) {
    switch(tolower(c)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}







