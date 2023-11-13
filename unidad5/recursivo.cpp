#include <iostream>
#include <cassert>
using namespace std;

int recur() {
	bool a = true;
	if(a==true) {
		return 5;
	}
}


int main() {
	cout<<"programa recursivo en c++"<<endl;

	int r = recur();
	cout<<r<<endl;

	assert(r==3);


	return 0;
}






