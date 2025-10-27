#include<iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for(int i = 1; i <= x; i++) {
        f *= i;  // Multiply each number up to x
    }
    return f;   // Return factorial value
}

int main() {
    int n, r;
    cin >> n >> r;               // Input n and r
    int a = fact(n);             // Calculate n!
    int b = fact(r);             // Calculate r!
    int c = fact(n - r);         // Calculate (n - r)!
    cout << a / (b * c);         // Print nCr = n! / (r! * (n - r)!)
}
