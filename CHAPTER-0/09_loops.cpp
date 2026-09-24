#include <iostream>
using namespace std;

int main()
{

    // 1. For Loop
    cout << "For Loop:" << endl;
    for(int i = 1; i <= 5; i++) {
        cout << i << endl;
    }

    // 2. While Loop
    cout << "While Loop:" << endl;
    int i = 1;
    while(i <= 5) {
        cout << i << endl;
        i++;
    }

    // 3. Do-While Loop
    cout << "Do-While Loop:" << endl;
    int j = 1;
    do {
        cout << j << endl;
        j++;
    } while(j <= 5);



    //     int n;
    //     cin>>n;

    //     int i = 1;
    //     while (i<=n)
    //     {
    //         cout<<i<<" ";
    //         i++;
    //     }



    // int n;
    // cin >> n;

    // int i = 1;
    // int sum = 0;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << "The value of sum is :" << sum << endl;



    // int n;
    // cin >> n;

    // int i = 2;
    // int sum = 0;
    // while (i<=n)
    // {
    //     sum = sum + i;
    //     i = i + 2;

    // }
    // cout << "The value of sum even number is :" << sum << endl;
    

    return 0;
}