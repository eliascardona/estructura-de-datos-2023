// Elias Eduardo Cardona Rodríguez
// Licenciatura en Informática 3-A
// 23-OCT-2023
// UNIDAD 3
// Implementación de listas simples.
// Utilizando punteros y memoria dinámica.
struct Nodo {
	int dato;
	nodo *sig;
};
void insertar(*&nodo, int);


int main() {
	int dato;
	nodo *lista;
	lista=NULL;

	cout<<"MANEJO DE MEMORIA DINAMICA EN CPP - LISTAS";

	cout<<"ingrese un dato: ";
	cin>>dato;


	insertar(lista, int);

	cout<<endl<<endl;
	return 0;
}


void insertar(nodo *&lista, int dato) {


	nodo *nuevo_nodo;
	nuevo_nodo = new nodo;


	// igualaciones
	nuevo_nodo->dato=elemento;
	nuevo_nodo->sig=lista;

	// paso final
	lista=nuevo_nodo;

	return;
}




