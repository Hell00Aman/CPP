#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input from user

    // loop from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {  // check if number is even
            continue;      // skip even numbers
        } else {
            cout << i << endl; // print odd numbers only
        }
    }

    return 0; // end of program
}
