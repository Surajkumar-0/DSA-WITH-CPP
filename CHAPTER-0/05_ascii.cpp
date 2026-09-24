#include <iostream>
using namespace std;

int main() {

    // Character → Number
    char c = 'A';
    cout << (int)c << endl;      // Output: 65

    // Number → Character
    int n = 97;
    cout << (char)n << endl;     // Output: a

    // Direct print
    cout << (int)'Z' << endl;    // Output: 90
    cout << (char)48 << endl;    // Output: 0

    return 0;
}