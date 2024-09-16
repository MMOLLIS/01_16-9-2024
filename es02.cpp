#include <iostream>

using namespace std;

int main() {
    const float pi = 3.14;
    float r, area, circ;

    cout << "Inserire il raggio: ";
    cin >> r;

    area = pi * r * r;
    circ = 2 * pi * r;

    cout << endl << "Area: " << area;
    cout << endl << "Circonferenza: " << circ << endl;

    return 0;
}