#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int a, b, c;

    // input three numbers
    cin >> a >> b >> c;

    // check if 'a' is smaller than both b and c
    if (a < b && a < c) {
        cout << "Least no is a: " << a << endl;
    }
    // check if 'b' is smaller than both a and c
    else if (b < c && b < a) {
        cout << "Least no is b: " << b << endl;
    }
    // if neither a nor b is smallest, then 'c' is smallest
    else {
        cout << "Least no is c: " << c << endl;
    }

    return 0; // end of program
}
