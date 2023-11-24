/*
	Jesus Emilio Marentes Vejar 
	Fabian Rodriguez Herrera
	
	En Parejas elabore un programa en C++ que utilice Herencia múltiple, deberá contener:
	4 Clases, (1 clase Padre, 2 clases hijas y una clase que dependa de la clase hija.)
	cada clase deberá tener 2 atributos y mínimo un método.
	Crear minimo un objeto para cada clase utilizando el método de cada clase
	documentar donde se utiliza:
	Abstracción, encapsulación, herencia múltiple
	PD no se revisaran trabajos individuales
	*/
#include <iostream>
using namespace std;

// Clase Padre
class Padre {
public:
    int atributoPadre1;
    int atributoPadre2;

    Padre() {
        atributoPadre1 = 0;
        atributoPadre2 = 0;
    }

    void metodoPadre() {
        cout << "Metodo de la clase Padre" << endl;
    }
};

// Clase Hija 1
class Hija1 : public Padre {
public:
    int atributoHija1_1;
    int atributoHija1_2;

    Hija1() {
        atributoHija1_1 = 0;
        atributoHija1_2 = 0;
    }

    void metodoHija1() {
        cout << "Metodo de la clase Hija1" << endl;
    }
};

// Clase Hija 2
class Hija2 : public Padre {
public:
    int atributoHija2_1;
    int atributoHija2_2;

    Hija2() {
        atributoHija2_1 = 0;
        atributoHija2_2 = 0;
    }

    void metodoHija2() {
        cout << "Metodo de la clase Hija2" << endl;
    }
};

// Clase que depende de la clase Hija1
class Dependiente {
public:
    Hija1 hija1;

    Dependiente() {
        hija1.atributoHija1_1 = 10;
        hija1.atributoHija1_2 = 20;
    }

    void metodoDependiente() {
        cout << "Metodo de la clase Dependiente" << endl;
    }
};

int main() {
    // Crear objetos para cada clase
    Padre padre;
    Hija1 hija1;
    Hija2 hija2;
    Dependiente dependiente;

    // Utilizar el método de cada clase
    padre.metodoPadre();	//Abstraccion 
    hija1.metodoHija1();	//Abstraccion 
    hija2.metodoHija2();	//Abstraccion 
    dependiente.metodoDependiente();	//Abstraccion 

    return 0;
}


