#include <iostream>

using namespace std;

int main() {
    bool f = false;
    bool t = true;
    
    // OR
    cout << f << " AND " << f << " | " << (f && f) << endl;
    cout << f << " AND " << t << " | " << (f && t) << endl;
    cout << t << " AND " << f << " | " << (t && f) << endl;
    cout << t << " AND " << t << " | " << (t && t) << endl;
    // AND
    cout << f << " OR " << f << " | " << (f || f) << endl;
    cout << f << " OR " << t << " | " << (f || t) << endl;
    cout << t << " OR " << f << " | " << (t || f) << endl;
    cout << t << " OR " << t << " | " << (t || t) << endl;
    return 0;
}