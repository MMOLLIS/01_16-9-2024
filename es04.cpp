#include <iostream>

using namespace std;

int main() {
    const float pi = 3.14;
    float r, area;
    cout << "Inserire il raggio: ";
    cin >> r;

    area = 4/3 * pi * r * r * r;
    cout << endl << "Volume della sfera: " << area << endl;
    return 0;
}
