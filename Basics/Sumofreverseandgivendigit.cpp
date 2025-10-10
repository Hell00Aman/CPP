#include <bits/stdc++.h> // includes all standard C++ libraries
using namespace std;

int main() {
    int n;
    cin >> n;              // take integer input from user
    int original = n;      // store the original number
    int sum;               // variable to store sum of original + reverse
    int reverse = 0;       // initialize reverse as 0
    int lastdigit;         // variable for extracting digits

    // reverse the number
    while (n != 0) {
        lastdigit = n % 10;             // get the last digit
        n = n / 10;                     // remove last digit from n
        reverse = reverse * 10 + lastdigit; // build reversed number
    }

    sum = original + reverse;           // add original and reversed numbers
    cout << sum;                        // print the final sum
}
