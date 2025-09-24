#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // Variable to store user input number
    cout << "Enter the no: "; // Prompt user to enter a number
    cin >> n; // Read the number from user input

    // Check if the number is divisible by 5 using modulus operator
    if (n % 5 == 0) {
        cout << "the no is divisible by 5"; // Output if divisible by 5
    } else {
        cout << "the no is not divisible by 5"; // Output if not divisible by 5
    }

    return 0; // End program
}
