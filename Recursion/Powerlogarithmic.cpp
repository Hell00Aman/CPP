#include <iostream>
using namespace std;

// Function to calculate a^b using fast recursion (divide and conquer)
long long power(long long a, long long b) {
    if (b == 0) return 1;        // Base case: any number ^0 = 1
    long long half = power(a, b / 2);  // Compute half power
    if (b % 2 == 0) return half * half; // If even exponent
    else return a * half * half;        // If odd exponent
}

int main() {
    long long a, b;
    cin >> a >> b;        // Input base and exponent
    cout << power(a, b);  // Output result of a^b
    return 0;
}
