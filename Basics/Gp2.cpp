#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input for number of terms to print

    int a = 3;             // start with the first term as 3

    // loop runs n times
    for (int i = 1; i <= n; i++) {
        cout << a << endl; // print current value of a
        a = a * 4;         // multiply a by 4 for next term
    }

    return 0; // end of program
}
