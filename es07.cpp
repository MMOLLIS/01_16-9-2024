#include <iostream>

using namespace std;

int main() {
    char maiusc, minusc;
    cout << "Inserire un carattere maiuscolo: ";
    cin >> maiusc;
    
    minusc = (char) maiusc + 0x20;
    cout << endl << "Il carattere \'" << maiusc << "\' in minuscolo e' \'" << minusc <<  "\'!" << endl;
    return 0;
}