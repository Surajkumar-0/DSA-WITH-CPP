#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;

    cout << a / b << endl;           // Output: 2     (bina casting)
    cout << (float)a / b << endl;    // Output: 2.5   (casting ke baad)

    return 0;
}