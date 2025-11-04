#include <iostream>     // include library for input/output
using namespace std;

// Recursive function to print numbers from x to n
void print(int x, int n) {
    if (x > n) return;  // base case: stop when x becomes greater than n
    cout << x << endl;  // print the current number
    print(x + 1, n);    // recursive call to print the next number
}

int main() {
    int n;              // variable to store user input
    cin >> n;           // take input from user
    print(1, n);        // call function starting from 1 to n
    return 0;           // end of program
}
