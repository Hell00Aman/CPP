#include <bits/stdc++.h> // includes all standard C++ libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take input number from user
    int product = 1;       // initialize product to 1

    // loop from 1 to n
    for (int i = 1; i <= n; i++) {
        product *= i;      // multiply current number with product
        cout << product << endl; // print intermediate factorial after each step
    }

    return 0;              // program ends successfully
}
