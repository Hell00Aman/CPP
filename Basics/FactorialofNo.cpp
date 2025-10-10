#include <bits/stdc++.h> // includes all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input number from user
    int product = 1;       // initialize product to 1 (neutral for multiplication)

    // loop from 1 to n to calculate factorial
    for (int i = 1; i <= n; i++) {
        product *= i;      // multiply product by each number
    }

    cout << product << endl; // print the final product (factorial)
    return 0;                // end of program
}
