#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    float ris;
    int resto;
    cout << "Inserire dividendo: ";
    cin >> n1;
    cout << endl << "Inserire il divisore: ";
    cin >> n2;

    ris = n1 / n2;
    resto = n1 % n2;
    cout << endl;
    cout << "Quoziente: " << ris;
    cout << ", resto: " << resto << endl;
    return 0;
}