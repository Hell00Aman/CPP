#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int n;
    cout << "Enter the no: "; // ask user for input
    cin >> n;                 // read the number

    // check if number is positive or negative
    if (n >= 0) {
        cout << "the no is: " << n;   // print as it is
    } else {
        cout << "the no is: " << -n;  // print absolute value
    }
    return 0;
}
