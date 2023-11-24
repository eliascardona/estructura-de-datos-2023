// Elias Eduardo Cardona Rodríguez
// Lic. en Informatica 3A
// Objetivo: Comenzar a realizar ejercicios básicos con ficheros en C++

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //abrir un archivo para escribir
    ofstream archivo("archivo.txt");

    //verificar si el archivo se abrio correctamente
    if (archivo.is_open()) {
        //escribir en el archivo
        archivo << "Este es un ejemplo de archivo de texto en c++.\n";
        archivo << "Linea 2 ejemplo.";

        //cerrar el archivo
        archivo.close();
        cout << "Archivo creado exitosamente.\n";
    } else {
        cerr << "Error al abrir el archivo.\n";
    }

    return 0;
}
