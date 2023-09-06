// Elias Eduardo Cardona Rodríguez
// LITC 3A
// 07-SEP-2023
// Objetivo: Determinar cual a que categoria pertenece un corredor segun su edad

#include <iostream>
#include <cstring>
using namespace std;

#define K 5

struct Corredor {
    char nombre[30];
    char genero[2];
    char categoria[12];
    char club[25];
    int edad;
};

void registrarCorredores(Corredor corredores[]);
void determinarCategoria(Corredor& corredor);


int main() {
    Corredor corredores[K];
    cout<<"Ingrese los datos de los corredores:"<<endl;
    registrarCorredores(corredores);


    cout<<"Reporte de corredores:"<<endl;
    for(int i=0; i<K; i++) {
        cout<<"****DATOS DEL CORREDOR****"<<endl;
        cout<<"Nombre corredor: "<<corredores[i].nombre<<endl;
        cout<<"Edad del corredor: "<<corredores[i].edad<<endl;
        cout<<"Genero corredor: "<<corredores[i].genero<<endl;
        cout<<"Categoria del corredor: "<<corredores[i].categoria<<endl;
        cout<<"Nombre del club: "<<corredores[i].club<<endl<<endl;
    }


	cout<<endl<<endl;
    return 0;
}


void registrarCorredores(Corredor corredores[]) {
    for(int i=0; i<K; i++) {
        cout<<"Corredor #"<<i+1<<endl;
        cout<<"Nombre: ";
        cin.getline(corredores[i].nombre, 30);
        cin.ignore();

        cout<<"Edad: ";
        cin>>corredores[i].edad;
        cin.ignore();

        cout<<"Genero (M/F): ";
        cin>>corredores[i].genero;
        cin.ignore();

        cout<<"Nombre del club: ";
        cin.getline(corredores[i].club, 25);
        cin.ignore();

        determinarCategoria(corredores[i]);
    }
}


void determinarCategoria(Corredor& corredor) {
    if(corredor.edad > 40) {
        strcpy(corredor.categoria, "Veterano");
    } else if (corredor.edad >= 19 && corredor.edad <= 40) {
        strcpy(corredor.categoria, "Adulto");
    } else {
        strcpy(corredor.categoria, "Juvenil");
    }
}




