#include <iostream>

using namespace std;

int main() {
    float fahrenheit, celsius;
    cout << "Inserire la temperatura in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) / 1.8;
    cout << endl << fahrenheit << "°F = " << celsius << "°C" << endl;
    return 0;
}