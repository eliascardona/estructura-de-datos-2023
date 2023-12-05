#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;


struct compr {
    bool operator()(int a, int b) const {
        return a > b;
        cout << "ha pasado" << "  |";
    }
};


int main() {
    vector<int> numeros = {8, 7, 1, 6, 5, 4};

    sort(numeros.begin(), numeros.end(), compr());

	for(int num : numeros) {
        cout << num << "\t";
    }


	cout << endl << endl;
    return 0;
}






