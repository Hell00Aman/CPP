#include <bits/stdc++.h> // include all standard libraries
using namespace std;

int main() {
    int n;
    cout << "Enter the no: "; // prompt user for input
    cin >> n;                 // read the number

    // check if number is divisible by 3 OR 5
    if (n % 5 == 0 || n % 3 == 0) {
        cout << "the no is divisible";
    }
    else {
        cout << "the no is not divisible";
    }

    return 0; // end of program
}
