#include <bits/stdc++.h> // include all standard C++ libraries
using namespace std;

int main() {
    int n;
    cout << "Enter the no: "; // ask user for input
    cin >> n;                 // read the number

    // if number is negative, convert it to positive
    if (n < 0) n = -n;

    // print the absolute value of number
    cout << n;

    return 0; // end of program
}
