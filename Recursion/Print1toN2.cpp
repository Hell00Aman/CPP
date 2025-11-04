#include <iostream>     // include library for input/output
using namespace std;

// Recursive function to print numbers from 1 to n
void print(int n) {
    if (n == 0) return; // base case: stop when n becomes 0
    print(n - 1);       // recursive call with (n-1)
    cout << n << endl;  // print the current number after recursion
}

int main() {
    print(6);           // call the function to print numbers 1 to 6
    return 0;           // end of program
}
