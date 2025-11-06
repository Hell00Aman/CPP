#include <iostream>  // Include the input-output stream library
using namespace std;

// Function to calculate factorial of a number using recursion
int fact(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) 
        return 1;
    
    // Recursive case: n! = n * (n-1)!
    return n * fact(n - 1);
}

int main() {
    int n;
    cin >> n;            // Input number n from user
    cout << fact(n);     // Output the factorial of n
    return 0;            // End of program
}
