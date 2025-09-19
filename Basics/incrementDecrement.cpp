#include<bits/stdc++.h>   // Includes all standard libraries
using namespace std;      // Use standard namespace

int main (){
    int x, y;

    // Post increment
    x = 5;
    x++;                  // x becomes 6
    y = 7;
    y++;                  // y becomes 8
    cout << x << endl;    // Prints 6
    cout << y << endl;    // Prints 8

    // Post decrement
    x = 5;
    x--;                  // x becomes 4
    y = 7;
    y--;                  // y becomes 6
    cout << x << endl;    // Prints 4
    cout << y << endl;    // Prints 6

    // Pre increment
    x = 5;
    ++x;                  // x becomes 6 immediately
    y = 7;
    ++y;                  // y becomes 8 immediately
    cout << x << endl;    // Prints 6
    cout << y << endl;    // Prints 8

    // Pre decrement
    x = 5;
    --x;                  // x becomes 4 immediately
    y = 7;
    --y;                  // y becomes 6 immediately
    cout << x << endl;    // Prints 4
    cout << y << endl;    // Prints 6

    return 0;             // End program successfully
}
