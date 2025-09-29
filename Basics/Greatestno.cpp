#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int a, b, c;

    // input three numbers
    cin >> a >> b >> c;

    // check if 'a' is greater than both b and c
    if (a > b && a > c) {
        cout << "Greatest no is a: " << a << endl;
    }
    // check if 'b' is greater than both a and c
    else if (b > c && b > a) {
        cout << "Greatest no is b: " << b << endl;
    }
    // if neither a nor b is greatest, then 'c' is greatest
    else {
        cout << "Greatest no is c: " << c << endl;
    }

    return 0; // end of program
}
