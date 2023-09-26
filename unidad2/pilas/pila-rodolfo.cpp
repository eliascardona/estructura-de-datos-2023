//Lee una cadena y por medio de pilas identifica si hay un parentesis que no se cierra
//Rodolfo Eduardo Cordova Perez
//12/09/2022

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;


void push(char [],int &);
void pop(char [],int &);


int main(){
	int cima=-1,error=0;
	char str[100];
	char pila[50];
	cout<<"Ingresa tu expresion: ";
	cin.get(str,100);

	for(int i=0; i<100; i++) {
		if(str[i]=='(') {
			push(pila,cima);
		}
		if(str[i]==')') {
			if(cima==-1)
				error++;
			// ---------
			// para casos como )( donde cierra y luego abre
			pop(pila,cima);
			// ---------
		}
	}
	if(cima==-1) {
		if(error>0)
			cout<<"Cada parentesis tiene par, pero hay "<<error*2<<" parentesis al reves: ')('";
		else	
			cout<<"Cada parentesis tiene par: '()'";
	}
	if(cima>-1) {
		cout<<"Hay "<<cima+1<<" parentesis sin cerrar: '(' ";
	}
	if(cima<-1) {
		cout<<"Hay "<<(cima+1)*-1<<" parentesis sin abrir: ')' ";	
	}


	cout<<endl<<endl;
	return 0;
}


void push(char pila[],int &cima){
	cima++;
	pila[cima]='(';
}


void pop(char pila[],int &cima){
	cima--;
}




