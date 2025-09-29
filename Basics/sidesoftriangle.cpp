#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int a, b, c;

    // take input for three sides of triangle
    cout << "enter the 1st side :";
    cin >> a;
    cout << "enter the 2nd side :";
    cin >> b;
    cout << "enter the 3rd side :";
    cin >> c;

    // check triangle validity using triangle inequality theorem
    // sum of any two sides must be greater than the third side
    if ((a + b) > c && (b + c) > a && (a + c) > b) {
        cout << "Valid triangle";
    }
    else {
        cout << "Invalid triangle";
    }

    return 0; // end of program
}
