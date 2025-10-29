#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, r;
    cin >> n >> r;  // Input values of n and r

    int a = fact(n);     // n!
    int c = fact(n - r); // (n - r)!

    cout << a / c;       // nPr = n! / (n - r)!

    return 0;
}
