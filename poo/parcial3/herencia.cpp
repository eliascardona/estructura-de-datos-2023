#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string, int); //Constructor
		void mostrarPersona();
};
class Alumno : public Persona{
	private: //Atributos
		string codigoAlumno;
		float notaFinal;
	public: //Metodos
		Alumno(string,int,string,float); //constructor de la clase alumno
		void mostrarAlumno();
};
Persona::Persona(string _nombre, int _edad){
		nombre= _nombre;
		edad=_edad;
}
Alumno:: Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal):Persona(_nombre,_edad){
	codigoAlumno = _codigoAlumno;
	notaFinal=_notaFinal;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad "<<edad<<endl;
}
void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno "<<codigoAlumno<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}

int main(){
	Alumno alumno1("Alejandro",20,"1234242",15.6);
	alumno1.mostrarAlumno();
	system("pause");
	return 0;
}


