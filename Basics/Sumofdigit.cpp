#include <bits/stdc++.h>   // includes all standard libraries
using namespace std;

int main() {
    int n;                 // variable to store the number
    cin >> n;              // take number input from user
    int sum = 0;           // variable to store sum of digits
    int lastdigit;         // variable for each digit

    // loop until n becomes 0
    while (n != 0) {
        lastdigit = n % 10;   // get last digit
        n = n / 10;           // remove last digit
        sum += lastdigit;     // add digit to sum
    }

    cout << sum;            // print final sum
}
