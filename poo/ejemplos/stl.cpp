#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Functor {
	public:
		void operator()(string cadena) {
			cout<<"Hola "<< cadena <<endl;
		}
};

int main() {
	Functor saludar;

	saludar("mundo");

	return 0;
}

