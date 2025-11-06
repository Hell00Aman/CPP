#include<iostream>
using namespace std;

// Function to calculate a^b using recursion
int pow(int a, int b) {
    if(b == 0) return 1;       // Base case: any number to power 0 is 1
    return a * pow(a, b - 1);  // Recursive case: a^b = a * a^(b-1)
}

int main() {
    int a, b;
    cin >> a;  // Input base
    cin >> b;  // Input exponent
    cout << pow(a, b); // Output result
    return 0;
}
