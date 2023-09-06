#include <iostream>
#include <iomanip>
using namespace std;

struct Corredor {
    char nombre[30];
    char clubnom[25];
    char categoria[12];
    char genero;
    int edad;
};

void determinarCategoria(Corredor& corredor) {
    if (corredor.edad > 40) {
        strcpy(corredor.categoria, "Veterano");
    } else if (corredor.edad >= 19 && corredor.edad <= 40) {
        strcpy(corredor.categoria, "Adulto");
    } else {
        strcpy(corredor.categoria, "Juvenil");
    }
}

int main() {
    const int numCorredores = 5;
    Corredor corredores[numCorredores];

    cout << "Ingrese los datos de los corredores:" << endl;

    for (int i = 0; i < numCorredores; i++) {
        cout << "Corredor #" << i + 1 << endl;
        cout << "Nombre: ";
        cin.ignore();
        cin.getline(corredores[i].nombre, 30);
        cout << "Edad: ";
        cin >> corredores[i].edad;
        cout << "Género (M/F): ";
        cin >> corredores[i].genero;
        cout << "Nombre del club: ";
        cin.ignore();
        cin.getline(corredores[i].clubnom, 25);
        determinarCategoria(corredores[i]);
    }

    cout << "Reporte de corredores:" << endl;

    for (int i = 0; i < numCorredores; i++) {
        cout << "****DATOS DEL CORREDOR****" << endl;
        cout << "Nombre corredor: " << corredores[i].nombre << endl;
        cout << "Edad del corredor: " << corredores[i].edad << endl;
        cout << "Genero corredor: " << corredores[i].genero << endl;
        cout << "Categoría del corredor: " << corredores[i].categoria << endl;
        cout << "Nombre del club: " << corredores[i].clubnom << endl;
        cout << endl;
    }


    return 0;
}
