#include <iostream>     // include input/output library
using namespace std;

// Recursive function to calculate sum of first n numbers
int sum(int n) {
    if (n == 1) return 1;     // base case: when n = 1, return 1
    return n + sum(n - 1);    // recursive call: add n to sum of (n-1)
}

int main() {
    int n;                    // variable to store user input
    cin >> n;                 // take input from user
    cout << sum(n);           // print the total sum
    return 0;                 // end of program
}
