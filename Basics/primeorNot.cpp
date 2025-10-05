#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take number input from user

    // loop from 1 to n
    for (int i = 1; i <= n; i++) {
        // check if n is divisible by i
        if (n % i == 0) {
            cout << "prime" << endl; // print "prime" if divisible
            break;                   // stop loop after first division
        }
    }

    return 0; // end of program
}
