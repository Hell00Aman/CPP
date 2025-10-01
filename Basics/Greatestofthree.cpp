#include <bits/stdc++.h>  // include all standard libraries
using namespace std;

int main() {
    int a, b, c;

    // take 3 numbers from user
    cout << "Enter the numbers: ";
    cin >> a >> b >> c;

    // check if 'a' is greater than 'b'
    if (a > b) {
        // now compare 'a' with 'c'
        if (a > c) {
            cout << "a is greatest: " << a;
        } else {
            cout << "c is greatest: " << c;
        }
    } 
    else {
        // if 'b' is greater than 'a', then compare 'b' with 'c'
        if (b > c) {
            cout << "b is greatest: " << b;
        } else {
            cout << "c is greatest: " << c;
        }
    }

    return 0; // end of program
}
