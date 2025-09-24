#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // Variable to store user input number
    cout << "Enter the no: "; // Prompt user to enter a number
    cin >> n; // Read the number from user input

    // Check if the number is even by testing remainder when divided by 2
    if (n % 2 == 0) {
        cout << "The no is even"; // Output if number is even
    } else {
        cout << "The no is odd"; // Output if number is odd
    }

    return 0; // End of program
}
