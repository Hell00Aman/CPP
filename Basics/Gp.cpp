#include <bits/stdc++.h>   // include all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input from user (number of terms)

    int a = 1;             // first term starts with 1

    // loop runs n times
    for (int i = 1; i <= n; i++) {
        cout << a << endl; // print the current value of a
        a = a * 2;         // update a by multiplying it with 2
    }

    return 0; // end of program
}
