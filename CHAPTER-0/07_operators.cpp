#include <iostream>
using namespace std;

int main() {

    int a = 10, b = 3;

    // Arithmetic
    cout << a + b << endl;   // 13
    cout << a - b << endl;   // 7
    cout << a * b << endl;   // 30
    cout << a / b << endl;   // 3
    cout << a % b << endl;   // 1

    // Relational
    cout << (a == b) << endl;  // 0 (false)
    cout << (a != b) << endl;  // 1 (true)
    cout << (a > b)  << endl;  // 1 (true)
    cout << (a < b)  << endl;  // 0 (false)

    // Logical
    cout << (a > b && a > 5) << endl;  // 1 (true)
    cout << (a > b || b > 5) << endl;  // 1 (true)
    cout << !(a == b) << endl;         // 1 (true)

    // Assignment
    a += 5;   cout << a << endl;  // 15
    a -= 3;   cout << a << endl;  // 12
    a *= 2;   cout << a << endl;  // 24
    a /= 4;   cout << a << endl;  // 6

    // Increment & Decrement
    a++;   cout << a << endl;   // 7
    a--;   cout << a << endl;   // 6

    return 0;
}