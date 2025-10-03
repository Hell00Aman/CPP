#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input number 'n'

    // loop from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // check if 'i' is odd
            cout << i << endl;  // print odd number
        }
    }

    return 0; // end of program
}
