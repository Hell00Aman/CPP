#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;               // take input 'n'

    // loop runs from 1 to (2*n - 1), step of 2
    // this ensures only odd numbers are generated
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        cout << i << endl;  // print the current odd number
    }

    return 0; // end of program
}
