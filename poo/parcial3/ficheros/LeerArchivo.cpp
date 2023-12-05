#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //abrir un archivo para leer
    ifstream archivo("archivo.txt");

    //verificar si el archivo se abrio correctamente
    if (archivo.is_open()) {
        string linea;

        //leer y mostrar cada linea del archivo
        while (getline(archivo, linea)) {
            cout << linea << "\n";
        }

        //cerrar el archivo
        archivo.close();
    } else {
        cerr << "Error al abrir el archivo.\n";
    }

    return 0;
}

