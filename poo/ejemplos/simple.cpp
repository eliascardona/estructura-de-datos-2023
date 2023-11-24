#include<iostream>
using namespace std;

int main() {
	float c,r,t,i;
	cout<<"ingrese el capital :";cin>>c;
	cout<<"ingrese la tasa de interes(meses): ";cin>>r;
	cout<<"ingrese el tiempo(meses)";cin>>t;

	i=c*(r/100)*t;
	cout<<"el interes es: "<<i;

	return 0;
}


