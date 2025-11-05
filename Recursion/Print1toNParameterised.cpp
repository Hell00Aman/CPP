#include <iostream>     // include input/output library
using namespace std;

// Recursive function to calculate sum of first n numbers
void sum(int n, int s) {
    if (n == 0) {        // base case: stop when n becomes 0
        cout << s;       // print the total sum
        return;
    }
    sum(n - 1, s + n);   // recursive call: add current n to sum
}

int main() {
    int n;               // variable to store user input
    cin >> n;            // take input from user
    sum(n, 0);           // call function with initial sum = 0
    return 0;            // end of program
}
