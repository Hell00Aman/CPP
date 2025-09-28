#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int n;
    cout << "Enter the no: "; // ask user for input
    cin >> n;                 // read the number

    // check if number is between 100 and 999
    if (n > 99 && n < 1000) {
        cout << "the no is three digit no";
    }
    else {
        cout << "the no is not three digit no";
    }

    return 0; // end of program
}
